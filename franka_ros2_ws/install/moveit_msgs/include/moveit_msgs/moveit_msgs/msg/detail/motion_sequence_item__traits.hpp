// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/motion_sequence_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'req'
#include "moveit_msgs/msg/detail/motion_plan_request__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionSequenceItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: req
  {
    out << "req: ";
    to_flow_style_yaml(msg.req, out);
    out << ", ";
  }

  // member: blend_radius
  {
    out << "blend_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.blend_radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionSequenceItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req:\n";
    to_block_style_yaml(msg.req, out, indentation + 2);
  }

  // member: blend_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blend_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.blend_radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionSequenceItem & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::MotionSequenceItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::MotionSequenceItem & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::MotionSequenceItem>()
{
  return "moveit_msgs::msg::MotionSequenceItem";
}

template<>
inline const char * name<moveit_msgs::msg::MotionSequenceItem>()
{
  return "moveit_msgs/msg/MotionSequenceItem";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionSequenceItem>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionSequenceItem>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

template<>
struct is_message<moveit_msgs::msg::MotionSequenceItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__TRAITS_HPP_
