// Generated by gencpp from file torobo_msgs/SendCommonCommand.msg
// DO NOT EDIT!


#ifndef TOROBO_MSGS_MESSAGE_SENDCOMMONCOMMAND_H
#define TOROBO_MSGS_MESSAGE_SENDCOMMONCOMMAND_H

#include <ros/service_traits.h>


#include <torobo_msgs/SendCommonCommandRequest.h>
#include <torobo_msgs/SendCommonCommandResponse.h>


namespace torobo_msgs
{

struct SendCommonCommand
{

typedef SendCommonCommandRequest Request;
typedef SendCommonCommandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SendCommonCommand
} // namespace torobo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::torobo_msgs::SendCommonCommand > {
  static const char* value()
  {
    return "64dbb1a2af96fe7e3d28eaf27482f2f9";
  }

  static const char* value(const ::torobo_msgs::SendCommonCommand&) { return value(); }
};

template<>
struct DataType< ::torobo_msgs::SendCommonCommand > {
  static const char* value()
  {
    return "torobo_msgs/SendCommonCommand";
  }

  static const char* value(const ::torobo_msgs::SendCommonCommand&) { return value(); }
};


// service_traits::MD5Sum< ::torobo_msgs::SendCommonCommandRequest> should match
// service_traits::MD5Sum< ::torobo_msgs::SendCommonCommand >
template<>
struct MD5Sum< ::torobo_msgs::SendCommonCommandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::SendCommonCommand >::value();
  }
  static const char* value(const ::torobo_msgs::SendCommonCommandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::SendCommonCommandRequest> should match
// service_traits::DataType< ::torobo_msgs::SendCommonCommand >
template<>
struct DataType< ::torobo_msgs::SendCommonCommandRequest>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::SendCommonCommand >::value();
  }
  static const char* value(const ::torobo_msgs::SendCommonCommandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::torobo_msgs::SendCommonCommandResponse> should match
// service_traits::MD5Sum< ::torobo_msgs::SendCommonCommand >
template<>
struct MD5Sum< ::torobo_msgs::SendCommonCommandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::torobo_msgs::SendCommonCommand >::value();
  }
  static const char* value(const ::torobo_msgs::SendCommonCommandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::torobo_msgs::SendCommonCommandResponse> should match
// service_traits::DataType< ::torobo_msgs::SendCommonCommand >
template<>
struct DataType< ::torobo_msgs::SendCommonCommandResponse>
{
  static const char* value()
  {
    return DataType< ::torobo_msgs::SendCommonCommand >::value();
  }
  static const char* value(const ::torobo_msgs::SendCommonCommandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOROBO_MSGS_MESSAGE_SENDCOMMONCOMMAND_H