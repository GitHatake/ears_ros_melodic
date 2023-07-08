// Generated by gencpp from file torobo_msgs/SetGeneralOutputRegisterRequest.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_SETGENERALOUTPUTREGISTERREQUEST_H
#define TOROBO_MSGS_MESSAGE_SETGENERALOUTPUTREGISTERREQUEST_H


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
struct SetGeneralOutputRegisterRequest_
{
  typedef SetGeneralOutputRegisterRequest_<ContainerAllocator> Type;

  SetGeneralOutputRegisterRequest_()
    : general_register_number(0)
    , parameter_name()
    , joint_names()  {
    }
  SetGeneralOutputRegisterRequest_(const ContainerAllocator& _alloc)
    : general_register_number(0)
    , parameter_name(_alloc)
    , joint_names(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _general_register_number_type;
  _general_register_number_type general_register_number;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _parameter_name_type;
  _parameter_name_type parameter_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;





  typedef boost::shared_ptr< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetGeneralOutputRegisterRequest_

typedef ::torobo_msgs::SetGeneralOutputRegisterRequest_<std::allocator<void> > SetGeneralOutputRegisterRequest;

typedef boost::shared_ptr< ::torobo_msgs::SetGeneralOutputRegisterRequest > SetGeneralOutputRegisterRequestPtr;
typedef boost::shared_ptr< ::torobo_msgs::SetGeneralOutputRegisterRequest const> SetGeneralOutputRegisterRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator2> & rhs)
{
  return lhs.general_register_number == rhs.general_register_number &&
    lhs.parameter_name == rhs.parameter_name &&
    lhs.joint_names == rhs.joint_names;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "15b89147ffb7b3fa1afbf0dc5f37e1c0";
  }

  static const char* value(const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x15b89147ffb7b3faULL;
  static const uint64_t static_value2 = 0x1afbf0dc5f37e1c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/SetGeneralOutputRegisterRequest";
  }

  static const char* value(const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# \"general_register_number\" : Target general register number [0-3]\n"
"# \"parameter_name\" : parameter name set to target general regiseter\n"
"# \"joint_names\" : Target joint names\n"
"int32 general_register_number\n"
"string parameter_name\n"
"string[] joint_names\n"
;
  }

  static const char* value(const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.general_register_number);
      stream.next(m.parameter_name);
      stream.next(m.joint_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGeneralOutputRegisterRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::SetGeneralOutputRegisterRequest_<ContainerAllocator>& v)
  {
    s << indent << "general_register_number: ";
    Printer<int32_t>::stream(s, indent + "  ", v.general_register_number);
    s << indent << "parameter_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.parameter_name);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_SETGENERALOUTPUTREGISTERREQUEST_H