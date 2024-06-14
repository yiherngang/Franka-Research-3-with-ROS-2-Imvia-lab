// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/contact_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: normal
  {
    out << "normal: ";
    to_flow_style_yaml(msg.normal, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: contact_body_1
  {
    out << "contact_body_1: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_body_1, out);
    out << ", ";
  }

  // member: body_type_1
  {
    out << "body_type_1: ";
    rosidl_generator_traits::value_to_yaml(msg.body_type_1, out);
    out << ", ";
  }

  // member: contact_body_2
  {
    out << "contact_body_2: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_body_2, out);
    out << ", ";
  }

  // member: body_type_2
  {
    out << "body_type_2: ";
    rosidl_generator_traits::value_to_yaml(msg.body_type_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactInformation & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal:\n";
    to_block_style_yaml(msg.normal, out, indentation + 2);
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: contact_body_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_body_1: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_body_1, out);
    out << "\n";
  }

  // member: body_type_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_type_1: ";
    rosidl_generator_traits::value_to_yaml(msg.body_type_1, out);
    out << "\n";
  }

  // member: contact_body_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_body_2: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_body_2, out);
    out << "\n";
  }

  // member: body_type_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_type_2: ";
    rosidl_generator_traits::value_to_yaml(msg.body_type_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactInformation & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::ContactInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::ContactInformation & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::ContactInformation>()
{
  return "moveit_msgs::msg::ContactInformation";
}

template<>
inline const char * name<moveit_msgs::msg::ContactInformation>()
{
  return "moveit_msgs/msg/ContactInformation";
}

template<>
struct has_fixed_size<moveit_msgs::msg::ContactInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::ContactInformation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::ContactInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_
