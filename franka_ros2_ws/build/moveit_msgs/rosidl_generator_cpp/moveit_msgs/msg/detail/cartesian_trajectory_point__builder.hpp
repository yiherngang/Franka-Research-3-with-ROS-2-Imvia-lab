// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianTrajectoryPoint_time_from_start
{
public:
  explicit Init_CartesianTrajectoryPoint_time_from_start(::moveit_msgs::msg::CartesianTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::CartesianTrajectoryPoint time_from_start(::moveit_msgs::msg::CartesianTrajectoryPoint::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianTrajectoryPoint msg_;
};

class Init_CartesianTrajectoryPoint_point
{
public:
  Init_CartesianTrajectoryPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianTrajectoryPoint_time_from_start point(::moveit_msgs::msg::CartesianTrajectoryPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_CartesianTrajectoryPoint_time_from_start(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::CartesianTrajectoryPoint>()
{
  return moveit_msgs::msg::builder::Init_CartesianTrajectoryPoint_point();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_
