// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/TrajectoryConstraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/trajectory_constraints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryConstraints_constraints
{
public:
  Init_TrajectoryConstraints_constraints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::msg::TrajectoryConstraints constraints(::moveit_msgs::msg::TrajectoryConstraints::_constraints_type arg)
  {
    msg_.constraints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::TrajectoryConstraints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::TrajectoryConstraints>()
{
  return moveit_msgs::msg::builder::Init_TrajectoryConstraints_constraints();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__BUILDER_HPP_
