// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/planning_scene_components__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningSceneComponents & msg,
  std::ostream & out)
{
  out << "{";
  // member: components
  {
    out << "components: ";
    rosidl_generator_traits::value_to_yaml(msg.components, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningSceneComponents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: components
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "components: ";
    rosidl_generator_traits::value_to_yaml(msg.components, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningSceneComponents & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::PlanningSceneComponents & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::PlanningSceneComponents & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::PlanningSceneComponents>()
{
  return "moveit_msgs::msg::PlanningSceneComponents";
}

template<>
inline const char * name<moveit_msgs::msg::PlanningSceneComponents>()
{
  return "moveit_msgs/msg/PlanningSceneComponents";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningSceneComponents>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningSceneComponents>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::msg::PlanningSceneComponents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__TRAITS_HPP_
