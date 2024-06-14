// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_motion_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMotionPlan_Request_motion_plan_request
{
public:
  Init_GetMotionPlan_Request_motion_plan_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetMotionPlan_Request motion_plan_request(::moveit_msgs::srv::GetMotionPlan_Request::_motion_plan_request_type arg)
  {
    msg_.motion_plan_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetMotionPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetMotionPlan_Request>()
{
  return moveit_msgs::srv::builder::Init_GetMotionPlan_Request_motion_plan_request();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMotionPlan_Response_motion_plan_response
{
public:
  Init_GetMotionPlan_Response_motion_plan_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetMotionPlan_Response motion_plan_response(::moveit_msgs::srv::GetMotionPlan_Response::_motion_plan_response_type arg)
  {
    msg_.motion_plan_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetMotionPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetMotionPlan_Response>()
{
  return moveit_msgs::srv::builder::Init_GetMotionPlan_Response_motion_plan_response();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__BUILDER_HPP_
