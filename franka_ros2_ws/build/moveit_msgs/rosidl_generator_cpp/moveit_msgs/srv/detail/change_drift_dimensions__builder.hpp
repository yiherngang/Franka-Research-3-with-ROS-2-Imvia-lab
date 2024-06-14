// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/ChangeDriftDimensions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/change_drift_dimensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeDriftDimensions_Request_transform_jog_frame_to_drift_frame
{
public:
  explicit Init_ChangeDriftDimensions_Request_transform_jog_frame_to_drift_frame(::moveit_msgs::srv::ChangeDriftDimensions_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::ChangeDriftDimensions_Request transform_jog_frame_to_drift_frame(::moveit_msgs::srv::ChangeDriftDimensions_Request::_transform_jog_frame_to_drift_frame_type arg)
  {
    msg_.transform_jog_frame_to_drift_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Request msg_;
};

class Init_ChangeDriftDimensions_Request_drift_z_rotation
{
public:
  explicit Init_ChangeDriftDimensions_Request_drift_z_rotation(::moveit_msgs::srv::ChangeDriftDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeDriftDimensions_Request_transform_jog_frame_to_drift_frame drift_z_rotation(::moveit_msgs::srv::ChangeDriftDimensions_Request::_drift_z_rotation_type arg)
  {
    msg_.drift_z_rotation = std::move(arg);
    return Init_ChangeDriftDimensions_Request_transform_jog_frame_to_drift_frame(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Request msg_;
};

class Init_ChangeDriftDimensions_Request_drift_y_rotation
{
public:
  explicit Init_ChangeDriftDimensions_Request_drift_y_rotation(::moveit_msgs::srv::ChangeDriftDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeDriftDimensions_Request_drift_z_rotation drift_y_rotation(::moveit_msgs::srv::ChangeDriftDimensions_Request::_drift_y_rotation_type arg)
  {
    msg_.drift_y_rotation = std::move(arg);
    return Init_ChangeDriftDimensions_Request_drift_z_rotation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Request msg_;
};

class Init_ChangeDriftDimensions_Request_drift_x_rotation
{
public:
  explicit Init_ChangeDriftDimensions_Request_drift_x_rotation(::moveit_msgs::srv::ChangeDriftDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeDriftDimensions_Request_drift_y_rotation drift_x_rotation(::moveit_msgs::srv::ChangeDriftDimensions_Request::_drift_x_rotation_type arg)
  {
    msg_.drift_x_rotation = std::move(arg);
    return Init_ChangeDriftDimensions_Request_drift_y_rotation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Request msg_;
};

class Init_ChangeDriftDimensions_Request_drift_z_translation
{
public:
  explicit Init_ChangeDriftDimensions_Request_drift_z_translation(::moveit_msgs::srv::ChangeDriftDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeDriftDimensions_Request_drift_x_rotation drift_z_translation(::moveit_msgs::srv::ChangeDriftDimensions_Request::_drift_z_translation_type arg)
  {
    msg_.drift_z_translation = std::move(arg);
    return Init_ChangeDriftDimensions_Request_drift_x_rotation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Request msg_;
};

class Init_ChangeDriftDimensions_Request_drift_y_translation
{
public:
  explicit Init_ChangeDriftDimensions_Request_drift_y_translation(::moveit_msgs::srv::ChangeDriftDimensions_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeDriftDimensions_Request_drift_z_translation drift_y_translation(::moveit_msgs::srv::ChangeDriftDimensions_Request::_drift_y_translation_type arg)
  {
    msg_.drift_y_translation = std::move(arg);
    return Init_ChangeDriftDimensions_Request_drift_z_translation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Request msg_;
};

class Init_ChangeDriftDimensions_Request_drift_x_translation
{
public:
  Init_ChangeDriftDimensions_Request_drift_x_translation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeDriftDimensions_Request_drift_y_translation drift_x_translation(::moveit_msgs::srv::ChangeDriftDimensions_Request::_drift_x_translation_type arg)
  {
    msg_.drift_x_translation = std::move(arg);
    return Init_ChangeDriftDimensions_Request_drift_y_translation(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ChangeDriftDimensions_Request>()
{
  return moveit_msgs::srv::builder::Init_ChangeDriftDimensions_Request_drift_x_translation();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeDriftDimensions_Response_success
{
public:
  Init_ChangeDriftDimensions_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ChangeDriftDimensions_Response success(::moveit_msgs::srv::ChangeDriftDimensions_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ChangeDriftDimensions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ChangeDriftDimensions_Response>()
{
  return moveit_msgs::srv::builder::Init_ChangeDriftDimensions_Response_success();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__BUILDER_HPP_
