// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MoveItErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoveItErrorCodes & msg,
  std::ostream & out)
{
  out << "{";
  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveItErrorCodes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveItErrorCodes & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::MoveItErrorCodes & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::MoveItErrorCodes & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::MoveItErrorCodes>()
{
  return "moveit_msgs::msg::MoveItErrorCodes";
}

template<>
inline const char * name<moveit_msgs::msg::MoveItErrorCodes>()
{
  return "moveit_msgs/msg/MoveItErrorCodes";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::msg::MoveItErrorCodes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__TRAITS_HPP_
