// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:srv/SetForceTorqueCollisionBehavior.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_FORCE_TORQUE_COLLISION_BEHAVIOR__BUILDER_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_FORCE_TORQUE_COLLISION_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/srv/detail/set_force_torque_collision_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetForceTorqueCollisionBehavior_Request_upper_force_thresholds_nominal
{
public:
  explicit Init_SetForceTorqueCollisionBehavior_Request_upper_force_thresholds_nominal(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request upper_force_thresholds_nominal(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request::_upper_force_thresholds_nominal_type arg)
  {
    msg_.upper_force_thresholds_nominal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request msg_;
};

class Init_SetForceTorqueCollisionBehavior_Request_lower_force_thresholds_nominal
{
public:
  explicit Init_SetForceTorqueCollisionBehavior_Request_lower_force_thresholds_nominal(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetForceTorqueCollisionBehavior_Request_upper_force_thresholds_nominal lower_force_thresholds_nominal(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request::_lower_force_thresholds_nominal_type arg)
  {
    msg_.lower_force_thresholds_nominal = std::move(arg);
    return Init_SetForceTorqueCollisionBehavior_Request_upper_force_thresholds_nominal(msg_);
  }

private:
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request msg_;
};

class Init_SetForceTorqueCollisionBehavior_Request_upper_torque_thresholds_nominal
{
public:
  explicit Init_SetForceTorqueCollisionBehavior_Request_upper_torque_thresholds_nominal(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request & msg)
  : msg_(msg)
  {}
  Init_SetForceTorqueCollisionBehavior_Request_lower_force_thresholds_nominal upper_torque_thresholds_nominal(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request::_upper_torque_thresholds_nominal_type arg)
  {
    msg_.upper_torque_thresholds_nominal = std::move(arg);
    return Init_SetForceTorqueCollisionBehavior_Request_lower_force_thresholds_nominal(msg_);
  }

private:
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request msg_;
};

class Init_SetForceTorqueCollisionBehavior_Request_lower_torque_thresholds_nominal
{
public:
  Init_SetForceTorqueCollisionBehavior_Request_lower_torque_thresholds_nominal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetForceTorqueCollisionBehavior_Request_upper_torque_thresholds_nominal lower_torque_thresholds_nominal(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request::_lower_torque_thresholds_nominal_type arg)
  {
    msg_.lower_torque_thresholds_nominal = std::move(arg);
    return Init_SetForceTorqueCollisionBehavior_Request_upper_torque_thresholds_nominal(msg_);
  }

private:
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request>()
{
  return franka_msgs::srv::builder::Init_SetForceTorqueCollisionBehavior_Request_lower_torque_thresholds_nominal();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetForceTorqueCollisionBehavior_Response_error
{
public:
  explicit Init_SetForceTorqueCollisionBehavior_Response_error(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response error(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response msg_;
};

class Init_SetForceTorqueCollisionBehavior_Response_success
{
public:
  Init_SetForceTorqueCollisionBehavior_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetForceTorqueCollisionBehavior_Response_error success(::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetForceTorqueCollisionBehavior_Response_error(msg_);
  }

private:
  ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response>()
{
  return franka_msgs::srv::builder::Init_SetForceTorqueCollisionBehavior_Response_success();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_FORCE_TORQUE_COLLISION_BEHAVIOR__BUILDER_HPP_
