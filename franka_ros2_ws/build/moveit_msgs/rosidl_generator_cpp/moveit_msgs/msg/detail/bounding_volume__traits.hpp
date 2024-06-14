// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/bounding_volume__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__traits.hpp"
// Member 'primitive_poses'
// Member 'mesh_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingVolume & msg,
  std::ostream & out)
{
  out << "{";
  // member: primitives
  {
    if (msg.primitives.size() == 0) {
      out << "primitives: []";
    } else {
      out << "primitives: [";
      size_t pending_items = msg.primitives.size();
      for (auto item : msg.primitives) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: primitive_poses
  {
    if (msg.primitive_poses.size() == 0) {
      out << "primitive_poses: []";
    } else {
      out << "primitive_poses: [";
      size_t pending_items = msg.primitive_poses.size();
      for (auto item : msg.primitive_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: meshes
  {
    if (msg.meshes.size() == 0) {
      out << "meshes: []";
    } else {
      out << "meshes: [";
      size_t pending_items = msg.meshes.size();
      for (auto item : msg.meshes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mesh_poses
  {
    if (msg.mesh_poses.size() == 0) {
      out << "mesh_poses: []";
    } else {
      out << "mesh_poses: [";
      size_t pending_items = msg.mesh_poses.size();
      for (auto item : msg.mesh_poses) {
        to_flow_style_yaml(item, out);
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
  const BoundingVolume & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primitives.size() == 0) {
      out << "primitives: []\n";
    } else {
      out << "primitives:\n";
      for (auto item : msg.primitives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: primitive_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primitive_poses.size() == 0) {
      out << "primitive_poses: []\n";
    } else {
      out << "primitive_poses:\n";
      for (auto item : msg.primitive_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: meshes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.meshes.size() == 0) {
      out << "meshes: []\n";
    } else {
      out << "meshes:\n";
      for (auto item : msg.meshes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: mesh_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mesh_poses.size() == 0) {
      out << "mesh_poses: []\n";
    } else {
      out << "mesh_poses:\n";
      for (auto item : msg.mesh_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingVolume & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::BoundingVolume & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::BoundingVolume & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::BoundingVolume>()
{
  return "moveit_msgs::msg::BoundingVolume";
}

template<>
inline const char * name<moveit_msgs::msg::BoundingVolume>()
{
  return "moveit_msgs/msg/BoundingVolume";
}

template<>
struct has_fixed_size<moveit_msgs::msg::BoundingVolume>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::BoundingVolume>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::BoundingVolume>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__TRAITS_HPP_
