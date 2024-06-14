// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/gripper_translation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperTranslation_min_distance
{
public:
  explicit Init_GripperTranslation_min_distance(::moveit_msgs::msg::GripperTranslation & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::GripperTranslation min_distance(::moveit_msgs::msg::GripperTranslation::_min_distance_type arg)
  {
    msg_.min_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::GripperTranslation msg_;
};

class Init_GripperTranslation_desired_distance
{
public:
  explicit Init_GripperTranslation_desired_distance(::moveit_msgs::msg::GripperTranslation & msg)
  : msg_(msg)
  {}
  Init_GripperTranslation_min_distance desired_distance(::moveit_msgs::msg::GripperTranslation::_desired_distance_type arg)
  {
    msg_.desired_distance = std::move(arg);
    return Init_GripperTranslation_min_distance(msg_);
  }

private:
  ::moveit_msgs::msg::GripperTranslation msg_;
};

class Init_GripperTranslation_direction
{
public:
  Init_GripperTranslation_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperTranslation_desired_distance direction(::moveit_msgs::msg::GripperTranslation::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_GripperTranslation_desired_distance(msg_);
  }

private:
  ::moveit_msgs::msg::GripperTranslation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::GripperTranslation>()
{
  return moveit_msgs::msg::builder::Init_GripperTranslation_direction();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__BUILDER_HPP_
