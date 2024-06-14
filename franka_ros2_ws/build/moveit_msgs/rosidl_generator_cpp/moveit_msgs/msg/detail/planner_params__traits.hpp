// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/planner_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlannerParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: keys
  {
    if (msg.keys.size() == 0) {
      out << "keys: []";
    } else {
      out << "keys: [";
      size_t pending_items = msg.keys.size();
      for (auto item : msg.keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: descriptions
  {
    if (msg.descriptions.size() == 0) {
      out << "descriptions: []";
    } else {
      out << "descriptions: [";
      size_t pending_items = msg.descriptions.size();
      for (auto item : msg.descriptions) {
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
  const PlannerParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keys.size() == 0) {
      out << "keys: []\n";
    } else {
      out << "keys:\n";
      for (auto item : msg.keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: descriptions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.descriptions.size() == 0) {
      out << "descriptions: []\n";
    } else {
      out << "descriptions:\n";
      for (auto item : msg.descriptions) {
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

inline std::string to_yaml(const PlannerParams & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::PlannerParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::PlannerParams & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::PlannerParams>()
{
  return "moveit_msgs::msg::PlannerParams";
}

template<>
inline const char * name<moveit_msgs::msg::PlannerParams>()
{
  return "moveit_msgs/msg/PlannerParams";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlannerParams>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlannerParams>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PlannerParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__TRAITS_HPP_
