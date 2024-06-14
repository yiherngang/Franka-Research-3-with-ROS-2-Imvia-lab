// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/KinematicSolverInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/kinematic_solver_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_KinematicSolverInfo_link_names
{
public:
  explicit Init_KinematicSolverInfo_link_names(::moveit_msgs::msg::KinematicSolverInfo & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::KinematicSolverInfo link_names(::moveit_msgs::msg::KinematicSolverInfo::_link_names_type arg)
  {
    msg_.link_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::KinematicSolverInfo msg_;
};

class Init_KinematicSolverInfo_limits
{
public:
  explicit Init_KinematicSolverInfo_limits(::moveit_msgs::msg::KinematicSolverInfo & msg)
  : msg_(msg)
  {}
  Init_KinematicSolverInfo_link_names limits(::moveit_msgs::msg::KinematicSolverInfo::_limits_type arg)
  {
    msg_.limits = std::move(arg);
    return Init_KinematicSolverInfo_link_names(msg_);
  }

private:
  ::moveit_msgs::msg::KinematicSolverInfo msg_;
};

class Init_KinematicSolverInfo_joint_names
{
public:
  Init_KinematicSolverInfo_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicSolverInfo_limits joint_names(::moveit_msgs::msg::KinematicSolverInfo::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_KinematicSolverInfo_limits(msg_);
  }

private:
  ::moveit_msgs::msg::KinematicSolverInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::KinematicSolverInfo>()
{
  return moveit_msgs::msg::builder::Init_KinematicSolverInfo_joint_names();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__BUILDER_HPP_
