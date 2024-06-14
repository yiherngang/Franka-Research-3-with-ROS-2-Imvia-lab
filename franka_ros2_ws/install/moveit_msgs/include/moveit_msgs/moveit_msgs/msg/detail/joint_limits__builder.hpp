// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_JointLimits_max_jerk
{
public:
  explicit Init_JointLimits_max_jerk(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::JointLimits max_jerk(::moveit_msgs::msg::JointLimits::_max_jerk_type arg)
  {
    msg_.max_jerk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_has_jerk_limits
{
public:
  explicit Init_JointLimits_has_jerk_limits(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_max_jerk has_jerk_limits(::moveit_msgs::msg::JointLimits::_has_jerk_limits_type arg)
  {
    msg_.has_jerk_limits = std::move(arg);
    return Init_JointLimits_max_jerk(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_max_acceleration
{
public:
  explicit Init_JointLimits_max_acceleration(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_has_jerk_limits max_acceleration(::moveit_msgs::msg::JointLimits::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_JointLimits_has_jerk_limits(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_has_acceleration_limits
{
public:
  explicit Init_JointLimits_has_acceleration_limits(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_max_acceleration has_acceleration_limits(::moveit_msgs::msg::JointLimits::_has_acceleration_limits_type arg)
  {
    msg_.has_acceleration_limits = std::move(arg);
    return Init_JointLimits_max_acceleration(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_max_velocity
{
public:
  explicit Init_JointLimits_max_velocity(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_has_acceleration_limits max_velocity(::moveit_msgs::msg::JointLimits::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_JointLimits_has_acceleration_limits(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_has_velocity_limits
{
public:
  explicit Init_JointLimits_has_velocity_limits(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_max_velocity has_velocity_limits(::moveit_msgs::msg::JointLimits::_has_velocity_limits_type arg)
  {
    msg_.has_velocity_limits = std::move(arg);
    return Init_JointLimits_max_velocity(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_max_position
{
public:
  explicit Init_JointLimits_max_position(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_has_velocity_limits max_position(::moveit_msgs::msg::JointLimits::_max_position_type arg)
  {
    msg_.max_position = std::move(arg);
    return Init_JointLimits_has_velocity_limits(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_min_position
{
public:
  explicit Init_JointLimits_min_position(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_max_position min_position(::moveit_msgs::msg::JointLimits::_min_position_type arg)
  {
    msg_.min_position = std::move(arg);
    return Init_JointLimits_max_position(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_has_position_limits
{
public:
  explicit Init_JointLimits_has_position_limits(::moveit_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_min_position has_position_limits(::moveit_msgs::msg::JointLimits::_has_position_limits_type arg)
  {
    msg_.has_position_limits = std::move(arg);
    return Init_JointLimits_min_position(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_joint_name
{
public:
  Init_JointLimits_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointLimits_has_position_limits joint_name(::moveit_msgs::msg::JointLimits::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointLimits_has_position_limits(msg_);
  }

private:
  ::moveit_msgs::msg::JointLimits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::JointLimits>()
{
  return moveit_msgs::msg::builder::Init_JointLimits_joint_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_
