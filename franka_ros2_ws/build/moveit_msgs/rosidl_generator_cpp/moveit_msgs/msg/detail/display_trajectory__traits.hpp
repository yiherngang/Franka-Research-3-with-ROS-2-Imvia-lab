// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/DisplayTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/display_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DisplayTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_id
  {
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << ", ";
  }

  // member: trajectory
  {
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []";
    } else {
      out << "trajectory: [";
      size_t pending_items = msg.trajectory.size();
      for (auto item : msg.trajectory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trajectory_start
  {
    out << "trajectory_start: ";
    to_flow_style_yaml(msg.trajectory_start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DisplayTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << "\n";
  }

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []\n";
    } else {
      out << "trajectory:\n";
      for (auto item : msg.trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: trajectory_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_start:\n";
    to_block_style_yaml(msg.trajectory_start, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DisplayTrajectory & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::DisplayTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::DisplayTrajectory & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::DisplayTrajectory>()
{
  return "moveit_msgs::msg::DisplayTrajectory";
}

template<>
inline const char * name<moveit_msgs::msg::DisplayTrajectory>()
{
  return "moveit_msgs/msg/DisplayTrajectory";
}

template<>
struct has_fixed_size<moveit_msgs::msg::DisplayTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::DisplayTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::DisplayTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__TRAITS_HPP_
