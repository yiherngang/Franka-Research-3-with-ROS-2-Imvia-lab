// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ELBOW__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__ELBOW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/msg/detail/elbow__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franka_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Elbow & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: desired_position
  {
    if (msg.desired_position.size() == 0) {
      out << "desired_position: []";
    } else {
      out << "desired_position: [";
      size_t pending_items = msg.desired_position.size();
      for (auto item : msg.desired_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: commanded_position
  {
    if (msg.commanded_position.size() == 0) {
      out << "commanded_position: []";
    } else {
      out << "commanded_position: [";
      size_t pending_items = msg.commanded_position.size();
      for (auto item : msg.commanded_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: commanded_velocity
  {
    if (msg.commanded_velocity.size() == 0) {
      out << "commanded_velocity: []";
    } else {
      out << "commanded_velocity: [";
      size_t pending_items = msg.commanded_velocity.size();
      for (auto item : msg.commanded_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: commanded_acceleration
  {
    if (msg.commanded_acceleration.size() == 0) {
      out << "commanded_acceleration: []";
    } else {
      out << "commanded_acceleration: [";
      size_t pending_items = msg.commanded_acceleration.size();
      for (auto item : msg.commanded_acceleration) {
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
  const Elbow & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: desired_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired_position.size() == 0) {
      out << "desired_position: []\n";
    } else {
      out << "desired_position:\n";
      for (auto item : msg.desired_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: commanded_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commanded_position.size() == 0) {
      out << "commanded_position: []\n";
    } else {
      out << "commanded_position:\n";
      for (auto item : msg.commanded_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: commanded_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commanded_velocity.size() == 0) {
      out << "commanded_velocity: []\n";
    } else {
      out << "commanded_velocity:\n";
      for (auto item : msg.commanded_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: commanded_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commanded_acceleration.size() == 0) {
      out << "commanded_acceleration: []\n";
    } else {
      out << "commanded_acceleration:\n";
      for (auto item : msg.commanded_acceleration) {
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

inline std::string to_yaml(const Elbow & msg, bool use_flow_style = false)
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
  const franka_msgs::msg::Elbow & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::msg::Elbow & msg)
{
  return franka_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::msg::Elbow>()
{
  return "franka_msgs::msg::Elbow";
}

template<>
inline const char * name<franka_msgs::msg::Elbow>()
{
  return "franka_msgs/msg/Elbow";
}

template<>
struct has_fixed_size<franka_msgs::msg::Elbow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::msg::Elbow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::msg::Elbow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__ELBOW__TRAITS_HPP_
