// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionSequenceResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/motion_sequence_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"
// Member 'sequence_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'planned_trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionSequenceResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: sequence_start
  {
    out << "sequence_start: ";
    to_flow_style_yaml(msg.sequence_start, out);
    out << ", ";
  }

  // member: planned_trajectories
  {
    if (msg.planned_trajectories.size() == 0) {
      out << "planned_trajectories: []";
    } else {
      out << "planned_trajectories: [";
      size_t pending_items = msg.planned_trajectories.size();
      for (auto item : msg.planned_trajectories) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: planning_time
  {
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionSequenceResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }

  // member: sequence_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_start:\n";
    to_block_style_yaml(msg.sequence_start, out, indentation + 2);
  }

  // member: planned_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planned_trajectories.size() == 0) {
      out << "planned_trajectories: []\n";
    } else {
      out << "planned_trajectories:\n";
      for (auto item : msg.planned_trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionSequenceResponse & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::MotionSequenceResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::MotionSequenceResponse & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::MotionSequenceResponse>()
{
  return "moveit_msgs::msg::MotionSequenceResponse";
}

template<>
inline const char * name<moveit_msgs::msg::MotionSequenceResponse>()
{
  return "moveit_msgs/msg/MotionSequenceResponse";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionSequenceResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionSequenceResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::MotionSequenceResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__TRAITS_HPP_
