// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/OrientationConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/orientation_constraint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OrientationConstraint & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: link_name
  {
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << ", ";
  }

  // member: absolute_x_axis_tolerance
  {
    out << "absolute_x_axis_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_x_axis_tolerance, out);
    out << ", ";
  }

  // member: absolute_y_axis_tolerance
  {
    out << "absolute_y_axis_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_y_axis_tolerance, out);
    out << ", ";
  }

  // member: absolute_z_axis_tolerance
  {
    out << "absolute_z_axis_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_z_axis_tolerance, out);
    out << ", ";
  }

  // member: parameterization
  {
    out << "parameterization: ";
    rosidl_generator_traits::value_to_yaml(msg.parameterization, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrientationConstraint & msg,
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

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << "\n";
  }

  // member: absolute_x_axis_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_x_axis_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_x_axis_tolerance, out);
    out << "\n";
  }

  // member: absolute_y_axis_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_y_axis_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_y_axis_tolerance, out);
    out << "\n";
  }

  // member: absolute_z_axis_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_z_axis_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_z_axis_tolerance, out);
    out << "\n";
  }

  // member: parameterization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameterization: ";
    rosidl_generator_traits::value_to_yaml(msg.parameterization, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OrientationConstraint & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::OrientationConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::OrientationConstraint & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::OrientationConstraint>()
{
  return "moveit_msgs::msg::OrientationConstraint";
}

template<>
inline const char * name<moveit_msgs::msg::OrientationConstraint>()
{
  return "moveit_msgs/msg/OrientationConstraint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::OrientationConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::OrientationConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::OrientationConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__TRAITS_HPP_
