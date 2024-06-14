// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_state_validity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetStateValidity_Request_constraints
{
public:
  explicit Init_GetStateValidity_Request_constraints(::moveit_msgs::srv::GetStateValidity_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetStateValidity_Request constraints(::moveit_msgs::srv::GetStateValidity_Request::_constraints_type arg)
  {
    msg_.constraints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetStateValidity_Request msg_;
};

class Init_GetStateValidity_Request_group_name
{
public:
  explicit Init_GetStateValidity_Request_group_name(::moveit_msgs::srv::GetStateValidity_Request & msg)
  : msg_(msg)
  {}
  Init_GetStateValidity_Request_constraints group_name(::moveit_msgs::srv::GetStateValidity_Request::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_GetStateValidity_Request_constraints(msg_);
  }

private:
  ::moveit_msgs::srv::GetStateValidity_Request msg_;
};

class Init_GetStateValidity_Request_robot_state
{
public:
  Init_GetStateValidity_Request_robot_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStateValidity_Request_group_name robot_state(::moveit_msgs::srv::GetStateValidity_Request::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_GetStateValidity_Request_group_name(msg_);
  }

private:
  ::moveit_msgs::srv::GetStateValidity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetStateValidity_Request>()
{
  return moveit_msgs::srv::builder::Init_GetStateValidity_Request_robot_state();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetStateValidity_Response_constraint_result
{
public:
  explicit Init_GetStateValidity_Response_constraint_result(::moveit_msgs::srv::GetStateValidity_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetStateValidity_Response constraint_result(::moveit_msgs::srv::GetStateValidity_Response::_constraint_result_type arg)
  {
    msg_.constraint_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetStateValidity_Response msg_;
};

class Init_GetStateValidity_Response_cost_sources
{
public:
  explicit Init_GetStateValidity_Response_cost_sources(::moveit_msgs::srv::GetStateValidity_Response & msg)
  : msg_(msg)
  {}
  Init_GetStateValidity_Response_constraint_result cost_sources(::moveit_msgs::srv::GetStateValidity_Response::_cost_sources_type arg)
  {
    msg_.cost_sources = std::move(arg);
    return Init_GetStateValidity_Response_constraint_result(msg_);
  }

private:
  ::moveit_msgs::srv::GetStateValidity_Response msg_;
};

class Init_GetStateValidity_Response_contacts
{
public:
  explicit Init_GetStateValidity_Response_contacts(::moveit_msgs::srv::GetStateValidity_Response & msg)
  : msg_(msg)
  {}
  Init_GetStateValidity_Response_cost_sources contacts(::moveit_msgs::srv::GetStateValidity_Response::_contacts_type arg)
  {
    msg_.contacts = std::move(arg);
    return Init_GetStateValidity_Response_cost_sources(msg_);
  }

private:
  ::moveit_msgs::srv::GetStateValidity_Response msg_;
};

class Init_GetStateValidity_Response_valid
{
public:
  Init_GetStateValidity_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStateValidity_Response_contacts valid(::moveit_msgs::srv::GetStateValidity_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_GetStateValidity_Response_contacts(msg_);
  }

private:
  ::moveit_msgs::srv::GetStateValidity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetStateValidity_Response>()
{
  return moveit_msgs::srv::builder::Init_GetStateValidity_Response_valid();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__BUILDER_HPP_
