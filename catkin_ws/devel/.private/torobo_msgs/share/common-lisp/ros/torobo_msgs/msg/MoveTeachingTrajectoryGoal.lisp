; Auto-generated. Do not edit!


(cl:in-package torobo_msgs-msg)


;//! \htmlinclude MoveTeachingTrajectoryGoal.msg.html

(cl:defclass <MoveTeachingTrajectoryGoal> (roslisp-msg-protocol:ros-message)
  ((teachingTrajectoryName
    :reader teachingTrajectoryName
    :initarg :teachingTrajectoryName
    :type cl:string
    :initform ""))
)

(cl:defclass MoveTeachingTrajectoryGoal (<MoveTeachingTrajectoryGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveTeachingTrajectoryGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveTeachingTrajectoryGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name torobo_msgs-msg:<MoveTeachingTrajectoryGoal> is deprecated: use torobo_msgs-msg:MoveTeachingTrajectoryGoal instead.")))

(cl:ensure-generic-function 'teachingTrajectoryName-val :lambda-list '(m))
(cl:defmethod teachingTrajectoryName-val ((m <MoveTeachingTrajectoryGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader torobo_msgs-msg:teachingTrajectoryName-val is deprecated.  Use torobo_msgs-msg:teachingTrajectoryName instead.")
  (teachingTrajectoryName m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveTeachingTrajectoryGoal>) ostream)
  "Serializes a message object of type '<MoveTeachingTrajectoryGoal>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'teachingTrajectoryName))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'teachingTrajectoryName))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveTeachingTrajectoryGoal>) istream)
  "Deserializes a message object of type '<MoveTeachingTrajectoryGoal>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'teachingTrajectoryName) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'teachingTrajectoryName) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveTeachingTrajectoryGoal>)))
  "Returns string type for a message object of type '<MoveTeachingTrajectoryGoal>"
  "torobo_msgs/MoveTeachingTrajectoryGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveTeachingTrajectoryGoal)))
  "Returns string type for a message object of type 'MoveTeachingTrajectoryGoal"
  "torobo_msgs/MoveTeachingTrajectoryGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveTeachingTrajectoryGoal>)))
  "Returns md5sum for a message object of type '<MoveTeachingTrajectoryGoal>"
  "e69c8cdc2b83254a745638df8e512b10")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveTeachingTrajectoryGoal)))
  "Returns md5sum for a message object of type 'MoveTeachingTrajectoryGoal"
  "e69c8cdc2b83254a745638df8e512b10")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveTeachingTrajectoryGoal>)))
  "Returns full string definition for message of type '<MoveTeachingTrajectoryGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%string teachingTrajectoryName~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveTeachingTrajectoryGoal)))
  "Returns full string definition for message of type 'MoveTeachingTrajectoryGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%string teachingTrajectoryName~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveTeachingTrajectoryGoal>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'teachingTrajectoryName))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveTeachingTrajectoryGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveTeachingTrajectoryGoal
    (cl:cons ':teachingTrajectoryName (teachingTrajectoryName msg))
))