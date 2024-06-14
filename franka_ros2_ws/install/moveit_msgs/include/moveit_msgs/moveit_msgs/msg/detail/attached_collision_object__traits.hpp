// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/attached_collision_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object'
#include "moveit_msgs/msg/detail/collision_object__traits.hpp"
// Member 'detach_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AttachedCollisionObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_name
  {
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << ", ";
  }

  // member: object
  {
    out << "object: ";
    to_flow_style_yaml(msg.object, out);
    out << ", ";
  }

  // member: touch_links
  {
    if (msg.touch_links.size() == 0) {
      out << "touch_links: []";
    } else {
      out << "touch_links: [";
      size_t pending_items = msg.touch_links.size();
      for (auto item : msg.touch_links) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: detach_posture
  {
    out << "detach_posture: ";
    to_flow_style_yaml(msg.detach_posture, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttachedCollisionObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << "\n";
  }

  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object:\n";
    to_block_style_yaml(msg.object, out, indentation + 2);
  }

  // member: touch_links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.touch_links.size() == 0) {
      out << "touch_links: []\n";
    } else {
      out << "touch_links:\n";
      for (auto item : msg.touch_links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: detach_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detach_posture:\n";
    to_block_style_yaml(msg.detach_posture, out, indentation + 2);
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttachedCollisionObject & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::AttachedCollisionObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::AttachedCollisionObject & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::AttachedCollisionObject>()
{
  return "moveit_msgs::msg::AttachedCollisionObject";
}

template<>
inline const char * name<moveit_msgs::msg::AttachedCollisionObject>()
{
  return "moveit_msgs/msg/AttachedCollisionObject";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AttachedCollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AttachedCollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::AttachedCollisionObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_
