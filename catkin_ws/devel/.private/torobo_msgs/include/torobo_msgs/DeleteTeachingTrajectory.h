// Generated by gencpp from file torobo_msgs/DeleteTeachingTrajectory.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_DELETETEACHINGTRAJECTORY_H
#define TOROBO_MSGS_MESSAGE_DELETETEACHINGTRAJECTORY_H

#include <ros/service_traits.h>


#include <torobo_msgs/DeleteTeachingTrajectoryRequest.h>
#include <torobo_msgs/DeleteTeachingTrajectoryResponse.h>


namespace torobo_msgs
{

struct DeleteTeachingTrajectory
{

typedef DeleteTeachingTrajectoryRequest Request;
typedef DeleteTeachingTrajectoryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DeleteTeachingTrajectory
} // namespace torobo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::torobo_msgs::DeleteTeachingTrajectory > {
  static const char* value()
  {
    return "562d1a1ce249e5404efbe936d40d377a";
  }

  static const char* value(const ::torobo_msgs::DeleteTeachingTrajectory&) { return value(); }
};

template<>
struct DataType< ::torobo_msgs::DeleteTeachingTrajectory > {
  static const char* value()
  {
    return "torobo_msgs/DeleteTeachingTrajectory";
  }

  static const char* value(const ::torobo_msgs::DeleteTeachingTrajectory&) { return value(); }
};


// service_traits::MD5Sum< ::torobo_msgs::DeleteTeachingTrajectoryRequest> should match
// service_traits::MD5Sum< ::torobo_msgs::DeleteTeachingTrajectory >
template<>
struct MD5Sum< ::torobo_msgs::DeleteTeachingTrajectoryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::DeleteTeachingTrajectory >::value();
  }
  static const char* value(const ::torobo_msgs::DeleteTeachingTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::DeleteTeachingTrajectoryRequest> should match
// service_traits::DataType< ::torobo_msgs::DeleteTeachingTrajectory >
template<>
struct DataType< ::torobo_msgs::DeleteTeachingTrajectoryRequest>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::DeleteTeachingTrajectory >::value();
  }
  static const char* value(const ::torobo_msgs::DeleteTeachingTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::torobo_msgs::DeleteTeachingTrajectoryResponse> should match
// service_traits::MD5Sum< ::torobo_msgs::DeleteTeachingTrajectory >
template<>
struct MD5Sum< ::torobo_msgs::DeleteTeachingTrajectoryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::DeleteTeachingTrajectory >::value();
  }
  static const char* value(const ::torobo_msgs::DeleteTeachingTrajectoryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::DeleteTeachingTrajectoryResponse> should match
// service_traits::DataType< ::torobo_msgs::DeleteTeachingTrajectory >
template<>
struct DataType< ::torobo_msgs::DeleteTeachingTrajectoryResponse>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::DeleteTeachingTrajectory >::value();
  }
  static const char* value(const ::torobo_msgs::DeleteTeachingTrajectoryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_DELETETEACHINGTRAJECTORY_H
