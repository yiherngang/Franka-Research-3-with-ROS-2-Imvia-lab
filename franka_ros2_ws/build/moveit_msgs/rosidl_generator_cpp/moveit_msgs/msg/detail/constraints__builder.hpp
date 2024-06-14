// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/constraints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_Constraints_visibility_constraints
{
public:
  explicit Init_Constraints_visibility_constraints(::moveit_msgs::msg::Constraints & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::Constraints visibility_constraints(::moveit_msgs::msg::Constraints::_visibility_constraints_type arg)
  {
    msg_.visibility_constraints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::Constraints msg_;
};

class Init_Constraints_orientation_constraints
{
public:
  explicit Init_Constraints_orientation_constraints(::moveit_msgs::msg::Constraints & msg)
  : msg_(msg)
  {}
  Init_Constraints_visibility_constraints orientation_constraints(::moveit_msgs::msg::Constraints::_orientation_constraints_type arg)
  {
    msg_.orientation_constraints = std::move(arg);
    return Init_Constraints_visibility_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::Constraints msg_;
};

class Init_Constraints_position_constraints
{
public:
  explicit Init_Constraints_position_constraints(::moveit_msgs::msg::Constraints & msg)
  : msg_(msg)
  {}
  Init_Constraints_orientation_constraints position_constraints(::moveit_msgs::msg::Constraints::_position_constraints_type arg)
  {
    msg_.position_constraints = std::move(arg);
    return Init_Constraints_orientation_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::Constraints msg_;
};

class Init_Constraints_joint_constraints
{
public:
  explicit Init_Constraints_joint_constraints(::moveit_msgs::msg::Constraints & msg)
  : msg_(msg)
  {}
  Init_Constraints_position_constraints joint_constraints(::moveit_msgs::msg::Constraints::_joint_constraints_type arg)
  {
    msg_.joint_constraints = std::move(arg);
    return Init_Constraints_position_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::Constraints msg_;
};

class Init_Constraints_name
{
public:
  Init_Constraints_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Constraints_joint_constraints name(::moveit_msgs::msg::Constraints::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Constraints_joint_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::Constraints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::Constraints>()
{
  return moveit_msgs::msg::builder::Init_Constraints_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__BUILDER_HPP_
