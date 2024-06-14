// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_robot_state_from_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRobotStateFromWarehouse_Request_robot
{
public:
  explicit Init_GetRobotStateFromWarehouse_Request_robot(::moveit_msgs::srv::GetRobotStateFromWarehouse_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetRobotStateFromWarehouse_Request robot(::moveit_msgs::srv::GetRobotStateFromWarehouse_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetRobotStateFromWarehouse_Request msg_;
};

class Init_GetRobotStateFromWarehouse_Request_name
{
public:
  Init_GetRobotStateFromWarehouse_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotStateFromWarehouse_Request_robot name(::moveit_msgs::srv::GetRobotStateFromWarehouse_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GetRobotStateFromWarehouse_Request_robot(msg_);
  }

private:
  ::moveit_msgs::srv::GetRobotStateFromWarehouse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetRobotStateFromWarehouse_Request>()
{
  return moveit_msgs::srv::builder::Init_GetRobotStateFromWarehouse_Request_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRobotStateFromWarehouse_Response_state
{
public:
  Init_GetRobotStateFromWarehouse_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetRobotStateFromWarehouse_Response state(::moveit_msgs::srv::GetRobotStateFromWarehouse_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetRobotStateFromWarehouse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetRobotStateFromWarehouse_Response>()
{
  return moveit_msgs::srv::builder::Init_GetRobotStateFromWarehouse_Response_state();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__BUILDER_HPP_
