// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/planning_scene_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'collision_objects'
#include "moveit_msgs/msg/detail/collision_object__traits.hpp"
// Member 'octomap'
#include "octomap_msgs/msg/detail/octomap_with_pose__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningSceneWorld & msg,
  std::ostream & out)
{
  out << "{";
  // member: collision_objects
  {
    if (msg.collision_objects.size() == 0) {
      out << "collision_objects: []";
    } else {
      out << "collision_objects: [";
      size_t pending_items = msg.collision_objects.size();
      for (auto item : msg.collision_objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: octomap
  {
    out << "octomap: ";
    to_flow_style_yaml(msg.octomap, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningSceneWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: collision_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.collision_objects.size() == 0) {
      out << "collision_objects: []\n";
    } else {
      out << "collision_objects:\n";
      for (auto item : msg.collision_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: octomap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "octomap:\n";
    to_block_style_yaml(msg.octomap, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningSceneWorld & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::PlanningSceneWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::PlanningSceneWorld & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::PlanningSceneWorld>()
{
  return "moveit_msgs::msg::PlanningSceneWorld";
}

template<>
inline const char * name<moveit_msgs::msg::PlanningSceneWorld>()
{
  return "moveit_msgs/msg/PlanningSceneWorld";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningSceneWorld>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningSceneWorld>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PlanningSceneWorld>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__TRAITS_HPP_
