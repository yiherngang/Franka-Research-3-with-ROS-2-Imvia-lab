// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/generic_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_GenericTrajectory_cartesian_trajectory
{
public:
  explicit Init_GenericTrajectory_cartesian_trajectory(::moveit_msgs::msg::GenericTrajectory & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::GenericTrajectory cartesian_trajectory(::moveit_msgs::msg::GenericTrajectory::_cartesian_trajectory_type arg)
  {
    msg_.cartesian_trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::GenericTrajectory msg_;
};

class Init_GenericTrajectory_joint_trajectory
{
public:
  explicit Init_GenericTrajectory_joint_trajectory(::moveit_msgs::msg::GenericTrajectory & msg)
  : msg_(msg)
  {}
  Init_GenericTrajectory_cartesian_trajectory joint_trajectory(::moveit_msgs::msg::GenericTrajectory::_joint_trajectory_type arg)
  {
    msg_.joint_trajectory = std::move(arg);
    return Init_GenericTrajectory_cartesian_trajectory(msg_);
  }

private:
  ::moveit_msgs::msg::GenericTrajectory msg_;
};

class Init_GenericTrajectory_header
{
public:
  Init_GenericTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericTrajectory_joint_trajectory header(::moveit_msgs::msg::GenericTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GenericTrajectory_joint_trajectory(msg_);
  }

private:
  ::moveit_msgs::msg::GenericTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::GenericTrajectory>()
{
  return moveit_msgs::msg::builder::Init_GenericTrajectory_header();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__BUILDER_HPP_
