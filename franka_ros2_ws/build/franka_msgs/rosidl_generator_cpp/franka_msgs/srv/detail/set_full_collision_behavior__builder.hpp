// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:srv/SetFullCollisionBehavior.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__BUILDER_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/srv/detail/set_full_collision_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFullCollisionBehavior_Request_upper_force_thresholds_nominal
{
public:
  explicit Init_SetFullCollisionBehavior_Request_upper_force_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  ::franka_msgs::srv::SetFullCollisionBehavior_Request upper_force_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request::_upper_force_thresholds_nominal_type arg)
  {
    msg_.upper_force_thresholds_nominal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

class Init_SetFullCollisionBehavior_Request_lower_force_thresholds_nominal
{
public:
  explicit Init_SetFullCollisionBehavior_Request_lower_force_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetFullCollisionBehavior_Request_upper_force_thresholds_nominal lower_force_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request::_lower_force_thresholds_nominal_type arg)
  {
    msg_.lower_force_thresholds_nominal = std::move(arg);
    return Init_SetFullCollisionBehavior_Request_upper_force_thresholds_nominal(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

class Init_SetFullCollisionBehavior_Request_upper_force_thresholds_acceleration
{
public:
  explicit Init_SetFullCollisionBehavior_Request_upper_force_thresholds_acceleration(::franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetFullCollisionBehavior_Request_lower_force_thresholds_nominal upper_force_thresholds_acceleration(::franka_msgs::srv::SetFullCollisionBehavior_Request::_upper_force_thresholds_acceleration_type arg)
  {
    msg_.upper_force_thresholds_acceleration = std::move(arg);
    return Init_SetFullCollisionBehavior_Request_lower_force_thresholds_nominal(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

class Init_SetFullCollisionBehavior_Request_lower_force_thresholds_acceleration
{
public:
  explicit Init_SetFullCollisionBehavior_Request_lower_force_thresholds_acceleration(::franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetFullCollisionBehavior_Request_upper_force_thresholds_acceleration lower_force_thresholds_acceleration(::franka_msgs::srv::SetFullCollisionBehavior_Request::_lower_force_thresholds_acceleration_type arg)
  {
    msg_.lower_force_thresholds_acceleration = std::move(arg);
    return Init_SetFullCollisionBehavior_Request_upper_force_thresholds_acceleration(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

class Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_nominal
{
public:
  explicit Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetFullCollisionBehavior_Request_lower_force_thresholds_acceleration upper_torque_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request::_upper_torque_thresholds_nominal_type arg)
  {
    msg_.upper_torque_thresholds_nominal = std::move(arg);
    return Init_SetFullCollisionBehavior_Request_lower_force_thresholds_acceleration(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

class Init_SetFullCollisionBehavior_Request_lower_torque_thresholds_nominal
{
public:
  explicit Init_SetFullCollisionBehavior_Request_lower_torque_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_nominal lower_torque_thresholds_nominal(::franka_msgs::srv::SetFullCollisionBehavior_Request::_lower_torque_thresholds_nominal_type arg)
  {
    msg_.lower_torque_thresholds_nominal = std::move(arg);
    return Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_nominal(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

class Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_acceleration
{
public:
  explicit Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_acceleration(::franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetFullCollisionBehavior_Request_lower_torque_thresholds_nominal upper_torque_thresholds_acceleration(::franka_msgs::srv::SetFullCollisionBehavior_Request::_upper_torque_thresholds_acceleration_type arg)
  {
    msg_.upper_torque_thresholds_acceleration = std::move(arg);
    return Init_SetFullCollisionBehavior_Request_lower_torque_thresholds_nominal(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

class Init_SetFullCollisionBehavior_Request_lower_torque_thresholds_acceleration
{
public:
  Init_SetFullCollisionBehavior_Request_lower_torque_thresholds_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_acceleration lower_torque_thresholds_acceleration(::franka_msgs::srv::SetFullCollisionBehavior_Request::_lower_torque_thresholds_acceleration_type arg)
  {
    msg_.lower_torque_thresholds_acceleration = std::move(arg);
    return Init_SetFullCollisionBehavior_Request_upper_torque_thresholds_acceleration(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetFullCollisionBehavior_Request>()
{
  return franka_msgs::srv::builder::Init_SetFullCollisionBehavior_Request_lower_torque_thresholds_acceleration();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFullCollisionBehavior_Response_error
{
public:
  explicit Init_SetFullCollisionBehavior_Response_error(::franka_msgs::srv::SetFullCollisionBehavior_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::srv::SetFullCollisionBehavior_Response error(::franka_msgs::srv::SetFullCollisionBehavior_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Response msg_;
};

class Init_SetFullCollisionBehavior_Response_success
{
public:
  Init_SetFullCollisionBehavior_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFullCollisionBehavior_Response_error success(::franka_msgs::srv::SetFullCollisionBehavior_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetFullCollisionBehavior_Response_error(msg_);
  }

private:
  ::franka_msgs::srv::SetFullCollisionBehavior_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetFullCollisionBehavior_Response>()
{
  return franka_msgs::srv::builder::Init_SetFullCollisionBehavior_Response_success();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__BUILDER_HPP_
