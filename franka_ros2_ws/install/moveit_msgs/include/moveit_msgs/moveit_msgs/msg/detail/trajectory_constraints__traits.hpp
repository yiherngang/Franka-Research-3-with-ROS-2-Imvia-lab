// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/TrajectoryConstraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/trajectory_constraints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryConstraints & msg,
  std::ostream & out)
{
  out << "{";
  // member: constraints
  {
    if (msg.constraints.size() == 0) {
      out << "constraints: []";
    } else {
      out << "constraints: [";
      size_t pending_items = msg.constraints.size();
      for (auto item : msg.constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraints.size() == 0) {
      out << "constraints: []\n";
    } else {
      out << "constraints:\n";
      for (auto item : msg.constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryConstraints & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::TrajectoryConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::TrajectoryConstraints & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::TrajectoryConstraints>()
{
  return "moveit_msgs::msg::TrajectoryConstraints";
}

template<>
inline const char * name<moveit_msgs::msg::TrajectoryConstraints>()
{
  return "moveit_msgs/msg/TrajectoryConstraints";
}

template<>
struct has_fixed_size<moveit_msgs::msg::TrajectoryConstraints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::TrajectoryConstraints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::TrajectoryConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_
