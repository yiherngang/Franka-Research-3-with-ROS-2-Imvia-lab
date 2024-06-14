// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/ChangeControlDimensions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/change_control_dimensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeControlDimensions_Request_control_z_rotation
{
public:
  explicit Init_ChangeControlDimensions_Request_control_z_rotation(::moveit_msgs::srv::ChangeControlDimensions_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::ChangeControlDimensions_Request control_z_rotation(::moveit_msgs::srv::ChangeControlDimensions_Request::_control_z_rotation_type arg)
  {
    msg_.control_z_rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeControlDimensions_Request msg_;
};

class Init_ChangeControlDimensions_Request_control_y_rotation
{
public:
  explicit Init_ChangeControlDimensions_Request_control_y_rotation(::moveit_msgs::srv::ChangeControlDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeControlDimensions_Request_control_z_rotation control_y_rotation(::moveit_msgs::srv::ChangeControlDimensions_Request::_control_y_rotation_type arg)
  {
    msg_.control_y_rotation = std::move(arg);
    return Init_ChangeControlDimensions_Request_control_z_rotation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeControlDimensions_Request msg_;
};

class Init_ChangeControlDimensions_Request_control_x_rotation
{
public:
  explicit Init_ChangeControlDimensions_Request_control_x_rotation(::moveit_msgs::srv::ChangeControlDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeControlDimensions_Request_control_y_rotation control_x_rotation(::moveit_msgs::srv::ChangeControlDimensions_Request::_control_x_rotation_type arg)
  {
    msg_.control_x_rotation = std::move(arg);
    return Init_ChangeControlDimensions_Request_control_y_rotation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeControlDimensions_Request msg_;
};

class Init_ChangeControlDimensions_Request_control_z_translation
{
public:
  explicit Init_ChangeControlDimensions_Request_control_z_translation(::moveit_msgs::srv::ChangeControlDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeControlDimensions_Request_control_x_rotation control_z_translation(::moveit_msgs::srv::ChangeControlDimensions_Request::_control_z_translation_type arg)
  {
    msg_.control_z_translation = std::move(arg);
    return Init_ChangeControlDimensions_Request_control_x_rotation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeControlDimensions_Request msg_;
};

class Init_ChangeControlDimensions_Request_control_y_translation
{
public:
  explicit Init_ChangeControlDimensions_Request_control_y_translation(::moveit_msgs::srv::ChangeControlDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeControlDimensions_Request_control_z_translation control_y_translation(::moveit_msgs::srv::ChangeControlDimensions_Request::_control_y_translation_type arg)
  {
    msg_.control_y_translation = std::move(arg);
    return Init_ChangeControlDimensions_Request_control_z_translation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeControlDimensions_Request msg_;
};

class Init_ChangeControlDimensions_Request_control_x_translation
{
public:
  Init_ChangeControlDimensions_Request_control_x_translation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeControlDimensions_Request_control_y_translation control_x_translation(::moveit_msgs::srv::ChangeControlDimensions_Request::_control_x_translation_type arg)
  {
    msg_.control_x_translation = std::move(arg);
    return Init_ChangeControlDimensions_Request_control_y_translation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeControlDimensions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ChangeControlDimensions_Request>()
{
  return moveit_msgs::srv::builder::Init_ChangeControlDimensions_Request_control_x_translation();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeControlDimensions_Response_success
{
public:
  Init_ChangeControlDimensions_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ChangeControlDimensions_Response success(::moveit_msgs::srv::ChangeControlDimensions_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeControlDimensions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ChangeControlDimensions_Response>()
{
  return moveit_msgs::srv::builder::Init_ChangeControlDimensions_Response_success();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__BUILDER_HPP_
