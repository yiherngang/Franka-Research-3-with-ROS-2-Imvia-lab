// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PositionConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/position_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionConstraint_weight
{
public:
  explicit Init_PositionConstraint_weight(::moveit_msgs::msg::PositionConstraint & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PositionConstraint weight(::moveit_msgs::msg::PositionConstraint::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PositionConstraint msg_;
};

class Init_PositionConstraint_constraint_region
{
public:
  explicit Init_PositionConstraint_constraint_region(::moveit_msgs::msg::PositionConstraint & msg)
  : msg_(msg)
  {}
  Init_PositionConstraint_weight constraint_region(::moveit_msgs::msg::PositionConstraint::_constraint_region_type arg)
  {
    msg_.constraint_region = std::move(arg);
    return Init_PositionConstraint_weight(msg_);
  }

private:
  ::moveit_msgs::msg::PositionConstraint msg_;
};

class Init_PositionConstraint_target_point_offset
{
public:
  explicit Init_PositionConstraint_target_point_offset(::moveit_msgs::msg::PositionConstraint & msg)
  : msg_(msg)
  {}
  Init_PositionConstraint_constraint_region target_point_offset(::moveit_msgs::msg::PositionConstraint::_target_point_offset_type arg)
  {
    msg_.target_point_offset = std::move(arg);
    return Init_PositionConstraint_constraint_region(msg_);
  }

private:
  ::moveit_msgs::msg::PositionConstraint msg_;
};

class Init_PositionConstraint_link_name
{
public:
  explicit Init_PositionConstraint_link_name(::moveit_msgs::msg::PositionConstraint & msg)
  : msg_(msg)
  {}
  Init_PositionConstraint_target_point_offset link_name(::moveit_msgs::msg::PositionConstraint::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_PositionConstraint_target_point_offset(msg_);
  }

private:
  ::moveit_msgs::msg::PositionConstraint msg_;
};

class Init_PositionConstraint_header
{
public:
  Init_PositionConstraint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionConstraint_link_name header(::moveit_msgs::msg::PositionConstraint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionConstraint_link_name(msg_);
  }

private:
  ::moveit_msgs::msg::PositionConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PositionConstraint>()
{
  return moveit_msgs::msg::builder::Init_PositionConstraint_header();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__BUILDER_HPP_
