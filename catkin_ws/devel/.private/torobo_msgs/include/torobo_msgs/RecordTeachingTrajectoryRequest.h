// Generated by gencpp from file torobo_msgs/RecordTeachingTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_RECORDTEACHINGTRAJECTORYREQUEST_H
#define TOROBO_MSGS_MESSAGE_RECORDTEACHINGTRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>

namespace torobo_msgs
{
template <class ContainerAllocator>
struct RecordTeachingTrajectoryRequest_
{
  typedef RecordTeachingTrajectoryRequest_<ContainerAllocator> Type;

  RecordTeachingTrajectoryRequest_()
    : teachingTrajectoryName()
    , trajectory()  {
    }
  RecordTeachingTrajectoryRequest_(const ContainerAllocator& _alloc)
    : teachingTrajectoryName(_alloc)
    , trajectory(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _teachingTrajectoryName_type;
  _teachingTrajectoryName_type teachingTrajectoryName;

   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _trajectory_type;
  _trajectory_type trajectory;





  typedef boost::shared_ptr< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RecordTeachingTrajectoryRequest_

typedef ::torobo_msgs::RecordTeachingTrajectoryRequest_<std::allocator<void> > RecordTeachingTrajectoryRequest;

typedef boost::shared_ptr< ::torobo_msgs::RecordTeachingTrajectoryRequest > RecordTeachingTrajectoryRequestPtr;
typedef boost::shared_ptr< ::torobo_msgs::RecordTeachingTrajectoryRequest const> RecordTeachingTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return lhs.teachingTrajectoryName == rhs.teachingTrajectoryName &&
    lhs.trajectory == rhs.trajectory;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c44ce251790577e1091956b272711c0b";
  }

  static const char* value(const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc44ce251790577e1ULL;
  static const uint64_t static_value2 = 0x091956b272711c0bULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/RecordTeachingTrajectoryRequest";
  }

  static const char* value(const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string teachingTrajectoryName\n"
"trajectory_msgs/JointTrajectory trajectory\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
;
  }

  static const char* value(const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.teachingTrajectoryName);
      stream.next(m.trajectory);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecordTeachingTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::RecordTeachingTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "teachingTrajectoryName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.teachingTrajectoryName);
    s << indent << "trajectory: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_RECORDTEACHINGTRAJECTORYREQUEST_H