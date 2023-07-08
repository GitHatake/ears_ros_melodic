// Generated by gencpp from file torobo_msgs/GetTeachingPoint.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_GETTEACHINGPOINT_H
#define TOROBO_MSGS_MESSAGE_GETTEACHINGPOINT_H

#include <ros/service_traits.h>


#include <torobo_msgs/GetTeachingPointRequest.h>
#include <torobo_msgs/GetTeachingPointResponse.h>


namespace torobo_msgs
{

struct GetTeachingPoint
{

typedef GetTeachingPointRequest Request;
typedef GetTeachingPointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTeachingPoint
} // namespace torobo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::torobo_msgs::GetTeachingPoint > {
  static const char* value()
  {
    return "cd31ca534ee0b773cd76acbd40a6c640";
  }

  static const char* value(const ::torobo_msgs::GetTeachingPoint&) { return value(); }
};

template<>
struct DataType< ::torobo_msgs::GetTeachingPoint > {
  static const char* value()
  {
    return "torobo_msgs/GetTeachingPoint";
  }

  static const char* value(const ::torobo_msgs::GetTeachingPoint&) { return value(); }
};


// service_traits::MD5Sum< ::torobo_msgs::GetTeachingPointRequest> should match
// service_traits::MD5Sum< ::torobo_msgs::GetTeachingPoint >
template<>
struct MD5Sum< ::torobo_msgs::GetTeachingPointRequest>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::GetTeachingPoint >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingPointRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::GetTeachingPointRequest> should match
// service_traits::DataType< ::torobo_msgs::GetTeachingPoint >
template<>
struct DataType< ::torobo_msgs::GetTeachingPointRequest>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::GetTeachingPoint >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingPointRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::torobo_msgs::GetTeachingPointResponse> should match
// service_traits::MD5Sum< ::torobo_msgs::GetTeachingPoint >
template<>
struct MD5Sum< ::torobo_msgs::GetTeachingPointResponse>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::GetTeachingPoint >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingPointResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::GetTeachingPointResponse> should match
// service_traits::DataType< ::torobo_msgs::GetTeachingPoint >
template<>
struct DataType< ::torobo_msgs::GetTeachingPointResponse>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::GetTeachingPoint >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingPointResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_GETTEACHINGPOINT_H