// Generated by gencpp from file torobo_msgs/ToroboCommand.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_TOROBOCOMMAND_H
#define TOROBO_MSGS_MESSAGE_TOROBOCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace torobo_msgs
{
template <class ContainerAllocator>
struct ToroboCommand_
{
  typedef ToroboCommand_<ContainerAllocator> Type;

  ToroboCommand_()
    : header()
    , timeStamp(0)
    , wholeOrder(0)
    , name()
    , jointOrder()
    , value1()
    , value2()
    , value3()
    , value4()  {
    }
  ToroboCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , timeStamp(0)
    , wholeOrder(0)
    , name(_alloc)
    , jointOrder(_alloc)
    , value1(_alloc)
    , value2(_alloc)
    , value3(_alloc)
    , value4(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint64_t _timeStamp_type;
  _timeStamp_type timeStamp;

   typedef uint32_t _wholeOrder_type;
  _wholeOrder_type wholeOrder;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _jointOrder_type;
  _jointOrder_type jointOrder;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _value1_type;
  _value1_type value1;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _value2_type;
  _value2_type value2;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _value3_type;
  _value3_type value3;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _value4_type;
  _value4_type value4;





  typedef boost::shared_ptr< ::torobo_msgs::ToroboCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::ToroboCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ToroboCommand_

typedef ::torobo_msgs::ToroboCommand_<std::allocator<void> > ToroboCommand;

typedef boost::shared_ptr< ::torobo_msgs::ToroboCommand > ToroboCommandPtr;
typedef boost::shared_ptr< ::torobo_msgs::ToroboCommand const> ToroboCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::ToroboCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::ToroboCommand_<ContainerAllocator1> & lhs, const ::torobo_msgs::ToroboCommand_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.timeStamp == rhs.timeStamp &&
    lhs.wholeOrder == rhs.wholeOrder &&
    lhs.name == rhs.name &&
    lhs.jointOrder == rhs.jointOrder &&
    lhs.value1 == rhs.value1 &&
    lhs.value2 == rhs.value2 &&
    lhs.value3 == rhs.value3 &&
    lhs.value4 == rhs.value4;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::ToroboCommand_<ContainerAllocator1> & lhs, const ::torobo_msgs::ToroboCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::ToroboCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::ToroboCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::ToroboCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3bf8e50c61e424559a97586c3168409a";
  }

  static const char* value(const ::torobo_msgs::ToroboCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3bf8e50c61e42455ULL;
  static const uint64_t static_value2 = 0x9a97586c3168409aULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/ToroboCommand";
  }

  static const char* value(const ::torobo_msgs::ToroboCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"uint64 timeStamp\n"
"uint32 wholeOrder\n"
"string[] name\n"
"uint32[] jointOrder\n"
"float32[] value1\n"
"float32[] value2\n"
"float32[] value3\n"
"float32[] value4\n"
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

  static const char* value(const ::torobo_msgs::ToroboCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.timeStamp);
      stream.next(m.wholeOrder);
      stream.next(m.name);
      stream.next(m.jointOrder);
      stream.next(m.value1);
      stream.next(m.value2);
      stream.next(m.value3);
      stream.next(m.value4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ToroboCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::ToroboCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::ToroboCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "timeStamp: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.timeStamp);
    s << indent << "wholeOrder: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wholeOrder);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "jointOrder[]" << std::endl;
    for (size_t i = 0; i < v.jointOrder.size(); ++i)
    {
      s << indent << "  jointOrder[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.jointOrder[i]);
    }
    s << indent << "value1[]" << std::endl;
    for (size_t i = 0; i < v.value1.size(); ++i)
    {
      s << indent << "  value1[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.value1[i]);
    }
    s << indent << "value2[]" << std::endl;
    for (size_t i = 0; i < v.value2.size(); ++i)
    {
      s << indent << "  value2[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.value2[i]);
    }
    s << indent << "value3[]" << std::endl;
    for (size_t i = 0; i < v.value3.size(); ++i)
    {
      s << indent << "  value3[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.value3[i]);
    }
    s << indent << "value4[]" << std::endl;
    for (size_t i = 0; i < v.value4.size(); ++i)
    {
      s << indent << "  value4[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.value4[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_TOROBOCOMMAND_H