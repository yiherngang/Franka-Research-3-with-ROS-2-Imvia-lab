// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
// Member 'primitive_poses'
// Member 'mesh_poses'
// Member 'plane_poses'
// Member 'subframe_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'type'
#include "object_recognition_msgs/msg/detail/object_type__traits.hpp"
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__traits.hpp"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__traits.hpp"
// Member 'planes'
#include "shape_msgs/msg/detail/plane__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

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
    out << ", ";
  }

  // member: planes
  {
    if (msg.planes.size() == 0) {
      out << "planes: []";
    } else {
      out << "planes: [";
      size_t pending_items = msg.planes.size();
      for (auto item : msg.planes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plane_poses
  {
    if (msg.plane_poses.size() == 0) {
      out << "plane_poses: []";
    } else {
      out << "plane_poses: [";
      size_t pending_items = msg.plane_poses.size();
      for (auto item : msg.plane_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: subframe_names
  {
    if (msg.subframe_names.size() == 0) {
      out << "subframe_names: []";
    } else {
      out << "subframe_names: [";
      size_t pending_items = msg.subframe_names.size();
      for (auto item : msg.subframe_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: subframe_poses
  {
    if (msg.subframe_poses.size() == 0) {
      out << "subframe_poses: []";
    } else {
      out << "subframe_poses: [";
      size_t pending_items = msg.subframe_poses.size();
      for (auto item : msg.subframe_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::character_value_to_yaml(msg.operation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

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

  // member: planes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planes.size() == 0) {
      out << "planes: []\n";
    } else {
      out << "planes:\n";
      for (auto item : msg.planes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: plane_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plane_poses.size() == 0) {
      out << "plane_poses: []\n";
    } else {
      out << "plane_poses:\n";
      for (auto item : msg.plane_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: subframe_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subframe_names.size() == 0) {
      out << "subframe_names: []\n";
    } else {
      out << "subframe_names:\n";
      for (auto item : msg.subframe_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: subframe_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subframe_poses.size() == 0) {
      out << "subframe_poses: []\n";
    } else {
      out << "subframe_poses:\n";
      for (auto item : msg.subframe_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::character_value_to_yaml(msg.operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionObject & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::CollisionObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::CollisionObject & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::CollisionObject>()
{
  return "moveit_msgs::msg::CollisionObject";
}

template<>
inline const char * name<moveit_msgs::msg::CollisionObject>()
{
  return "moveit_msgs/msg/CollisionObject";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::CollisionObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_
