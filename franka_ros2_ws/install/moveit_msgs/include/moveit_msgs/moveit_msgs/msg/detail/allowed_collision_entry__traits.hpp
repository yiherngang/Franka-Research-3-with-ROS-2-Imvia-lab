// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllowedCollisionEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: enabled
  {
    if (msg.enabled.size() == 0) {
      out << "enabled: []";
    } else {
      out << "enabled: [";
      size_t pending_items = msg.enabled.size();
      for (auto item : msg.enabled) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const AllowedCollisionEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabled.size() == 0) {
      out << "enabled: []\n";
    } else {
      out << "enabled:\n";
      for (auto item : msg.enabled) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllowedCollisionEntry & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::AllowedCollisionEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::AllowedCollisionEntry & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::AllowedCollisionEntry>()
{
  return "moveit_msgs::msg::AllowedCollisionEntry";
}

template<>
inline const char * name<moveit_msgs::msg::AllowedCollisionEntry>()
{
  return "moveit_msgs/msg/AllowedCollisionEntry";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::AllowedCollisionEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
