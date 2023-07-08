// Generated by gencpp from file torobo_msgs/BrakeOff.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_BRAKEOFF_H
#define TOROBO_MSGS_MESSAGE_BRAKEOFF_H

#include <ros/service_traits.h>


#include <torobo_msgs/BrakeOffRequest.h>
#include <torobo_msgs/BrakeOffResponse.h>


namespace torobo_msgs
{

struct BrakeOff
{

typedef BrakeOffRequest Request;
typedef BrakeOffResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BrakeOff
} // namespace torobo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::torobo_msgs::BrakeOff > {
  static const char* value()
  {
    return "abb91c83ed030d595b2e5754d356a7f3";
  }

  static const char* value(const ::torobo_msgs::BrakeOff&) { return value(); }
};

template<>
struct DataType< ::torobo_msgs::BrakeOff > {
  static const char* value()
  {
    return "torobo_msgs/BrakeOff";
  }

  static const char* value(const ::torobo_msgs::BrakeOff&) { return value(); }
};


// service_traits::MD5Sum< ::torobo_msgs::BrakeOffRequest> should match
// service_traits::MD5Sum< ::torobo_msgs::BrakeOff >
template<>
struct MD5Sum< ::torobo_msgs::BrakeOffRequest>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::BrakeOff >::value();
  }
  static const char* value(const ::torobo_msgs::BrakeOffRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::BrakeOffRequest> should match
// service_traits::DataType< ::torobo_msgs::BrakeOff >
template<>
struct DataType< ::torobo_msgs::BrakeOffRequest>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::BrakeOff >::value();
  }
  static const char* value(const ::torobo_msgs::BrakeOffRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::torobo_msgs::BrakeOffResponse> should match
// service_traits::MD5Sum< ::torobo_msgs::BrakeOff >
template<>
struct MD5Sum< ::torobo_msgs::BrakeOffResponse>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::BrakeOff >::value();
  }
  static const char* value(const ::torobo_msgs::BrakeOffResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::BrakeOffResponse> should match
// service_traits::DataType< ::torobo_msgs::BrakeOff >
template<>
struct DataType< ::torobo_msgs::BrakeOffResponse>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::BrakeOff >::value();
  }
  static const char* value(const ::torobo_msgs::BrakeOffResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_BRAKEOFF_H