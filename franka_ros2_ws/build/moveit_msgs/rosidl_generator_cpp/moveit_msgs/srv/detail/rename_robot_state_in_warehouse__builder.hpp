// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/RenameRobotStateInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/rename_robot_state_in_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_RenameRobotStateInWarehouse_Request_robot
{
public:
  explicit Init_RenameRobotStateInWarehouse_Request_robot(::moveit_msgs::srv::RenameRobotStateInWarehouse_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::RenameRobotStateInWarehouse_Request robot(::moveit_msgs::srv::RenameRobotStateInWarehouse_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::RenameRobotStateInWarehouse_Request msg_;
};

class Init_RenameRobotStateInWarehouse_Request_new_name
{
public:
  explicit Init_RenameRobotStateInWarehouse_Request_new_name(::moveit_msgs::srv::RenameRobotStateInWarehouse_Request & msg)
  : msg_(msg)
  {}
  Init_RenameRobotStateInWarehouse_Request_robot new_name(::moveit_msgs::srv::RenameRobotStateInWarehouse_Request::_new_name_type arg)
  {
    msg_.new_name = std::move(arg);
    return Init_RenameRobotStateInWarehouse_Request_robot(msg_);
  }

private:
  ::moveit_msgs::srv::RenameRobotStateInWarehouse_Request msg_;
};

class Init_RenameRobotStateInWarehouse_Request_old_name
{
public:
  Init_RenameRobotStateInWarehouse_Request_old_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RenameRobotStateInWarehouse_Request_new_name old_name(::moveit_msgs::srv::RenameRobotStateInWarehouse_Request::_old_name_type arg)
  {
    msg_.old_name = std::move(arg);
    return Init_RenameRobotStateInWarehouse_Request_new_name(msg_);
  }

private:
  ::moveit_msgs::srv::RenameRobotStateInWarehouse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::RenameRobotStateInWarehouse_Request>()
{
  return moveit_msgs::srv::builder::Init_RenameRobotStateInWarehouse_Request_old_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::RenameRobotStateInWarehouse_Response>()
{
  return ::moveit_msgs::srv::RenameRobotStateInWarehouse_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__BUILDER_HPP_
