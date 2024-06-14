// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/planning_scene_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningSceneWorld_octomap
{
public:
  explicit Init_PlanningSceneWorld_octomap(::moveit_msgs::msg::PlanningSceneWorld & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PlanningSceneWorld octomap(::moveit_msgs::msg::PlanningSceneWorld::_octomap_type arg)
  {
    msg_.octomap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningSceneWorld msg_;
};

class Init_PlanningSceneWorld_collision_objects
{
public:
  Init_PlanningSceneWorld_collision_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningSceneWorld_octomap collision_objects(::moveit_msgs::msg::PlanningSceneWorld::_collision_objects_type arg)
  {
    msg_.collision_objects = std::move(arg);
    return Init_PlanningSceneWorld_octomap(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningSceneWorld msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PlanningSceneWorld>()
{
  return moveit_msgs::msg::builder::Init_PlanningSceneWorld_collision_objects();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__BUILDER_HPP_
