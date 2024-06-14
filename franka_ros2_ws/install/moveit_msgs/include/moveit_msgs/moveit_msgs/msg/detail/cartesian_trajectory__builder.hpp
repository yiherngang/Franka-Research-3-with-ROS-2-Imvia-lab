// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/cartesian_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianTrajectory_points
{
public:
  explicit Init_CartesianTrajectory_points(::moveit_msgs::msg::CartesianTrajectory & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::CartesianTrajectory points(::moveit_msgs::msg::CartesianTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianTrajectory msg_;
};

class Init_CartesianTrajectory_tracked_frame
{
public:
  explicit Init_CartesianTrajectory_tracked_frame(::moveit_msgs::msg::CartesianTrajectory & msg)
  : msg_(msg)
  {}
  Init_CartesianTrajectory_points tracked_frame(::moveit_msgs::msg::CartesianTrajectory::_tracked_frame_type arg)
  {
    msg_.tracked_frame = std::move(arg);
    return Init_CartesianTrajectory_points(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianTrajectory msg_;
};

class Init_CartesianTrajectory_header
{
public:
  Init_CartesianTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianTrajectory_tracked_frame header(::moveit_msgs::msg::CartesianTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CartesianTrajectory_tracked_frame(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::CartesianTrajectory>()
{
  return moveit_msgs::msg::builder::Init_CartesianTrajectory_header();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_
