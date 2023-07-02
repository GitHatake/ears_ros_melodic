// Generated by gencpp from file torobo_msgs/MoveTeachingPointGoal.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_MOVETEACHINGPOINTGOAL_H
#define TOROBO_MSGS_MESSAGE_MOVETEACHINGPOINTGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace torobo_msgs
{
template <class ContainerAllocator>
struct MoveTeachingPointGoal_
{
  typedef MoveTeachingPointGoal_<ContainerAllocator> Type;

  MoveTeachingPointGoal_()
    : teachingPointName()
    , transitionTime(0.0)  {
    }
  MoveTeachingPointGoal_(const ContainerAllocator& _alloc)
    : teachingPointName(_alloc)
    , transitionTime(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _teachingPointName_type;
  _teachingPointName_type teachingPointName;

   typedef double _transitionTime_type;
  _transitionTime_type transitionTime;





  typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MoveTeachingPointGoal_

typedef ::torobo_msgs::MoveTeachingPointGoal_<std::allocator<void> > MoveTeachingPointGoal;

typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointGoal > MoveTeachingPointGoalPtr;
typedef boost::shared_ptr< ::torobo_msgs::MoveTeachingPointGoal const> MoveTeachingPointGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator1> & lhs, const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator2> & rhs)
{
  return lhs.teachingPointName == rhs.teachingPointName &&
    lhs.transitionTime == rhs.transitionTime;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator1> & lhs, const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89a7bfc02970fbbaf04fb4fe151a93b1";
  }

  static const char* value(const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89a7bfc02970fbbaULL;
  static const uint64_t static_value2 = 0xf04fb4fe151a93b1ULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/MoveTeachingPointGoal";
  }

  static const char* value(const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Goal\n"
"string teachingPointName\n"
"float64 transitionTime\n"
;
  }

  static const char* value(const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.teachingPointName);
      stream.next(m.transitionTime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveTeachingPointGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::MoveTeachingPointGoal_<ContainerAllocator>& v)
  {
    s << indent << "teachingPointName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.teachingPointName);
    s << indent << "transitionTime: ";
    Printer<double>::stream(s, indent + "  ", v.transitionTime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_MOVETEACHINGPOINTGOAL_H
