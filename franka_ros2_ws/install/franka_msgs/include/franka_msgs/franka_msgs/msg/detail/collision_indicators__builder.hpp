// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__BUILDER_HPP_
#define FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/msg/detail/collision_indicators__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionIndicators_is_joint_contact
{
public:
  explicit Init_CollisionIndicators_is_joint_contact(::franka_msgs::msg::CollisionIndicators & msg)
  : msg_(msg)
  {}
  ::franka_msgs::msg::CollisionIndicators is_joint_contact(::franka_msgs::msg::CollisionIndicators::_is_joint_contact_type arg)
  {
    msg_.is_joint_contact = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::msg::CollisionIndicators msg_;
};

class Init_CollisionIndicators_is_joint_collision
{
public:
  explicit Init_CollisionIndicators_is_joint_collision(::franka_msgs::msg::CollisionIndicators & msg)
  : msg_(msg)
  {}
  Init_CollisionIndicators_is_joint_contact is_joint_collision(::franka_msgs::msg::CollisionIndicators::_is_joint_collision_type arg)
  {
    msg_.is_joint_collision = std::move(arg);
    return Init_CollisionIndicators_is_joint_contact(msg_);
  }

private:
  ::franka_msgs::msg::CollisionIndicators msg_;
};

class Init_CollisionIndicators_is_cartesian_angular_contact
{
public:
  explicit Init_CollisionIndicators_is_cartesian_angular_contact(::franka_msgs::msg::CollisionIndicators & msg)
  : msg_(msg)
  {}
  Init_CollisionIndicators_is_joint_collision is_cartesian_angular_contact(::franka_msgs::msg::CollisionIndicators::_is_cartesian_angular_contact_type arg)
  {
    msg_.is_cartesian_angular_contact = std::move(arg);
    return Init_CollisionIndicators_is_joint_collision(msg_);
  }

private:
  ::franka_msgs::msg::CollisionIndicators msg_;
};

class Init_CollisionIndicators_is_cartesian_linear_contact
{
public:
  explicit Init_CollisionIndicators_is_cartesian_linear_contact(::franka_msgs::msg::CollisionIndicators & msg)
  : msg_(msg)
  {}
  Init_CollisionIndicators_is_cartesian_angular_contact is_cartesian_linear_contact(::franka_msgs::msg::CollisionIndicators::_is_cartesian_linear_contact_type arg)
  {
    msg_.is_cartesian_linear_contact = std::move(arg);
    return Init_CollisionIndicators_is_cartesian_angular_contact(msg_);
  }

private:
  ::franka_msgs::msg::CollisionIndicators msg_;
};

class Init_CollisionIndicators_is_cartesian_angular_collision
{
public:
  explicit Init_CollisionIndicators_is_cartesian_angular_collision(::franka_msgs::msg::CollisionIndicators & msg)
  : msg_(msg)
  {}
  Init_CollisionIndicators_is_cartesian_linear_contact is_cartesian_angular_collision(::franka_msgs::msg::CollisionIndicators::_is_cartesian_angular_collision_type arg)
  {
    msg_.is_cartesian_angular_collision = std::move(arg);
    return Init_CollisionIndicators_is_cartesian_linear_contact(msg_);
  }

private:
  ::franka_msgs::msg::CollisionIndicators msg_;
};

class Init_CollisionIndicators_is_cartesian_linear_collision
{
public:
  Init_CollisionIndicators_is_cartesian_linear_collision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionIndicators_is_cartesian_angular_collision is_cartesian_linear_collision(::franka_msgs::msg::CollisionIndicators::_is_cartesian_linear_collision_type arg)
  {
    msg_.is_cartesian_linear_collision = std::move(arg);
    return Init_CollisionIndicators_is_cartesian_angular_collision(msg_);
  }

private:
  ::franka_msgs::msg::CollisionIndicators msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::msg::CollisionIndicators>()
{
  return franka_msgs::msg::builder::Init_CollisionIndicators_is_cartesian_linear_collision();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__BUILDER_HPP_
