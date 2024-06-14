// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetMotionSequence.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_motion_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMotionSequence_Request_request
{
public:
  Init_GetMotionSequence_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetMotionSequence_Request request(::moveit_msgs::srv::GetMotionSequence_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetMotionSequence_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetMotionSequence_Request>()
{
  return moveit_msgs::srv::builder::Init_GetMotionSequence_Request_request();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMotionSequence_Response_response
{
public:
  Init_GetMotionSequence_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetMotionSequence_Response response(::moveit_msgs::srv::GetMotionSequence_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetMotionSequence_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetMotionSequence_Response>()
{
  return moveit_msgs::srv::builder::Init_GetMotionSequence_Response_response();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__BUILDER_HPP_
