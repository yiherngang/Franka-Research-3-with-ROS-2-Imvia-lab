// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/JointConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/joint_constraint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointConstraint & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: tolerance_above
  {
    out << "tolerance_above: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance_above, out);
    out << ", ";
  }

  // member: tolerance_below
  {
    out << "tolerance_below: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance_below, out);
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
  const JointConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: tolerance_above
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance_above: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance_above, out);
    out << "\n";
  }

  // member: tolerance_below
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance_below: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance_below, out);
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

inline std::string to_yaml(const JointConstraint & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::JointConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::JointConstraint & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::JointConstraint>()
{
  return "moveit_msgs::msg::JointConstraint";
}

template<>
inline const char * name<moveit_msgs::msg::JointConstraint>()
{
  return "moveit_msgs/msg/JointConstraint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::JointConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::JointConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::JointConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__TRAITS_HPP_
