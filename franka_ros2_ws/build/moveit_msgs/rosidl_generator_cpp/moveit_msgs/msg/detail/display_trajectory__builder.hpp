// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/DisplayTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/display_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_DisplayTrajectory_trajectory_start
{
public:
  explicit Init_DisplayTrajectory_trajectory_start(::moveit_msgs::msg::DisplayTrajectory & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::DisplayTrajectory trajectory_start(::moveit_msgs::msg::DisplayTrajectory::_trajectory_start_type arg)
  {
    msg_.trajectory_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::DisplayTrajectory msg_;
};

class Init_DisplayTrajectory_trajectory
{
public:
  explicit Init_DisplayTrajectory_trajectory(::moveit_msgs::msg::DisplayTrajectory & msg)
  : msg_(msg)
  {}
  Init_DisplayTrajectory_trajectory_start trajectory(::moveit_msgs::msg::DisplayTrajectory::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_DisplayTrajectory_trajectory_start(msg_);
  }

private:
  ::moveit_msgs::msg::DisplayTrajectory msg_;
};

class Init_DisplayTrajectory_model_id
{
public:
  Init_DisplayTrajectory_model_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DisplayTrajectory_trajectory model_id(::moveit_msgs::msg::DisplayTrajectory::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_DisplayTrajectory_trajectory(msg_);
  }

private:
  ::moveit_msgs::msg::DisplayTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::DisplayTrajectory>()
{
  return moveit_msgs::msg::builder::Init_DisplayTrajectory_model_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__BUILDER_HPP_
