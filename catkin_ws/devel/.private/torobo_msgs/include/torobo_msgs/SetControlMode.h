// Generated by gencpp from file torobo_msgs/SetControlMode.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_SETCONTROLMODE_H
#define TOROBO_MSGS_MESSAGE_SETCONTROLMODE_H

#include <ros/service_traits.h>


#include <torobo_msgs/SetControlModeRequest.h>
#include <torobo_msgs/SetControlModeResponse.h>


namespace torobo_msgs
{

struct SetControlMode
{

typedef SetControlModeRequest Request;
typedef SetControlModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetControlMode
} // namespace torobo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::torobo_msgs::SetControlMode > {
  static const char* value()
  {
    return "e26e80bafb3f23a073b513f0feca433e";
  }

  static const char* value(const ::torobo_msgs::SetControlMode&) { return value(); }
};

template<>
struct DataType< ::torobo_msgs::SetControlMode > {
  static const char* value()
  {
    return "torobo_msgs/SetControlMode";
  }

  static const char* value(const ::torobo_msgs::SetControlMode&) { return value(); }
};


// service_traits::MD5Sum< ::torobo_msgs::SetControlModeRequest> should match
// service_traits::MD5Sum< ::torobo_msgs::SetControlMode >
template<>
struct MD5Sum< ::torobo_msgs::SetControlModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::SetControlMode >::value();
  }
  static const char* value(const ::torobo_msgs::SetControlModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::SetControlModeRequest> should match
// service_traits::DataType< ::torobo_msgs::SetControlMode >
template<>
struct DataType< ::torobo_msgs::SetControlModeRequest>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::SetControlMode >::value();
  }
  static const char* value(const ::torobo_msgs::SetControlModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::torobo_msgs::SetControlModeResponse> should match
// service_traits::MD5Sum< ::torobo_msgs::SetControlMode >
template<>
struct MD5Sum< ::torobo_msgs::SetControlModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::SetControlMode >::value();
  }
  static const char* value(const ::torobo_msgs::SetControlModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::SetControlModeResponse> should match
// service_traits::DataType< ::torobo_msgs::SetControlMode >
template<>
struct DataType< ::torobo_msgs::SetControlModeResponse>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::SetControlMode >::value();
  }
  static const char* value(const ::torobo_msgs::SetControlModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_SETCONTROLMODE_H