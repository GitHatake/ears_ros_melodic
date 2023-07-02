// Generated by gencpp from file torobo_msgs/CollisionInfoRequest.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_COLLISIONINFOREQUEST_H
#define TOROBO_MSGS_MESSAGE_COLLISIONINFOREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/JointState.h>

namespace torobo_msgs
{
template <class ContainerAllocator>
struct CollisionInfoRequest_
{
  typedef CollisionInfoRequest_<ContainerAllocator> Type;

  CollisionInfoRequest_()
    : jointState()
    , max_contacts(0)  {
    }
  CollisionInfoRequest_(const ContainerAllocator& _alloc)
    : jointState(_alloc)
    , max_contacts(0)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _jointState_type;
  _jointState_type jointState;

   typedef uint32_t _max_contacts_type;
  _max_contacts_type max_contacts;





  typedef boost::shared_ptr< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CollisionInfoRequest_

typedef ::torobo_msgs::CollisionInfoRequest_<std::allocator<void> > CollisionInfoRequest;

typedef boost::shared_ptr< ::torobo_msgs::CollisionInfoRequest > CollisionInfoRequestPtr;
typedef boost::shared_ptr< ::torobo_msgs::CollisionInfoRequest const> CollisionInfoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator2> & rhs)
{
  return lhs.jointState == rhs.jointState &&
    lhs.max_contacts == rhs.max_contacts;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "011912b45619601da9981598cea2b9a3";
  }

  static const char* value(const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x011912b45619601dULL;
  static const uint64_t static_value2 = 0xa9981598cea2b9a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/CollisionInfoRequest";
  }

  static const char* value(const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/JointState jointState\n"
"uint32 max_contacts\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
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
;
  }

  static const char* value(const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.jointState);
      stream.next(m.max_contacts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CollisionInfoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::CollisionInfoRequest_<ContainerAllocator>& v)
  {
    s << indent << "jointState: ";
    s << std::endl;
    Printer< ::sensor_msgs::JointState_<ContainerAllocator> >::stream(s, indent + "  ", v.jointState);
    s << indent << "max_contacts: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.max_contacts);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_COLLISIONINFOREQUEST_H
