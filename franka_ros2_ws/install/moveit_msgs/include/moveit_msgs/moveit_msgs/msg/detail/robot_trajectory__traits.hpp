// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_trajectory
  {
    out << "joint_trajectory: ";
    to_flow_style_yaml(msg.joint_trajectory, out);
    out << ", ";
  }

  // member: multi_dof_joint_trajectory
  {
    out << "multi_dof_joint_trajectory: ";
    to_flow_style_yaml(msg.multi_dof_joint_trajectory, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_trajectory:\n";
    to_block_style_yaml(msg.joint_trajectory, out, indentation + 2);
  }

  // member: multi_dof_joint_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_joint_trajectory:\n";
    to_block_style_yaml(msg.multi_dof_joint_trajectory, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotTrajectory & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::msg::RobotTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::RobotTrajectory & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::RobotTrajectory>()
{
  return "moveit_msgs::msg::RobotTrajectory";
}

template<>
inline const char * name<moveit_msgs::msg::RobotTrajectory>()
{
  return "moveit_msgs/msg/RobotTrajectory";
}

template<>
struct has_fixed_size<moveit_msgs::msg::RobotTrajectory>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value && has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::RobotTrajectory>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value && has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

template<>
struct is_message<moveit_msgs::msg::RobotTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__TRAITS_HPP_
