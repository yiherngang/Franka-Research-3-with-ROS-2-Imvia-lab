// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/grasp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pre_grasp_posture'
// Member 'grasp_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"
// Member 'grasp_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'pre_grasp_approach'
// Member 'post_grasp_retreat'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/detail/gripper_translation__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Grasp & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pre_grasp_posture
  {
    out << "pre_grasp_posture: ";
    to_flow_style_yaml(msg.pre_grasp_posture, out);
    out << ", ";
  }

  // member: grasp_posture
  {
    out << "grasp_posture: ";
    to_flow_style_yaml(msg.grasp_posture, out);
    out << ", ";
  }

  // member: grasp_pose
  {
    out << "grasp_pose: ";
    to_flow_style_yaml(msg.grasp_pose, out);
    out << ", ";
  }

  // member: grasp_quality
  {
    out << "grasp_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_quality, out);
    out << ", ";
  }

  // member: pre_grasp_approach
  {
    out << "pre_grasp_approach: ";
    to_flow_style_yaml(msg.pre_grasp_approach, out);
    out << ", ";
  }

  // member: post_grasp_retreat
  {
    out << "post_grasp_retreat: ";
    to_flow_style_yaml(msg.post_grasp_retreat, out);
    out << ", ";
  }

  // member: post_place_retreat
  {
    out << "post_place_retreat: ";
    to_flow_style_yaml(msg.post_place_retreat, out);
    out << ", ";
  }

  // member: max_contact_force
  {
    out << "max_contact_force: ";
    rosidl_generator_traits::value_to_yaml(msg.max_contact_force, out);
    out << ", ";
  }

  // member: allowed_touch_objects
  {
    if (msg.allowed_touch_objects.size() == 0) {
      out << "allowed_touch_objects: []";
    } else {
      out << "allowed_touch_objects: [";
      size_t pending_items = msg.allowed_touch_objects.size();
      for (auto item : msg.allowed_touch_objects) {
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
  const Grasp & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pre_grasp_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_grasp_posture:\n";
    to_block_style_yaml(msg.pre_grasp_posture, out, indentation + 2);
  }

  // member: grasp_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_posture:\n";
    to_block_style_yaml(msg.grasp_posture, out, indentation + 2);
  }

  // member: grasp_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_pose:\n";
    to_block_style_yaml(msg.grasp_pose, out, indentation + 2);
  }

  // member: grasp_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_quality, out);
    out << "\n";
  }

  // member: pre_grasp_approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_grasp_approach:\n";
    to_block_style_yaml(msg.pre_grasp_approach, out, indentation + 2);
  }

  // member: post_grasp_retreat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "post_grasp_retreat:\n";
    to_block_style_yaml(msg.post_grasp_retreat, out, indentation + 2);
  }

  // member: post_place_retreat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "post_place_retreat:\n";
    to_block_style_yaml(msg.post_place_retreat, out, indentation + 2);
  }

  // member: max_contact_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_contact_force: ";
    rosidl_generator_traits::value_to_yaml(msg.max_contact_force, out);
    out << "\n";
  }

  // member: allowed_touch_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.allowed_touch_objects.size() == 0) {
      out << "allowed_touch_objects: []\n";
    } else {
      out << "allowed_touch_objects:\n";
      for (auto item : msg.allowed_touch_objects) {
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

inline std::string to_yaml(const Grasp & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::Grasp & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::Grasp & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::Grasp>()
{
  return "moveit_msgs::msg::Grasp";
}

template<>
inline const char * name<moveit_msgs::msg::Grasp>()
{
  return "moveit_msgs/msg/Grasp";
}

template<>
struct has_fixed_size<moveit_msgs::msg::Grasp>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::Grasp>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::Grasp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_
