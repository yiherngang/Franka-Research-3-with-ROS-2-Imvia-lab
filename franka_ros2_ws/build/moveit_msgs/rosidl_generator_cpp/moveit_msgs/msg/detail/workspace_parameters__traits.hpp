// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/workspace_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorkspaceParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: min_corner
  {
    out << "min_corner: ";
    to_flow_style_yaml(msg.min_corner, out);
    out << ", ";
  }

  // member: max_corner
  {
    out << "max_corner: ";
    to_flow_style_yaml(msg.max_corner, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WorkspaceParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: min_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_corner:\n";
    to_block_style_yaml(msg.min_corner, out, indentation + 2);
  }

  // member: max_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_corner:\n";
    to_block_style_yaml(msg.max_corner, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorkspaceParameters & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::WorkspaceParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::WorkspaceParameters & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::WorkspaceParameters>()
{
  return "moveit_msgs::msg::WorkspaceParameters";
}

template<>
inline const char * name<moveit_msgs::msg::WorkspaceParameters>()
{
  return "moveit_msgs/msg/WorkspaceParameters";
}

template<>
struct has_fixed_size<moveit_msgs::msg::WorkspaceParameters>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::WorkspaceParameters>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<moveit_msgs::msg::WorkspaceParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__TRAITS_HPP_
