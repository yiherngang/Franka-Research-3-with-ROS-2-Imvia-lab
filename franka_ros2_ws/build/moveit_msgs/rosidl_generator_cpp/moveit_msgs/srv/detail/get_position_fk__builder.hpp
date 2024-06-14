// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_position_fk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPositionFK_Request_robot_state
{
public:
  explicit Init_GetPositionFK_Request_robot_state(::moveit_msgs::srv::GetPositionFK_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetPositionFK_Request robot_state(::moveit_msgs::srv::GetPositionFK_Request::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetPositionFK_Request msg_;
};

class Init_GetPositionFK_Request_fk_link_names
{
public:
  explicit Init_GetPositionFK_Request_fk_link_names(::moveit_msgs::srv::GetPositionFK_Request & msg)
  : msg_(msg)
  {}
  Init_GetPositionFK_Request_robot_state fk_link_names(::moveit_msgs::srv::GetPositionFK_Request::_fk_link_names_type arg)
  {
    msg_.fk_link_names = std::move(arg);
    return Init_GetPositionFK_Request_robot_state(msg_);
  }

private:
  ::moveit_msgs::srv::GetPositionFK_Request msg_;
};

class Init_GetPositionFK_Request_header
{
public:
  Init_GetPositionFK_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPositionFK_Request_fk_link_names header(::moveit_msgs::srv::GetPositionFK_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPositionFK_Request_fk_link_names(msg_);
  }

private:
  ::moveit_msgs::srv::GetPositionFK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetPositionFK_Request>()
{
  return moveit_msgs::srv::builder::Init_GetPositionFK_Request_header();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPositionFK_Response_error_code
{
public:
  explicit Init_GetPositionFK_Response_error_code(::moveit_msgs::srv::GetPositionFK_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetPositionFK_Response error_code(::moveit_msgs::srv::GetPositionFK_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetPositionFK_Response msg_;
};

class Init_GetPositionFK_Response_fk_link_names
{
public:
  explicit Init_GetPositionFK_Response_fk_link_names(::moveit_msgs::srv::GetPositionFK_Response & msg)
  : msg_(msg)
  {}
  Init_GetPositionFK_Response_error_code fk_link_names(::moveit_msgs::srv::GetPositionFK_Response::_fk_link_names_type arg)
  {
    msg_.fk_link_names = std::move(arg);
    return Init_GetPositionFK_Response_error_code(msg_);
  }

private:
  ::moveit_msgs::srv::GetPositionFK_Response msg_;
};

class Init_GetPositionFK_Response_pose_stamped
{
public:
  Init_GetPositionFK_Response_pose_stamped()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPositionFK_Response_fk_link_names pose_stamped(::moveit_msgs::srv::GetPositionFK_Response::_pose_stamped_type arg)
  {
    msg_.pose_stamped = std::move(arg);
    return Init_GetPositionFK_Response_fk_link_names(msg_);
  }

private:
  ::moveit_msgs::srv::GetPositionFK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetPositionFK_Response>()
{
  return moveit_msgs::srv::builder::Init_GetPositionFK_Response_pose_stamped();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__BUILDER_HPP_
