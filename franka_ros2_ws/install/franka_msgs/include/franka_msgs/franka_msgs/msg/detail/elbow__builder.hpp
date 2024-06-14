// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ELBOW__BUILDER_HPP_
#define FRANKA_MSGS__MSG__DETAIL__ELBOW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/msg/detail/elbow__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace msg
{

namespace builder
{

class Init_Elbow_commanded_acceleration
{
public:
  explicit Init_Elbow_commanded_acceleration(::franka_msgs::msg::Elbow & msg)
  : msg_(msg)
  {}
  ::franka_msgs::msg::Elbow commanded_acceleration(::franka_msgs::msg::Elbow::_commanded_acceleration_type arg)
  {
    msg_.commanded_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::msg::Elbow msg_;
};

class Init_Elbow_commanded_velocity
{
public:
  explicit Init_Elbow_commanded_velocity(::franka_msgs::msg::Elbow & msg)
  : msg_(msg)
  {}
  Init_Elbow_commanded_acceleration commanded_velocity(::franka_msgs::msg::Elbow::_commanded_velocity_type arg)
  {
    msg_.commanded_velocity = std::move(arg);
    return Init_Elbow_commanded_acceleration(msg_);
  }

private:
  ::franka_msgs::msg::Elbow msg_;
};

class Init_Elbow_commanded_position
{
public:
  explicit Init_Elbow_commanded_position(::franka_msgs::msg::Elbow & msg)
  : msg_(msg)
  {}
  Init_Elbow_commanded_velocity commanded_position(::franka_msgs::msg::Elbow::_commanded_position_type arg)
  {
    msg_.commanded_position = std::move(arg);
    return Init_Elbow_commanded_velocity(msg_);
  }

private:
  ::franka_msgs::msg::Elbow msg_;
};

class Init_Elbow_desired_position
{
public:
  explicit Init_Elbow_desired_position(::franka_msgs::msg::Elbow & msg)
  : msg_(msg)
  {}
  Init_Elbow_commanded_position desired_position(::franka_msgs::msg::Elbow::_desired_position_type arg)
  {
    msg_.desired_position = std::move(arg);
    return Init_Elbow_commanded_position(msg_);
  }

private:
  ::franka_msgs::msg::Elbow msg_;
};

class Init_Elbow_position
{
public:
  Init_Elbow_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Elbow_desired_position position(::franka_msgs::msg::Elbow::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Elbow_desired_position(msg_);
  }

private:
  ::franka_msgs::msg::Elbow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::msg::Elbow>()
{
  return franka_msgs::msg::builder::Init_Elbow_position();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__ELBOW__BUILDER_HPP_
