// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/planning_scene__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'fixed_frame_transforms'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"
// Member 'allowed_collision_matrix'
#include "moveit_msgs/msg/detail/allowed_collision_matrix__traits.hpp"
// Member 'link_padding'
#include "moveit_msgs/msg/detail/link_padding__traits.hpp"
// Member 'link_scale'
#include "moveit_msgs/msg/detail/link_scale__traits.hpp"
// Member 'object_colors'
#include "moveit_msgs/msg/detail/object_color__traits.hpp"
// Member 'world'
#include "moveit_msgs/msg/detail/planning_scene_world__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningScene & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: robot_state
  {
    out << "robot_state: ";
    to_flow_style_yaml(msg.robot_state, out);
    out << ", ";
  }

  // member: robot_model_name
  {
    out << "robot_model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_model_name, out);
    out << ", ";
  }

  // member: fixed_frame_transforms
  {
    if (msg.fixed_frame_transforms.size() == 0) {
      out << "fixed_frame_transforms: []";
    } else {
      out << "fixed_frame_transforms: [";
      size_t pending_items = msg.fixed_frame_transforms.size();
      for (auto item : msg.fixed_frame_transforms) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: allowed_collision_matrix
  {
    out << "allowed_collision_matrix: ";
    to_flow_style_yaml(msg.allowed_collision_matrix, out);
    out << ", ";
  }

  // member: link_padding
  {
    if (msg.link_padding.size() == 0) {
      out << "link_padding: []";
    } else {
      out << "link_padding: [";
      size_t pending_items = msg.link_padding.size();
      for (auto item : msg.link_padding) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_scale
  {
    if (msg.link_scale.size() == 0) {
      out << "link_scale: []";
    } else {
      out << "link_scale: [";
      size_t pending_items = msg.link_scale.size();
      for (auto item : msg.link_scale) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_colors
  {
    if (msg.object_colors.size() == 0) {
      out << "object_colors: []";
    } else {
      out << "object_colors: [";
      size_t pending_items = msg.object_colors.size();
      for (auto item : msg.object_colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: world
  {
    out << "world: ";
    to_flow_style_yaml(msg.world, out);
    out << ", ";
  }

  // member: is_diff
  {
    out << "is_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.is_diff, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningScene & msg,
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

  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state:\n";
    to_block_style_yaml(msg.robot_state, out, indentation + 2);
  }

  // member: robot_model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_model_name, out);
    out << "\n";
  }

  // member: fixed_frame_transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fixed_frame_transforms.size() == 0) {
      out << "fixed_frame_transforms: []\n";
    } else {
      out << "fixed_frame_transforms:\n";
      for (auto item : msg.fixed_frame_transforms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: allowed_collision_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allowed_collision_matrix:\n";
    to_block_style_yaml(msg.allowed_collision_matrix, out, indentation + 2);
  }

  // member: link_padding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_padding.size() == 0) {
      out << "link_padding: []\n";
    } else {
      out << "link_padding:\n";
      for (auto item : msg.link_padding) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: link_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_scale.size() == 0) {
      out << "link_scale: []\n";
    } else {
      out << "link_scale:\n";
      for (auto item : msg.link_scale) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: object_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_colors.size() == 0) {
      out << "object_colors: []\n";
    } else {
      out << "object_colors:\n";
      for (auto item : msg.object_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world:\n";
    to_block_style_yaml(msg.world, out, indentation + 2);
  }

  // member: is_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.is_diff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningScene & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::PlanningScene & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::PlanningScene & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::PlanningScene>()
{
  return "moveit_msgs::msg::PlanningScene";
}

template<>
inline const char * name<moveit_msgs::msg::PlanningScene>()
{
  return "moveit_msgs/msg/PlanningScene";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningScene>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningScene>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PlanningScene>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__TRAITS_HPP_
