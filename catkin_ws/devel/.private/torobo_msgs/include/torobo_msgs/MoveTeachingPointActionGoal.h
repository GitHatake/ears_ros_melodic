// Generated by gencpp from file torobo_msgs/MoveTeachingPointActionGoal.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_MOVETEACHINGPOINTACTIONGOAL_H
#define TOROBO_MSGS_MESSAGE_MOVETEACHINGPOINTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <torobo_msgs/MoveTeachingPointGoal.h>

namespace torobo_msgs
{
template <class ContainerAllocator>
struct MoveTeachingPointActionGoal_
{
  typedef MoveTeachingPointActionGoal_<ContainerAllocator> Type;

  MoveTeachingPointActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  MoveTeachingPointActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MoveTeachingPointActionGoal_

typedef ::torobo_msgs::MoveTeachingPointActionGoal_<std::allocator<void> > MoveTeachingPointActionGoal;

typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointActionGoal > MoveTeachingPointActionGoalPtr;
typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointActionGoal const> MoveTeachingPointActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator1> & lhs, const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator1> & lhs, const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b41fbacef8180c461a5b6a645d061a7";
  }

  static const char* value(const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b41fbacef8180c4ULL;
  static const uint64_t static_value2 = 0x61a5b6a645d061a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/MoveTeachingPointActionGoal";
  }

  static const char* value(const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"MoveTeachingPointGoal goal\n"
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
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: torobo_msgs/MoveTeachingPointGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Goal\n"
"string teachingPointName\n"
"float64 transitionTime\n"
;
  }

  static const char* value(const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveTeachingPointActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::MoveTeachingPointActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_MOVETEACHINGPOINTACTIONGOAL_H
