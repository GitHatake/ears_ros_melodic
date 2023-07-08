// Generated by gencpp from file torobo_msgs/GetTeachingTrajectoryNames.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_GETTEACHINGTRAJECTORYNAMES_H
#define TOROBO_MSGS_MESSAGE_GETTEACHINGTRAJECTORYNAMES_H

#include <ros/service_traits.h>


#include <torobo_msgs/GetTeachingTrajectoryNamesRequest.h>
#include <torobo_msgs/GetTeachingTrajectoryNamesResponse.h>


namespace torobo_msgs
{

struct GetTeachingTrajectoryNames
{

typedef GetTeachingTrajectoryNamesRequest Request;
typedef GetTeachingTrajectoryNamesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTeachingTrajectoryNames
} // namespace torobo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNames > {
  static const char* value()
  {
    return "b78c8a970090dfff436e75670b29785b";
  }

  static const char* value(const ::torobo_msgs::GetTeachingTrajectoryNames&) { return value(); }
};

template<>
struct DataType< ::torobo_msgs::GetTeachingTrajectoryNames > {
  static const char* value()
  {
    return "torobo_msgs/GetTeachingTrajectoryNames";
  }

  static const char* value(const ::torobo_msgs::GetTeachingTrajectoryNames&) { return value(); }
};


// service_traits::MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNamesRequest> should match
// service_traits::MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNames >
template<>
struct MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNamesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNames >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingTrajectoryNamesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::GetTeachingTrajectoryNamesRequest> should match
// service_traits::DataType< ::torobo_msgs::GetTeachingTrajectoryNames >
template<>
struct DataType< ::torobo_msgs::GetTeachingTrajectoryNamesRequest>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::GetTeachingTrajectoryNames >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingTrajectoryNamesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNamesResponse> should match
// service_traits::MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNames >
template<>
struct MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNamesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::GetTeachingTrajectoryNames >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingTrajectoryNamesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::GetTeachingTrajectoryNamesResponse> should match
// service_traits::DataType< ::torobo_msgs::GetTeachingTrajectoryNames >
template<>
struct DataType< ::torobo_msgs::GetTeachingTrajectoryNamesResponse>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::GetTeachingTrajectoryNames >::value();
  }
  static const char* value(const ::torobo_msgs::GetTeachingTrajectoryNamesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_GETTEACHINGTRAJECTORYNAMES_H