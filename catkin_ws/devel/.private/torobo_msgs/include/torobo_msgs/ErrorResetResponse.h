// Generated by gencpp from file torobo_msgs/ErrorResetResponse.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_ERRORRESETRESPONSE_H
#define TOROBO_MSGS_MESSAGE_ERRORRESETRESPONSE_H


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
struct ErrorResetResponse_
{
  typedef ErrorResetResponse_<ContainerAllocator> Type;

  ErrorResetResponse_()
    : success(false)  {
    }
  ErrorResetResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ErrorResetResponse_

typedef ::torobo_msgs::ErrorResetResponse_<std::allocator<void> > ErrorResetResponse;

typedef boost::shared_ptr< ::torobo_msgs::ErrorResetResponse > ErrorResetResponsePtr;
typedef boost::shared_ptr< ::torobo_msgs::ErrorResetResponse const> ErrorResetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator1> & lhs, const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator1> & lhs, const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/ErrorResetResponse";
  }

  static const char* value(const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ErrorResetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::ErrorResetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::ErrorResetResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_ERRORRESETRESPONSE_H
