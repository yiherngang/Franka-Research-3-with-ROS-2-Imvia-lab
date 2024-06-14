// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/planning_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'planning_scene_diff'
#include "moveit_msgs/msg/detail/planning_scene__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningOptions & msg,
  std::ostream & out)
{
  out << "{";
  // member: planning_scene_diff
  {
    out << "planning_scene_diff: ";
    to_flow_style_yaml(msg.planning_scene_diff, out);
    out << ", ";
  }

  // member: plan_only
  {
    out << "plan_only: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_only, out);
    out << ", ";
  }

  // member: look_around
  {
    out << "look_around: ";
    rosidl_generator_traits::value_to_yaml(msg.look_around, out);
    out << ", ";
  }

  // member: look_around_attempts
  {
    out << "look_around_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.look_around_attempts, out);
    out << ", ";
  }

  // member: max_safe_execution_cost
  {
    out << "max_safe_execution_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safe_execution_cost, out);
    out << ", ";
  }

  // member: replan
  {
    out << "replan: ";
    rosidl_generator_traits::value_to_yaml(msg.replan, out);
    out << ", ";
  }

  // member: replan_attempts
  {
    out << "replan_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_attempts, out);
    out << ", ";
  }

  // member: replan_delay
  {
    out << "replan_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_delay, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planning_scene_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_scene_diff:\n";
    to_block_style_yaml(msg.planning_scene_diff, out, indentation + 2);
  }

  // member: plan_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_only: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_only, out);
    out << "\n";
  }

  // member: look_around
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "look_around: ";
    rosidl_generator_traits::value_to_yaml(msg.look_around, out);
    out << "\n";
  }

  // member: look_around_attempts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "look_around_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.look_around_attempts, out);
    out << "\n";
  }

  // member: max_safe_execution_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_safe_execution_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safe_execution_cost, out);
    out << "\n";
  }

  // member: replan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan: ";
    rosidl_generator_traits::value_to_yaml(msg.replan, out);
    out << "\n";
  }

  // member: replan_attempts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_attempts, out);
    out << "\n";
  }

  // member: replan_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_delay, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningOptions & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::PlanningOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::PlanningOptions & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::PlanningOptions>()
{
  return "moveit_msgs::msg::PlanningOptions";
}

template<>
inline const char * name<moveit_msgs::msg::PlanningOptions>()
{
  return "moveit_msgs/msg/PlanningOptions";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningOptions>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningOptions>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct is_message<moveit_msgs::msg::PlanningOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__TRAITS_HPP_
