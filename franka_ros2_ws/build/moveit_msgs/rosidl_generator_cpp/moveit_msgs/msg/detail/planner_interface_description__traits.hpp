// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlannerInterfaceDescription.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/planner_interface_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlannerInterfaceDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: pipeline_id
  {
    out << "pipeline_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_id, out);
    out << ", ";
  }

  // member: planner_ids
  {
    if (msg.planner_ids.size() == 0) {
      out << "planner_ids: []";
    } else {
      out << "planner_ids: [";
      size_t pending_items = msg.planner_ids.size();
      for (auto item : msg.planner_ids) {
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
  const PlannerInterfaceDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: pipeline_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pipeline_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_id, out);
    out << "\n";
  }

  // member: planner_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planner_ids.size() == 0) {
      out << "planner_ids: []\n";
    } else {
      out << "planner_ids:\n";
      for (auto item : msg.planner_ids) {
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

inline std::string to_yaml(const PlannerInterfaceDescription & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::PlannerInterfaceDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::PlannerInterfaceDescription & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::PlannerInterfaceDescription>()
{
  return "moveit_msgs::msg::PlannerInterfaceDescription";
}

template<>
inline const char * name<moveit_msgs::msg::PlannerInterfaceDescription>()
{
  return "moveit_msgs/msg/PlannerInterfaceDescription";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlannerInterfaceDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlannerInterfaceDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PlannerInterfaceDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__TRAITS_HPP_
