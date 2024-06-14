// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointLimits & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << ", ";
  }

  // member: has_position_limits
  {
    out << "has_position_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_position_limits, out);
    out << ", ";
  }

  // member: min_position
  {
    out << "min_position: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position, out);
    out << ", ";
  }

  // member: max_position
  {
    out << "max_position: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position, out);
    out << ", ";
  }

  // member: has_velocity_limits
  {
    out << "has_velocity_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_velocity_limits, out);
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << ", ";
  }

  // member: has_acceleration_limits
  {
    out << "has_acceleration_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_acceleration_limits, out);
    out << ", ";
  }

  // member: max_acceleration
  {
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << ", ";
  }

  // member: has_jerk_limits
  {
    out << "has_jerk_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_jerk_limits, out);
    out << ", ";
  }

  // member: max_jerk
  {
    out << "max_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_jerk, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointLimits & msg,
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

  // member: has_position_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_position_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_position_limits, out);
    out << "\n";
  }

  // member: min_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_position: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position, out);
    out << "\n";
  }

  // member: max_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_position: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position, out);
    out << "\n";
  }

  // member: has_velocity_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_velocity_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_velocity_limits, out);
    out << "\n";
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: has_acceleration_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_acceleration_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_acceleration_limits, out);
    out << "\n";
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }

  // member: has_jerk_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_jerk_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.has_jerk_limits, out);
    out << "\n";
  }

  // member: max_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_jerk, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointLimits & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::JointLimits & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::JointLimits & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::JointLimits>()
{
  return "moveit_msgs::msg::JointLimits";
}

template<>
inline const char * name<moveit_msgs::msg::JointLimits>()
{
  return "moveit_msgs/msg/JointLimits";
}

template<>
struct has_fixed_size<moveit_msgs::msg::JointLimits>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::JointLimits>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::JointLimits>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
