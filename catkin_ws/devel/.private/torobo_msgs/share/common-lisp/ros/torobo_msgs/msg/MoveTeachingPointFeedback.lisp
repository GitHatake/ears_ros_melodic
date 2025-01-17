; Auto-generated. Do not edit!


(cl:in-package torobo_msgs-msg)


;//! \htmlinclude MoveTeachingPointFeedback.msg.html

(cl:defclass <MoveTeachingPointFeedback> (roslisp-msg-protocol:ros-message)
  ((actual
    :reader actual
    :initarg :actual
    :type trajectory_msgs-msg:JointTrajectoryPoint
    :initform (cl:make-instance 'trajectory_msgs-msg:JointTrajectoryPoint)))
)

(cl:defclass MoveTeachingPointFeedback (<MoveTeachingPointFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveTeachingPointFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveTeachingPointFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name torobo_msgs-msg:<MoveTeachingPointFeedback> is deprecated: use torobo_msgs-msg:MoveTeachingPointFeedback instead.")))

(cl:ensure-generic-function 'actual-val :lambda-list '(m))
(cl:defmethod actual-val ((m <MoveTeachingPointFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader torobo_msgs-msg:actual-val is deprecated.  Use torobo_msgs-msg:actual instead.")
  (actual m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveTeachingPointFeedback>) ostream)
  "Serializes a message object of type '<MoveTeachingPointFeedback>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'actual) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveTeachingPointFeedback>) istream)
  "Deserializes a message object of type '<MoveTeachingPointFeedback>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'actual) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveTeachingPointFeedback>)))
  "Returns string type for a message object of type '<MoveTeachingPointFeedback>"
  "torobo_msgs/MoveTeachingPointFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveTeachingPointFeedback)))
  "Returns string type for a message object of type 'MoveTeachingPointFeedback"
  "torobo_msgs/MoveTeachingPointFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveTeachingPointFeedback>)))
  "Returns md5sum for a message object of type '<MoveTeachingPointFeedback>"
  "473828e1b0881c8cb007ca255949f320")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveTeachingPointFeedback)))
  "Returns md5sum for a message object of type 'MoveTeachingPointFeedback"
  "473828e1b0881c8cb007ca255949f320")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveTeachingPointFeedback>)))
  "Returns full string definition for message of type '<MoveTeachingPointFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Feedback~%trajectory_msgs/JointTrajectoryPoint actual~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectoryPoint~%# Each trajectory point specifies either positions[, velocities[, accelerations]]~%# or positions[, effort] for the trajectory to be executed.~%# All specified values are in the same order as the joint names in JointTrajectory.msg~%~%float64[] positions~%float64[] velocities~%float64[] accelerations~%float64[] effort~%duration time_from_start~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveTeachingPointFeedback)))
  "Returns full string definition for message of type 'MoveTeachingPointFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Feedback~%trajectory_msgs/JointTrajectoryPoint actual~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectoryPoint~%# Each trajectory point specifies either positions[, velocities[, accelerations]]~%# or positions[, effort] for the trajectory to be executed.~%# All specified values are in the same order as the joint names in JointTrajectory.msg~%~%float64[] positions~%float64[] velocities~%float64[] accelerations~%float64[] effort~%duration time_from_start~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveTeachingPointFeedback>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'actual))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveTeachingPointFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveTeachingPointFeedback
    (cl:cons ':actual (actual msg))
))
