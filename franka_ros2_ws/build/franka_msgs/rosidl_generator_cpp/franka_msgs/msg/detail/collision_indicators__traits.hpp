// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/msg/detail/collision_indicators__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'is_cartesian_linear_collision'
// Member 'is_cartesian_angular_collision'
// Member 'is_cartesian_linear_contact'
// Member 'is_cartesian_angular_contact'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace franka_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionIndicators & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_cartesian_linear_collision
  {
    out << "is_cartesian_linear_collision: ";
    to_flow_style_yaml(msg.is_cartesian_linear_collision, out);
    out << ", ";
  }

  // member: is_cartesian_angular_collision
  {
    out << "is_cartesian_angular_collision: ";
    to_flow_style_yaml(msg.is_cartesian_angular_collision, out);
    out << ", ";
  }

  // member: is_cartesian_linear_contact
  {
    out << "is_cartesian_linear_contact: ";
    to_flow_style_yaml(msg.is_cartesian_linear_contact, out);
    out << ", ";
  }

  // member: is_cartesian_angular_contact
  {
    out << "is_cartesian_angular_contact: ";
    to_flow_style_yaml(msg.is_cartesian_angular_contact, out);
    out << ", ";
  }

  // member: is_joint_collision
  {
    if (msg.is_joint_collision.size() == 0) {
      out << "is_joint_collision: []";
    } else {
      out << "is_joint_collision: [";
      size_t pending_items = msg.is_joint_collision.size();
      for (auto item : msg.is_joint_collision) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_joint_contact
  {
    if (msg.is_joint_contact.size() == 0) {
      out << "is_joint_contact: []";
    } else {
      out << "is_joint_contact: [";
      size_t pending_items = msg.is_joint_contact.size();
      for (auto item : msg.is_joint_contact) {
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
  const CollisionIndicators & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_cartesian_linear_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_cartesian_linear_collision:\n";
    to_block_style_yaml(msg.is_cartesian_linear_collision, out, indentation + 2);
  }

  // member: is_cartesian_angular_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_cartesian_angular_collision:\n";
    to_block_style_yaml(msg.is_cartesian_angular_collision, out, indentation + 2);
  }

  // member: is_cartesian_linear_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_cartesian_linear_contact:\n";
    to_block_style_yaml(msg.is_cartesian_linear_contact, out, indentation + 2);
  }

  // member: is_cartesian_angular_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_cartesian_angular_contact:\n";
    to_block_style_yaml(msg.is_cartesian_angular_contact, out, indentation + 2);
  }

  // member: is_joint_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.is_joint_collision.size() == 0) {
      out << "is_joint_collision: []\n";
    } else {
      out << "is_joint_collision:\n";
      for (auto item : msg.is_joint_collision) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_joint_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.is_joint_contact.size() == 0) {
      out << "is_joint_contact: []\n";
    } else {
      out << "is_joint_contact:\n";
      for (auto item : msg.is_joint_contact) {
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

inline std::string to_yaml(const CollisionIndicators & msg, bool use_flow_style = false)
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
  const franka_msgs::msg::CollisionIndicators & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::msg::CollisionIndicators & msg)
{
  return franka_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::msg::CollisionIndicators>()
{
  return "franka_msgs::msg::CollisionIndicators";
}

template<>
inline const char * name<franka_msgs::msg::CollisionIndicators>()
{
  return "franka_msgs/msg/CollisionIndicators";
}

template<>
struct has_fixed_size<franka_msgs::msg::CollisionIndicators>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<franka_msgs::msg::CollisionIndicators>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<franka_msgs::msg::CollisionIndicators>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__TRAITS_HPP_
