import rospy
import tf
import pyrealsense2 as rs
import numpy as np
import cv2
import csv
import pprint
import moveit_commander
from std_msgs.msg import Header
from geometry_msgs.msg import Pose, PoseStamped, TransformStamped
from moveit_msgs.srv import GetPositionFK, GetPositionIK
from moveit_msgs.msg import RobotState, PositionIKRequest

WIDTH = 640
HEIGHT = 480
FPS = 60
THRESHOLD = 1.5  # これより遠い距離の画素を無視する
BG_PATH = "./image.png"  # 背景画像のパス
x = 320 #深度情報取得位置
y = 240


def main():

    torobo = Torobo(movegroup="arm", tooltip="arm/link_7")
    res = torobo.compute_fk(joint_angles=np.radians([-104.1, -72.8, 71.8, 66.2, 77.5, 116.9, 8.3]))
    res = torobo.compute_ik(x=res[0], y=res[1], z=res[2], roll=res[3], pitch=res[4], yaw=res[5])

    align = rs.align(rs.stream.color)
    config = rs.config()
    config.enable_stream(rs.stream.color, WIDTH, HEIGHT, rs.format.bgr8, FPS)
    config.enable_stream(rs.stream.depth, WIDTH, HEIGHT, rs.format.z16, FPS)

    pipeline = rs.pipeline()
    profile = pipeline.start(config)
    #depth_scale = profile.get_device().first_depth_sensor().get_depth_scale()
    #max_dist = THRESHOLD/depth_scale

    #bg_image = cv2.imread(BG_PATH, cv2.IMREAD_COLOR)

    try:
        while True:
            # フレーム取得
            frames = pipeline.wait_for_frames()
            aligned_frames = align.process(frames)

            color_frame = aligned_frames.get_color_frame()
            depth_frame = aligned_frames.get_depth_frame()
            if not depth_frame or not color_frame:
                continue
            # RGB画像
            color_image = np.asanyarray(color_frame.get_data())

            # 深度画像
            depth_color_frame = rs.colorizer().colorize(depth_frame)
            depth_color_image = np.asanyarray(depth_color_frame.get_data())

            # 指定距離以上を無視した深度画像
            #depth_image = np.asanyarray(depth_frame.get_data())
            #depth_filtered_image = (depth_image < max_dist) * depth_image
            #depth_gray_filtered_image = (depth_filtered_image * 255. / max_dist).reshape((HEIGHT, WIDTH)).astype(np.uint8)

            # 指定距離以上を無視したRGB画像
            #color_filtered_image = (depth_filtered_image.reshape((HEIGHT, WIDTH, 1)) > 0) * color_image

            # 背景合成
            #background_masked_image = (depth_filtered_image.reshape((HEIGHT, WIDTH, 1)) == 0) * bg_image
            #composite_image = background_masked_image + color_filtered_image

            # 距離情報の取得
            depth_data = depth_frame.get_distance(x,y)
            print (depth_data)

            # 表示
            cv2.namedWindow('demo', cv2.WINDOW_AUTOSIZE)
            cv2.imshow('demo', color_image)


            if cv2.waitKey(1) & 0xff == 27:
                break

    finally:
        pipeline.stop()
        cv2.destroyAllWindows()

class Torobo:

    def __init__(self, movegroup, tooltip):
        """
        constructor of this class

        Parameters
        ----------
        movegroup : string
            Specify move group's name(string) you want to operate. Selectable move group is written in moveit_config's srdf file.
        tooltip   : string
            Specify tooltip's name(string) you want to set position.
        """

        rospy.init_node("toroboarm_moveit_kinematics_node", anonymous=True)
        rospy.Rate(1)
        rospy.sleep(1)

        # load MoveGroupCommander by string('arm') registerd in 'torobo.srdf'
        self._robot = moveit_commander.MoveGroupCommander(movegroup, robot_description=rospy.get_namespace() +"robot_description", ns=rospy.get_namespace())
        self._active_joints = self._robot.get_active_joints()
        self._tooltip = tooltip

        # load fk/ik service
        rospy.loginfo("loading fk")
        rospy.wait_for_service('compute_fk')
        rospy.wait_for_service('compute_ik')
        try:
            self._moveit_fk = rospy.ServiceProxy('compute_fk', GetPositionFK)
            self._moveit_ik = rospy.ServiceProxy('compute_ik', GetPositionIK)
        except rospy.ServiceException, e:
            rospy.logerror("Service call failed: %s"%e)


    def compute_fk(self, joint_angles):
        """
        Function for computing forward kinematics

        Parameters
        ----------
        joint_angles : list
            list of joint's angles [rad]

        Returns
        -------
        x, y, z, roll, pitch, yaw : float
            result of compute_fk (position(meter) and pose(radian))
        """

        rospy.loginfo("---- compute fk ----")

        # check input array length
        if len(self._active_joints) != len(joint_angles):
            rospy.logwarn("joint_angles doesn't matches active_joints")
            num_diff = len(self._active_joints) - len(joint_angles)
            if num_diff > 0:
                for _ in range(num_diff):
                    joint_angles = np.append(joint_angles, 0.0)

        # print input
        rospy.loginfo("[input]")
        for i in range(len(self._active_joints)):
            rospy.loginfo("    {0} : {1:.2f}".format(self._active_joints[i], np.degrees(joint_angles[i])))

        # create messages
        header = Header(0, rospy.Time.now(), "world")
        rs = RobotState()
        rs.joint_state.name = self._active_joints
        rs.joint_state.position = joint_angles

        # get forward kinematics solution
        fk_result = self._moveit_fk(header, [self._tooltip], rs)
        assert len(fk_result.pose_stamped) > 0, "fk has no solution"
        pose = fk_result.pose_stamped[0].pose
        euler = tf.transformations.euler_from_quaternion(
            (pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w)
        )

        # print result
        rospy.loginfo("[output]")
        rospy.loginfo("    x     : {:.2f}".format(pose.position.x))
        rospy.loginfo("    y     : {:.2f}".format(pose.position.y))
        rospy.loginfo("    z     : {:.2f}".format(pose.position.z))
        rospy.loginfo("    roll  : {:.2f}".format(np.degrees(euler[0])))
        rospy.loginfo("    pitch : {:.2f}".format(np.degrees(euler[1])))
        rospy.loginfo("    yaw   : {:.2f}".format(np.degrees(euler[2])))

        return pose.position.x, pose.position.y, pose.position.z, euler[0], euler[1], euler[2]


    def compute_ik(self, x, y, z, roll, pitch, yaw):
        """
        Function for computing inverse kinematics

        Parameters
        ----------
        x, y, z, roll, pitch, yaw : float
            tooltip's position(meter) and pose(radian)

        Returns
        -------
        joint_state : JointState
            result of compute_ik (list of joint angles)
        """

        rospy.loginfo("---- compute ik ----")

        # print input
        rospy.loginfo("[input]")
        rospy.loginfo("    x     : {:.2f}".format(x))
        rospy.loginfo("    y     : {:.2f}".format(y))
        rospy.loginfo("    z     : {:.2f}".format(z))
        rospy.loginfo("    roll  : {:.2f}".format(np.degrees(roll)))
        rospy.loginfo("    pitch : {:.2f}".format(np.degrees(pitch)))
        rospy.loginfo("    yaw   : {:.2f}".format(np.degrees(yaw)))

        quaternion = tf.transformations.quaternion_from_euler(roll, pitch, yaw)

        # create request
        req = PositionIKRequest()
        req.timeout = rospy.Duration(5.0)
        req.ik_link_name = self._tooltip
        req.pose_stamped.header.frame_id = "world"
        req.pose_stamped.pose.position.x = x
        req.pose_stamped.pose.position.y = y
        req.pose_stamped.pose.position.z = z
        req.pose_stamped.pose.orientation.x = quaternion[0]
        req.pose_stamped.pose.orientation.y = quaternion[1]
        req.pose_stamped.pose.orientation.z = quaternion[2]
        req.pose_stamped.pose.orientation.w = quaternion[3]
        req.robot_state.joint_state.name = self._active_joints
        req.robot_state.joint_state.position = self._robot.get_current_joint_values() # current values as seeds
        req.group_name = self._robot.get_name()
        req.avoid_collisions = False

        # get ik result
        ik_result = self._moveit_ik(req).solution

        # print result
        rospy.loginfo("[output]")
        for i in range(len(ik_result.joint_state.name)):
            joint_name = ik_result.joint_state.name[i]
            if joint_name in self._active_joints:
                rospy.loginfo("    {0} : {1:.2f}".format(joint_name, np.degrees(ik_result.joint_state.position[i])))

        return ik_result.joint_state

if __name__ == "__main__":
    main()