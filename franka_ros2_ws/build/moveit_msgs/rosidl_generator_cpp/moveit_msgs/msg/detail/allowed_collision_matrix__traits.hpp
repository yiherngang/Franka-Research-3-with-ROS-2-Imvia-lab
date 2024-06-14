// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'entry_values'
#include "moveit_msgs/msg/detail/allowed_collision_entry__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllowedCollisionMatrix & msg,
  std::ostream & out)
{
  out << "{";
  // member: entry_names
  {
    if (msg.entry_names.size() == 0) {
      out << "entry_names: []";
    } else {
      out << "entry_names: [";
      size_t pending_items = msg.entry_names.size();
      for (auto item : msg.entry_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: entry_values
  {
    if (msg.entry_values.size() == 0) {
      out << "entry_values: []";
    } else {
      out << "entry_values: [";
      size_t pending_items = msg.entry_values.size();
      for (auto item : msg.entry_values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: default_entry_names
  {
    if (msg.default_entry_names.size() == 0) {
      out << "default_entry_names: []";
    } else {
      out << "default_entry_names: [";
      size_t pending_items = msg.default_entry_names.size();
      for (auto item : msg.default_entry_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: default_entry_values
  {
    if (msg.default_entry_values.size() == 0) {
      out << "default_entry_values: []";
    } else {
      out << "default_entry_values: [";
      size_t pending_items = msg.default_entry_values.size();
      for (auto item : msg.default_entry_values) {
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
  const AllowedCollisionMatrix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entry_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entry_names.size() == 0) {
      out << "entry_names: []\n";
    } else {
      out << "entry_names:\n";
      for (auto item : msg.entry_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: entry_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entry_values.size() == 0) {
      out << "entry_values: []\n";
    } else {
      out << "entry_values:\n";
      for (auto item : msg.entry_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: default_entry_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.default_entry_names.size() == 0) {
      out << "default_entry_names: []\n";
    } else {
      out << "default_entry_names:\n";
      for (auto item : msg.default_entry_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: default_entry_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.default_entry_values.size() == 0) {
      out << "default_entry_values: []\n";
    } else {
      out << "default_entry_values:\n";
      for (auto item : msg.default_entry_values) {
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

inline std::string to_yaml(const AllowedCollisionMatrix & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::AllowedCollisionMatrix & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::AllowedCollisionMatrix & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::AllowedCollisionMatrix>()
{
  return "moveit_msgs::msg::AllowedCollisionMatrix";
}

template<>
inline const char * name<moveit_msgs::msg::AllowedCollisionMatrix>()
{
  return "moveit_msgs/msg/AllowedCollisionMatrix";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AllowedCollisionMatrix>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AllowedCollisionMatrix>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::AllowedCollisionMatrix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__TRAITS_HPP_
