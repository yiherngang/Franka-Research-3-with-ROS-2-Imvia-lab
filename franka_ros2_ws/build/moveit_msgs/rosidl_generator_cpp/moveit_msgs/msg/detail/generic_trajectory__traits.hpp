// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/generic_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"
// Member 'cartesian_trajectory'
#include "moveit_msgs/msg/detail/cartesian_trajectory__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GenericTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: joint_trajectory
  {
    if (msg.joint_trajectory.size() == 0) {
      out << "joint_trajectory: []";
    } else {
      out << "joint_trajectory: [";
      size_t pending_items = msg.joint_trajectory.size();
      for (auto item : msg.joint_trajectory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cartesian_trajectory
  {
    if (msg.cartesian_trajectory.size() == 0) {
      out << "cartesian_trajectory: []";
    } else {
      out << "cartesian_trajectory: [";
      size_t pending_items = msg.cartesian_trajectory.size();
      for (auto item : msg.cartesian_trajectory) {
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
  const GenericTrajectory & msg,
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

  // member: joint_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_trajectory.size() == 0) {
      out << "joint_trajectory: []\n";
    } else {
      out << "joint_trajectory:\n";
      for (auto item : msg.joint_trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cartesian_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cartesian_trajectory.size() == 0) {
      out << "cartesian_trajectory: []\n";
    } else {
      out << "cartesian_trajectory:\n";
      for (auto item : msg.cartesian_trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenericTrajectory & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::GenericTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::GenericTrajectory & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::GenericTrajectory>()
{
  return "moveit_msgs::msg::GenericTrajectory";
}

template<>
inline const char * name<moveit_msgs::msg::GenericTrajectory>()
{
  return "moveit_msgs/msg/GenericTrajectory";
}

template<>
struct has_fixed_size<moveit_msgs::msg::GenericTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::GenericTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::GenericTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__TRAITS_HPP_
