// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/planning_scene_components__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningSceneComponents_components
{
public:
  Init_PlanningSceneComponents_components()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::msg::PlanningSceneComponents components(::moveit_msgs::msg::PlanningSceneComponents::_components_type arg)
  {
    msg_.components = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningSceneComponents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PlanningSceneComponents>()
{
  return moveit_msgs::msg::builder::Init_PlanningSceneComponents_components();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__BUILDER_HPP_
