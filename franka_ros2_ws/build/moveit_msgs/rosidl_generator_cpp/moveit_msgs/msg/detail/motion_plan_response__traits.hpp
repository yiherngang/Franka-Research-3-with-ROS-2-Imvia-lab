// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionPlanResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/motion_plan_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionPlanResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory_start
  {
    out << "trajectory_start: ";
    to_flow_style_yaml(msg.trajectory_start, out);
    out << ", ";
  }

  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: trajectory
  {
    out << "trajectory: ";
    to_flow_style_yaml(msg.trajectory, out);
    out << ", ";
  }

  // member: planning_time
  {
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionPlanResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_start:\n";
    to_block_style_yaml(msg.trajectory_start, out, indentation + 2);
  }

  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_block_style_yaml(msg.trajectory, out, indentation + 2);
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionPlanResponse & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::MotionPlanResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::MotionPlanResponse & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::MotionPlanResponse>()
{
  return "moveit_msgs::msg::MotionPlanResponse";
}

template<>
inline const char * name<moveit_msgs::msg::MotionPlanResponse>()
{
  return "moveit_msgs/msg/MotionPlanResponse";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionPlanResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionPlanResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::MotionPlanResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__TRAITS_HPP_
