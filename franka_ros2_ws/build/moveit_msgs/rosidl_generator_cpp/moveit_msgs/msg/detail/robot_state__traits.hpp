// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'multi_dof_joint_state'
#include "sensor_msgs/msg/detail/multi_dof_joint_state__traits.hpp"
// Member 'attached_collision_objects'
#include "moveit_msgs/msg/detail/attached_collision_object__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_state
  {
    out << "joint_state: ";
    to_flow_style_yaml(msg.joint_state, out);
    out << ", ";
  }

  // member: multi_dof_joint_state
  {
    out << "multi_dof_joint_state: ";
    to_flow_style_yaml(msg.multi_dof_joint_state, out);
    out << ", ";
  }

  // member: attached_collision_objects
  {
    if (msg.attached_collision_objects.size() == 0) {
      out << "attached_collision_objects: []";
    } else {
      out << "attached_collision_objects: [";
      size_t pending_items = msg.attached_collision_objects.size();
      for (auto item : msg.attached_collision_objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_diff
  {
    out << "is_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.is_diff, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_state:\n";
    to_block_style_yaml(msg.joint_state, out, indentation + 2);
  }

  // member: multi_dof_joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_joint_state:\n";
    to_block_style_yaml(msg.multi_dof_joint_state, out, indentation + 2);
  }

  // member: attached_collision_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attached_collision_objects.size() == 0) {
      out << "attached_collision_objects: []\n";
    } else {
      out << "attached_collision_objects:\n";
      for (auto item : msg.attached_collision_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.is_diff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::RobotState & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::RobotState>()
{
  return "moveit_msgs::msg::RobotState";
}

template<>
inline const char * name<moveit_msgs::msg::RobotState>()
{
  return "moveit_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<moveit_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
