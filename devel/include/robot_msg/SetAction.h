// Generated by gencpp from file robot_msg/SetAction.msg
// DO NOT EDIT!


#ifndef ROBOT_MSG_MESSAGE_SETACTION_H
#define ROBOT_MSG_MESSAGE_SETACTION_H

#include <ros/service_traits.h>


#include <robot_msg/SetActionRequest.h>
#include <robot_msg/SetActionResponse.h>


namespace robot_msg
{

struct SetAction
{

typedef SetActionRequest Request;
typedef SetActionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetAction
} // namespace robot_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_msg::SetAction > {
  static const char* value()
  {
    return "95130fd028332f5dbbdebe1f435d80e3";
  }

  static const char* value(const ::robot_msg::SetAction&) { return value(); }
};

template<>
struct DataType< ::robot_msg::SetAction > {
  static const char* value()
  {
    return "robot_msg/SetAction";
  }

  static const char* value(const ::robot_msg::SetAction&) { return value(); }
};


// service_traits::MD5Sum< ::robot_msg::SetActionRequest> should match
// service_traits::MD5Sum< ::robot_msg::SetAction >
template<>
struct MD5Sum< ::robot_msg::SetActionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_msg::SetAction >::value();
  }
  static const char* value(const ::robot_msg::SetActionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_msg::SetActionRequest> should match
// service_traits::DataType< ::robot_msg::SetAction >
template<>
struct DataType< ::robot_msg::SetActionRequest>
{
  static const char* value()
  {
    return DataType< ::robot_msg::SetAction >::value();
  }
  static const char* value(const ::robot_msg::SetActionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_msg::SetActionResponse> should match
// service_traits::MD5Sum< ::robot_msg::SetAction >
template<>
struct MD5Sum< ::robot_msg::SetActionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_msg::SetAction >::value();
  }
  static const char* value(const ::robot_msg::SetActionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_msg::SetActionResponse> should match
// service_traits::DataType< ::robot_msg::SetAction >
template<>
struct DataType< ::robot_msg::SetActionResponse>
{
  static const char* value()
  {
    return DataType< ::robot_msg::SetAction >::value();
  }
  static const char* value(const ::robot_msg::SetActionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_MSG_MESSAGE_SETACTION_H
