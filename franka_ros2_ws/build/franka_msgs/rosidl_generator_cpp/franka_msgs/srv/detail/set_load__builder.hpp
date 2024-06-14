// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:srv/SetLoad.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_LOAD__BUILDER_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/srv/detail/set_load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLoad_Request_load_inertia
{
public:
  explicit Init_SetLoad_Request_load_inertia(::franka_msgs::srv::SetLoad_Request & msg)
  : msg_(msg)
  {}
  ::franka_msgs::srv::SetLoad_Request load_inertia(::franka_msgs::srv::SetLoad_Request::_load_inertia_type arg)
  {
    msg_.load_inertia = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetLoad_Request msg_;
};

class Init_SetLoad_Request_center_of_mass
{
public:
  explicit Init_SetLoad_Request_center_of_mass(::franka_msgs::srv::SetLoad_Request & msg)
  : msg_(msg)
  {}
  Init_SetLoad_Request_load_inertia center_of_mass(::franka_msgs::srv::SetLoad_Request::_center_of_mass_type arg)
  {
    msg_.center_of_mass = std::move(arg);
    return Init_SetLoad_Request_load_inertia(msg_);
  }

private:
  ::franka_msgs::srv::SetLoad_Request msg_;
};

class Init_SetLoad_Request_mass
{
public:
  Init_SetLoad_Request_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLoad_Request_center_of_mass mass(::franka_msgs::srv::SetLoad_Request::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_SetLoad_Request_center_of_mass(msg_);
  }

private:
  ::franka_msgs::srv::SetLoad_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetLoad_Request>()
{
  return franka_msgs::srv::builder::Init_SetLoad_Request_mass();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLoad_Response_error
{
public:
  explicit Init_SetLoad_Response_error(::franka_msgs::srv::SetLoad_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::srv::SetLoad_Response error(::franka_msgs::srv::SetLoad_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::srv::SetLoad_Response msg_;
};

class Init_SetLoad_Response_success
{
public:
  Init_SetLoad_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLoad_Response_error success(::franka_msgs::srv::SetLoad_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLoad_Response_error(msg_);
  }

private:
  ::franka_msgs::srv::SetLoad_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::srv::SetLoad_Response>()
{
  return franka_msgs::srv::builder::Init_SetLoad_Response_success();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_LOAD__BUILDER_HPP_
