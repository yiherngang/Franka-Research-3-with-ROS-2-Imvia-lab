// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_AllowedCollisionMatrix_default_entry_values
{
public:
  explicit Init_AllowedCollisionMatrix_default_entry_values(::moveit_msgs::msg::AllowedCollisionMatrix & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::AllowedCollisionMatrix default_entry_values(::moveit_msgs::msg::AllowedCollisionMatrix::_default_entry_values_type arg)
  {
    msg_.default_entry_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::AllowedCollisionMatrix msg_;
};

class Init_AllowedCollisionMatrix_default_entry_names
{
public:
  explicit Init_AllowedCollisionMatrix_default_entry_names(::moveit_msgs::msg::AllowedCollisionMatrix & msg)
  : msg_(msg)
  {}
  Init_AllowedCollisionMatrix_default_entry_values default_entry_names(::moveit_msgs::msg::AllowedCollisionMatrix::_default_entry_names_type arg)
  {
    msg_.default_entry_names = std::move(arg);
    return Init_AllowedCollisionMatrix_default_entry_values(msg_);
  }

private:
  ::moveit_msgs::msg::AllowedCollisionMatrix msg_;
};

class Init_AllowedCollisionMatrix_entry_values
{
public:
  explicit Init_AllowedCollisionMatrix_entry_values(::moveit_msgs::msg::AllowedCollisionMatrix & msg)
  : msg_(msg)
  {}
  Init_AllowedCollisionMatrix_default_entry_names entry_values(::moveit_msgs::msg::AllowedCollisionMatrix::_entry_values_type arg)
  {
    msg_.entry_values = std::move(arg);
    return Init_AllowedCollisionMatrix_default_entry_names(msg_);
  }

private:
  ::moveit_msgs::msg::AllowedCollisionMatrix msg_;
};

class Init_AllowedCollisionMatrix_entry_names
{
public:
  Init_AllowedCollisionMatrix_entry_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllowedCollisionMatrix_entry_values entry_names(::moveit_msgs::msg::AllowedCollisionMatrix::_entry_names_type arg)
  {
    msg_.entry_names = std::move(arg);
    return Init_AllowedCollisionMatrix_entry_values(msg_);
  }

private:
  ::moveit_msgs::msg::AllowedCollisionMatrix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::AllowedCollisionMatrix>()
{
  return moveit_msgs::msg::builder::Init_AllowedCollisionMatrix_entry_names();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__BUILDER_HPP_
