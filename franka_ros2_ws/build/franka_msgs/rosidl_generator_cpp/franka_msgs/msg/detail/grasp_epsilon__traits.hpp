// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/msg/detail/grasp_epsilon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franka_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraspEpsilon & msg,
  std::ostream & out)
{
  out << "{";
  // member: inner
  {
    out << "inner: ";
    rosidl_generator_traits::value_to_yaml(msg.inner, out);
    out << ", ";
  }

  // member: outer
  {
    out << "outer: ";
    rosidl_generator_traits::value_to_yaml(msg.outer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraspEpsilon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: inner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner: ";
    rosidl_generator_traits::value_to_yaml(msg.inner, out);
    out << "\n";
  }

  // member: outer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer: ";
    rosidl_generator_traits::value_to_yaml(msg.outer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraspEpsilon & msg, bool use_flow_style = false)
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

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::msg::GraspEpsilon & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::msg::GraspEpsilon & msg)
{
  return franka_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::msg::GraspEpsilon>()
{
  return "franka_msgs::msg::GraspEpsilon";
}

template<>
inline const char * name<franka_msgs::msg::GraspEpsilon>()
{
  return "franka_msgs/msg/GraspEpsilon";
}

template<>
struct has_fixed_size<franka_msgs::msg::GraspEpsilon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::msg::GraspEpsilon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::msg::GraspEpsilon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__TRAITS_HPP_
