// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:srv/SetTCPFrame.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_TCP_FRAME__BUILDER_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_TCP_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/srv/detail/set_tcp_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTCPFrame_Request_transformation
{
public:
  Init_SetTCPFrame_Request_transformation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_msgs::srv::SetTCPFrame_Request transformation(::franka_msgs::srv::SetTCPFrame_Request::_transformation_type arg)
  {
    msg_.transformation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetTCPFrame_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetTCPFrame_Request>()
{
  return franka_msgs::srv::builder::Init_SetTCPFrame_Request_transformation();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTCPFrame_Response_error
{
public:
  explicit Init_SetTCPFrame_Response_error(::franka_msgs::srv::SetTCPFrame_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::srv::SetTCPFrame_Response error(::franka_msgs::srv::SetTCPFrame_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetTCPFrame_Response msg_;
};

class Init_SetTCPFrame_Response_success
{
public:
  Init_SetTCPFrame_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTCPFrame_Response_error success(::franka_msgs::srv::SetTCPFrame_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetTCPFrame_Response_error(msg_);
  }

private:
  ::franka_msgs::srv::SetTCPFrame_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetTCPFrame_Response>()
{
  return franka_msgs::srv::builder::Init_SetTCPFrame_Response_success();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_TCP_FRAME__BUILDER_HPP_
