// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_AllowedCollisionEntry_enabled
{
public:
  Init_AllowedCollisionEntry_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::msg::AllowedCollisionEntry enabled(::moveit_msgs::msg::AllowedCollisionEntry::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::AllowedCollisionEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::AllowedCollisionEntry>()
{
  return moveit_msgs::msg::builder::Init_AllowedCollisionEntry_enabled();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__BUILDER_HPP_
