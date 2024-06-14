// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotState_is_diff
{
public:
  explicit Init_RobotState_is_diff(::moveit_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::RobotState is_diff(::moveit_msgs::msg::RobotState::_is_diff_type arg)
  {
    msg_.is_diff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::RobotState msg_;
};

class Init_RobotState_attached_collision_objects
{
public:
  explicit Init_RobotState_attached_collision_objects(::moveit_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_is_diff attached_collision_objects(::moveit_msgs::msg::RobotState::_attached_collision_objects_type arg)
  {
    msg_.attached_collision_objects = std::move(arg);
    return Init_RobotState_is_diff(msg_);
  }

private:
  ::moveit_msgs::msg::RobotState msg_;
};

class Init_RobotState_multi_dof_joint_state
{
public:
  explicit Init_RobotState_multi_dof_joint_state(::moveit_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_attached_collision_objects multi_dof_joint_state(::moveit_msgs::msg::RobotState::_multi_dof_joint_state_type arg)
  {
    msg_.multi_dof_joint_state = std::move(arg);
    return Init_RobotState_attached_collision_objects(msg_);
  }

private:
  ::moveit_msgs::msg::RobotState msg_;
};

class Init_RobotState_joint_state
{
public:
  Init_RobotState_joint_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_multi_dof_joint_state joint_state(::moveit_msgs::msg::RobotState::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return Init_RobotState_multi_dof_joint_state(msg_);
  }

private:
  ::moveit_msgs::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::RobotState>()
{
  return moveit_msgs::msg::builder::Init_RobotState_joint_state();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
