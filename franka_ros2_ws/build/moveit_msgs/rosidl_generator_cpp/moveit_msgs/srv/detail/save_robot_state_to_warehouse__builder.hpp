// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/SaveRobotStateToWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__SAVE_ROBOT_STATE_TO_WAREHOUSE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__SAVE_ROBOT_STATE_TO_WAREHOUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/save_robot_state_to_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveRobotStateToWarehouse_Request_state
{
public:
  explicit Init_SaveRobotStateToWarehouse_Request_state(::moveit_msgs::srv::SaveRobotStateToWarehouse_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::SaveRobotStateToWarehouse_Request state(::moveit_msgs::srv::SaveRobotStateToWarehouse_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::SaveRobotStateToWarehouse_Request msg_;
};

class Init_SaveRobotStateToWarehouse_Request_robot
{
public:
  explicit Init_SaveRobotStateToWarehouse_Request_robot(::moveit_msgs::srv::SaveRobotStateToWarehouse_Request & msg)
  : msg_(msg)
  {}
  Init_SaveRobotStateToWarehouse_Request_state robot(::moveit_msgs::srv::SaveRobotStateToWarehouse_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return Init_SaveRobotStateToWarehouse_Request_state(msg_);
  }

private:
  ::moveit_msgs::srv::SaveRobotStateToWarehouse_Request msg_;
};

class Init_SaveRobotStateToWarehouse_Request_name
{
public:
  Init_SaveRobotStateToWarehouse_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveRobotStateToWarehouse_Request_robot name(::moveit_msgs::srv::SaveRobotStateToWarehouse_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SaveRobotStateToWarehouse_Request_robot(msg_);
  }

private:
  ::moveit_msgs::srv::SaveRobotStateToWarehouse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::SaveRobotStateToWarehouse_Request>()
{
  return moveit_msgs::srv::builder::Init_SaveRobotStateToWarehouse_Request_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveRobotStateToWarehouse_Response_success
{
public:
  Init_SaveRobotStateToWarehouse_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::SaveRobotStateToWarehouse_Response success(::moveit_msgs::srv::SaveRobotStateToWarehouse_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::SaveRobotStateToWarehouse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::SaveRobotStateToWarehouse_Response>()
{
  return moveit_msgs::srv::builder::Init_SaveRobotStateToWarehouse_Response_success();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__SAVE_ROBOT_STATE_TO_WAREHOUSE__BUILDER_HPP_
