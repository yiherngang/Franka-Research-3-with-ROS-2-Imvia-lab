// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/constraints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_constraints'
#include "moveit_msgs/msg/detail/joint_constraint__traits.hpp"
// Member 'position_constraints'
#include "moveit_msgs/msg/detail/position_constraint__traits.hpp"
// Member 'orientation_constraints'
#include "moveit_msgs/msg/detail/orientation_constraint__traits.hpp"
// Member 'visibility_constraints'
#include "moveit_msgs/msg/detail/visibility_constraint__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Constraints & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: joint_constraints
  {
    if (msg.joint_constraints.size() == 0) {
      out << "joint_constraints: []";
    } else {
      out << "joint_constraints: [";
      size_t pending_items = msg.joint_constraints.size();
      for (auto item : msg.joint_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_constraints
  {
    if (msg.position_constraints.size() == 0) {
      out << "position_constraints: []";
    } else {
      out << "position_constraints: [";
      size_t pending_items = msg.position_constraints.size();
      for (auto item : msg.position_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation_constraints
  {
    if (msg.orientation_constraints.size() == 0) {
      out << "orientation_constraints: []";
    } else {
      out << "orientation_constraints: [";
      size_t pending_items = msg.orientation_constraints.size();
      for (auto item : msg.orientation_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: visibility_constraints
  {
    if (msg.visibility_constraints.size() == 0) {
      out << "visibility_constraints: []";
    } else {
      out << "visibility_constraints: [";
      size_t pending_items = msg.visibility_constraints.size();
      for (auto item : msg.visibility_constraints) {
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
  const Constraints & msg,
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

  // member: joint_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_constraints.size() == 0) {
      out << "joint_constraints: []\n";
    } else {
      out << "joint_constraints:\n";
      for (auto item : msg.joint_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_constraints.size() == 0) {
      out << "position_constraints: []\n";
    } else {
      out << "position_constraints:\n";
      for (auto item : msg.position_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orientation_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation_constraints.size() == 0) {
      out << "orientation_constraints: []\n";
    } else {
      out << "orientation_constraints:\n";
      for (auto item : msg.orientation_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: visibility_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.visibility_constraints.size() == 0) {
      out << "visibility_constraints: []\n";
    } else {
      out << "visibility_constraints:\n";
      for (auto item : msg.visibility_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Constraints & msg, bool use_flow_style = false)
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
  const moveit_msgs::msg::Constraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::Constraints & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::Constraints>()
{
  return "moveit_msgs::msg::Constraints";
}

template<>
inline const char * name<moveit_msgs::msg::Constraints>()
{
  return "moveit_msgs/msg/Constraints";
}

template<>
struct has_fixed_size<moveit_msgs::msg::Constraints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::Constraints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::Constraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_
