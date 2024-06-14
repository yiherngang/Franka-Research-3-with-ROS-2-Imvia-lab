// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/planning_scene__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningScene_is_diff
{
public:
  explicit Init_PlanningScene_is_diff(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PlanningScene is_diff(::moveit_msgs::msg::PlanningScene::_is_diff_type arg)
  {
    msg_.is_diff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_world
{
public:
  explicit Init_PlanningScene_world(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_is_diff world(::moveit_msgs::msg::PlanningScene::_world_type arg)
  {
    msg_.world = std::move(arg);
    return Init_PlanningScene_is_diff(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_object_colors
{
public:
  explicit Init_PlanningScene_object_colors(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_world object_colors(::moveit_msgs::msg::PlanningScene::_object_colors_type arg)
  {
    msg_.object_colors = std::move(arg);
    return Init_PlanningScene_world(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_link_scale
{
public:
  explicit Init_PlanningScene_link_scale(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_object_colors link_scale(::moveit_msgs::msg::PlanningScene::_link_scale_type arg)
  {
    msg_.link_scale = std::move(arg);
    return Init_PlanningScene_object_colors(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_link_padding
{
public:
  explicit Init_PlanningScene_link_padding(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_link_scale link_padding(::moveit_msgs::msg::PlanningScene::_link_padding_type arg)
  {
    msg_.link_padding = std::move(arg);
    return Init_PlanningScene_link_scale(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_allowed_collision_matrix
{
public:
  explicit Init_PlanningScene_allowed_collision_matrix(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_link_padding allowed_collision_matrix(::moveit_msgs::msg::PlanningScene::_allowed_collision_matrix_type arg)
  {
    msg_.allowed_collision_matrix = std::move(arg);
    return Init_PlanningScene_link_padding(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_fixed_frame_transforms
{
public:
  explicit Init_PlanningScene_fixed_frame_transforms(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_allowed_collision_matrix fixed_frame_transforms(::moveit_msgs::msg::PlanningScene::_fixed_frame_transforms_type arg)
  {
    msg_.fixed_frame_transforms = std::move(arg);
    return Init_PlanningScene_allowed_collision_matrix(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_robot_model_name
{
public:
  explicit Init_PlanningScene_robot_model_name(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_fixed_frame_transforms robot_model_name(::moveit_msgs::msg::PlanningScene::_robot_model_name_type arg)
  {
    msg_.robot_model_name = std::move(arg);
    return Init_PlanningScene_fixed_frame_transforms(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_robot_state
{
public:
  explicit Init_PlanningScene_robot_state(::moveit_msgs::msg::PlanningScene & msg)
  : msg_(msg)
  {}
  Init_PlanningScene_robot_model_name robot_state(::moveit_msgs::msg::PlanningScene::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_PlanningScene_robot_model_name(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

class Init_PlanningScene_name
{
public:
  Init_PlanningScene_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningScene_robot_state name(::moveit_msgs::msg::PlanningScene::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PlanningScene_robot_state(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningScene msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PlanningScene>()
{
  return moveit_msgs::msg::builder::Init_PlanningScene_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__BUILDER_HPP_
