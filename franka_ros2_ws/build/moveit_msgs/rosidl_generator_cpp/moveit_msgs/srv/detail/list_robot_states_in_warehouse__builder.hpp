// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ListRobotStatesInWarehouse_Request_robot
{
public:
  explicit Init_ListRobotStatesInWarehouse_Request_robot(::moveit_msgs::srv::ListRobotStatesInWarehouse_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::ListRobotStatesInWarehouse_Request robot(::moveit_msgs::srv::ListRobotStatesInWarehouse_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ListRobotStatesInWarehouse_Request msg_;
};

class Init_ListRobotStatesInWarehouse_Request_regex
{
public:
  Init_ListRobotStatesInWarehouse_Request_regex()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListRobotStatesInWarehouse_Request_robot regex(::moveit_msgs::srv::ListRobotStatesInWarehouse_Request::_regex_type arg)
  {
    msg_.regex = std::move(arg);
    return Init_ListRobotStatesInWarehouse_Request_robot(msg_);
  }

private:
  ::moveit_msgs::srv::ListRobotStatesInWarehouse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ListRobotStatesInWarehouse_Request>()
{
  return moveit_msgs::srv::builder::Init_ListRobotStatesInWarehouse_Request_regex();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ListRobotStatesInWarehouse_Response_states
{
public:
  Init_ListRobotStatesInWarehouse_Response_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ListRobotStatesInWarehouse_Response states(::moveit_msgs::srv::ListRobotStatesInWarehouse_Response::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ListRobotStatesInWarehouse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ListRobotStatesInWarehouse_Response>()
{
  return moveit_msgs::srv::builder::Init_ListRobotStatesInWarehouse_Response_states();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__BUILDER_HPP_
