// Generated by gencpp from file torobo_msgs/SetPayloadParamRequest.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_SETPAYLOADPARAMREQUEST_H
#define TOROBO_MSGS_MESSAGE_SETPAYLOADPARAMREQUEST_H


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
struct SetPayloadParamRequest_
{
  typedef SetPayloadParamRequest_<ContainerAllocator> Type;

  SetPayloadParamRequest_()
    : name()
    , mass(0.0)
    , com()
    , inertiaElem()  {
    }
  SetPayloadParamRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , mass(0.0)
    , com(_alloc)
    , inertiaElem(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef double _mass_type;
  _mass_type mass;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _com_type;
  _com_type com;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _inertiaElem_type;
  _inertiaElem_type inertiaElem;





  typedef boost::shared_ptr< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPayloadParamRequest_

typedef ::torobo_msgs::SetPayloadParamRequest_<std::allocator<void> > SetPayloadParamRequest;

typedef boost::shared_ptr< ::torobo_msgs::SetPayloadParamRequest > SetPayloadParamRequestPtr;
typedef boost::shared_ptr< ::torobo_msgs::SetPayloadParamRequest const> SetPayloadParamRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.mass == rhs.mass &&
    lhs.com == rhs.com &&
    lhs.inertiaElem == rhs.inertiaElem;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator1> & lhs, const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace torobo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f76d249ec63a2eb572372b2b63bfd379";
  }

  static const char* value(const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf76d249ec63a2eb5ULL;
  static const uint64_t static_value2 = 0x72372b2b63bfd379ULL;
};

template<class ContainerAllocator>
struct DataType< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "torobo_msgs/SetPayloadParamRequest";
  }

  static const char* value(const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"float64 mass\n"
"float64[] com            # x, y, z\n"
"float64[] inertiaElem    # ixx, ixy, ixz, iyy, iyz, izz\n"
;
  }

  static const char* value(const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.mass);
      stream.next(m.com);
      stream.next(m.inertiaElem);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPayloadParamRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::torobo_msgs::SetPayloadParamRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "mass: ";
    Printer<double>::stream(s, indent + "  ", v.mass);
    s << indent << "com[]" << std::endl;
    for (size_t i = 0; i < v.com.size(); ++i)
    {
      s << indent << "  com[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.com[i]);
    }
    s << indent << "inertiaElem[]" << std::endl;
    for (size_t i = 0; i < v.inertiaElem.size(); ++i)
    {
      s << indent << "  inertiaElem[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.inertiaElem[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_SETPAYLOADPARAMREQUEST_H
