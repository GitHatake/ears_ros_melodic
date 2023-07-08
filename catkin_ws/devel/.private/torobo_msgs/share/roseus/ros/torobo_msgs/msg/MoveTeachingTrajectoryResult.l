;; Auto-generated. Do not edit!


(when (boundp 'torobo_msgs::MoveTeachingTrajectoryResult)
  (if (not (find-package "TOROBO_MSGS"))
    (make-package "TOROBO_MSGS"))
  (shadow 'MoveTeachingTrajectoryResult (find-package "TOROBO_MSGS")))
(unless (find-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT")
  (make-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT"))

(in-package "ROS")
;;//! \htmlinclude MoveTeachingTrajectoryResult.msg.html
(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))


(intern "*SUCCESSFUL*" (find-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT"))
(shadow '*SUCCESSFUL* (find-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT"))
(defconstant torobo_msgs::MoveTeachingTrajectoryResult::*SUCCESSFUL* 0)
(intern "*FAILURE*" (find-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT"))
(shadow '*FAILURE* (find-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT"))
(defconstant torobo_msgs::MoveTeachingTrajectoryResult::*FAILURE* -1)
(intern "*PREEMPTED*" (find-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT"))
(shadow '*PREEMPTED* (find-package "TOROBO_MSGS::MOVETEACHINGTRAJECTORYRESULT"))
(defconstant torobo_msgs::MoveTeachingTrajectoryResult::*PREEMPTED* -2)
(defclass torobo_msgs::MoveTeachingTrajectoryResult
  :super ros::object
  :slots (_errorCode _jointState ))

(defmethod torobo_msgs::MoveTeachingTrajectoryResult
  (:init
   (&key
    ((:errorCode __errorCode) 0)
    ((:jointState __jointState) (instance sensor_msgs::JointState :init))
    )
   (send-super :init)
   (setq _errorCode (round __errorCode))
   (setq _jointState __jointState)
   self)
  (:errorCode
   (&optional __errorCode)
   (if __errorCode (setq _errorCode __errorCode)) _errorCode)
  (:jointState
   (&rest __jointState)
   (if (keywordp (car __jointState))
       (send* _jointState __jointState)
     (progn
       (if __jointState (setq _jointState (car __jointState)))
       _jointState)))
  (:serialization-length
   ()
   (+
    ;; int32 _errorCode
    4
    ;; sensor_msgs/JointState _jointState
    (send _jointState :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _errorCode
       (write-long _errorCode s)
     ;; sensor_msgs/JointState _jointState
       (send _jointState :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _errorCode
     (setq _errorCode (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; sensor_msgs/JointState _jointState
     (send _jointState :deserialize buf ptr-) (incf ptr- (send _jointState :serialization-length))
   ;;
   self)
  )

(setf (get torobo_msgs::MoveTeachingTrajectoryResult :md5sum-) "5af78d1aaab840aeb31f007340c79c5c")
(setf (get torobo_msgs::MoveTeachingTrajectoryResult :datatype-) "torobo_msgs/MoveTeachingTrajectoryResult")
(setf (get torobo_msgs::MoveTeachingTrajectoryResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Result
int32 errorCode
int32 SUCCESSFUL = 0
int32 FAILURE = -1
int32 PREEMPTED = -2
sensor_msgs/JointState jointState

================================================================================
MSG: sensor_msgs/JointState
# This is a message that holds data to describe the state of a set of torque controlled joints. 
#
# The state of each joint (revolute or prismatic) is defined by:
#  * the position of the joint (rad or m),
#  * the velocity of the joint (rad/s or m/s) and 
#  * the effort that is applied in the joint (Nm or N).
#
# Each joint is uniquely identified by its name
# The header specifies the time at which the joint states were recorded. All the joint states
# in one message have to be recorded at the same time.
#
# This message consists of a multiple arrays, one for each part of the joint state. 
# The goal is to make each of the fields optional. When e.g. your joints have no
# effort associated with them, you can leave the effort array empty. 
#
# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the correct
# states.


Header header

string[] name
float64[] position
float64[] velocity
float64[] effort

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :torobo_msgs/MoveTeachingTrajectoryResult "5af78d1aaab840aeb31f007340c79c5c")

