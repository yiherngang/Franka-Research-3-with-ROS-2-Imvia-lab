// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/ApplyPlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/apply_planning_scene__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyPlanningScene_Request_scene
{
public:
  Init_ApplyPlanningScene_Request_scene()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ApplyPlanningScene_Request scene(::moveit_msgs::srv::ApplyPlanningScene_Request::_scene_type arg)
  {
    msg_.scene = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ApplyPlanningScene_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ApplyPlanningScene_Request>()
{
  return moveit_msgs::srv::builder::Init_ApplyPlanningScene_Request_scene();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyPlanningScene_Response_success
{
public:
  Init_ApplyPlanningScene_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ApplyPlanningScene_Response success(::moveit_msgs::srv::ApplyPlanningScene_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ApplyPlanningScene_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ApplyPlanningScene_Response>()
{
  return moveit_msgs::srv::builder::Init_ApplyPlanningScene_Response_success();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__BUILDER_HPP_
