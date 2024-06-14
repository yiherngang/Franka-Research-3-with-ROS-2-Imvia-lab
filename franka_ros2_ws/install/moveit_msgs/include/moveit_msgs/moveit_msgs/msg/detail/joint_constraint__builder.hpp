// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/JointConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/joint_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_JointConstraint_weight
{
public:
  explicit Init_JointConstraint_weight(::moveit_msgs::msg::JointConstraint & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::JointConstraint weight(::moveit_msgs::msg::JointConstraint::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::JointConstraint msg_;
};

class Init_JointConstraint_tolerance_below
{
public:
  explicit Init_JointConstraint_tolerance_below(::moveit_msgs::msg::JointConstraint & msg)
  : msg_(msg)
  {}
  Init_JointConstraint_weight tolerance_below(::moveit_msgs::msg::JointConstraint::_tolerance_below_type arg)
  {
    msg_.tolerance_below = std::move(arg);
    return Init_JointConstraint_weight(msg_);
  }

private:
  ::moveit_msgs::msg::JointConstraint msg_;
};

class Init_JointConstraint_tolerance_above
{
public:
  explicit Init_JointConstraint_tolerance_above(::moveit_msgs::msg::JointConstraint & msg)
  : msg_(msg)
  {}
  Init_JointConstraint_tolerance_below tolerance_above(::moveit_msgs::msg::JointConstraint::_tolerance_above_type arg)
  {
    msg_.tolerance_above = std::move(arg);
    return Init_JointConstraint_tolerance_below(msg_);
  }

private:
  ::moveit_msgs::msg::JointConstraint msg_;
};

class Init_JointConstraint_position
{
public:
  explicit Init_JointConstraint_position(::moveit_msgs::msg::JointConstraint & msg)
  : msg_(msg)
  {}
  Init_JointConstraint_tolerance_above position(::moveit_msgs::msg::JointConstraint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointConstraint_tolerance_above(msg_);
  }

private:
  ::moveit_msgs::msg::JointConstraint msg_;
};

class Init_JointConstraint_joint_name
{
public:
  Init_JointConstraint_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointConstraint_position joint_name(::moveit_msgs::msg::JointConstraint::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointConstraint_position(msg_);
  }

private:
  ::moveit_msgs::msg::JointConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::JointConstraint>()
{
  return moveit_msgs::msg::builder::Init_JointConstraint_joint_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__BUILDER_HPP_
