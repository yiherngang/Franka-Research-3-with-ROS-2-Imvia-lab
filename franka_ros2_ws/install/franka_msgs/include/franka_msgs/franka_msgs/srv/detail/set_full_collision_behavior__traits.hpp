// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:srv/SetFullCollisionBehavior.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__TRAITS_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/srv/detail/set_full_collision_behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franka_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFullCollisionBehavior_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: lower_torque_thresholds_acceleration
  {
    if (msg.lower_torque_thresholds_acceleration.size() == 0) {
      out << "lower_torque_thresholds_acceleration: []";
    } else {
      out << "lower_torque_thresholds_acceleration: [";
      size_t pending_items = msg.lower_torque_thresholds_acceleration.size();
      for (auto item : msg.lower_torque_thresholds_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: upper_torque_thresholds_acceleration
  {
    if (msg.upper_torque_thresholds_acceleration.size() == 0) {
      out << "upper_torque_thresholds_acceleration: []";
    } else {
      out << "upper_torque_thresholds_acceleration: [";
      size_t pending_items = msg.upper_torque_thresholds_acceleration.size();
      for (auto item : msg.upper_torque_thresholds_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lower_torque_thresholds_nominal
  {
    if (msg.lower_torque_thresholds_nominal.size() == 0) {
      out << "lower_torque_thresholds_nominal: []";
    } else {
      out << "lower_torque_thresholds_nominal: [";
      size_t pending_items = msg.lower_torque_thresholds_nominal.size();
      for (auto item : msg.lower_torque_thresholds_nominal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: upper_torque_thresholds_nominal
  {
    if (msg.upper_torque_thresholds_nominal.size() == 0) {
      out << "upper_torque_thresholds_nominal: []";
    } else {
      out << "upper_torque_thresholds_nominal: [";
      size_t pending_items = msg.upper_torque_thresholds_nominal.size();
      for (auto item : msg.upper_torque_thresholds_nominal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lower_force_thresholds_acceleration
  {
    if (msg.lower_force_thresholds_acceleration.size() == 0) {
      out << "lower_force_thresholds_acceleration: []";
    } else {
      out << "lower_force_thresholds_acceleration: [";
      size_t pending_items = msg.lower_force_thresholds_acceleration.size();
      for (auto item : msg.lower_force_thresholds_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: upper_force_thresholds_acceleration
  {
    if (msg.upper_force_thresholds_acceleration.size() == 0) {
      out << "upper_force_thresholds_acceleration: []";
    } else {
      out << "upper_force_thresholds_acceleration: [";
      size_t pending_items = msg.upper_force_thresholds_acceleration.size();
      for (auto item : msg.upper_force_thresholds_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lower_force_thresholds_nominal
  {
    if (msg.lower_force_thresholds_nominal.size() == 0) {
      out << "lower_force_thresholds_nominal: []";
    } else {
      out << "lower_force_thresholds_nominal: [";
      size_t pending_items = msg.lower_force_thresholds_nominal.size();
      for (auto item : msg.lower_force_thresholds_nominal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: upper_force_thresholds_nominal
  {
    if (msg.upper_force_thresholds_nominal.size() == 0) {
      out << "upper_force_thresholds_nominal: []";
    } else {
      out << "upper_force_thresholds_nominal: [";
      size_t pending_items = msg.upper_force_thresholds_nominal.size();
      for (auto item : msg.upper_force_thresholds_nominal) {
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
  const SetFullCollisionBehavior_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lower_torque_thresholds_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lower_torque_thresholds_acceleration.size() == 0) {
      out << "lower_torque_thresholds_acceleration: []\n";
    } else {
      out << "lower_torque_thresholds_acceleration:\n";
      for (auto item : msg.lower_torque_thresholds_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: upper_torque_thresholds_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.upper_torque_thresholds_acceleration.size() == 0) {
      out << "upper_torque_thresholds_acceleration: []\n";
    } else {
      out << "upper_torque_thresholds_acceleration:\n";
      for (auto item : msg.upper_torque_thresholds_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lower_torque_thresholds_nominal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lower_torque_thresholds_nominal.size() == 0) {
      out << "lower_torque_thresholds_nominal: []\n";
    } else {
      out << "lower_torque_thresholds_nominal:\n";
      for (auto item : msg.lower_torque_thresholds_nominal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: upper_torque_thresholds_nominal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.upper_torque_thresholds_nominal.size() == 0) {
      out << "upper_torque_thresholds_nominal: []\n";
    } else {
      out << "upper_torque_thresholds_nominal:\n";
      for (auto item : msg.upper_torque_thresholds_nominal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lower_force_thresholds_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lower_force_thresholds_acceleration.size() == 0) {
      out << "lower_force_thresholds_acceleration: []\n";
    } else {
      out << "lower_force_thresholds_acceleration:\n";
      for (auto item : msg.lower_force_thresholds_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: upper_force_thresholds_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.upper_force_thresholds_acceleration.size() == 0) {
      out << "upper_force_thresholds_acceleration: []\n";
    } else {
      out << "upper_force_thresholds_acceleration:\n";
      for (auto item : msg.upper_force_thresholds_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lower_force_thresholds_nominal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lower_force_thresholds_nominal.size() == 0) {
      out << "lower_force_thresholds_nominal: []\n";
    } else {
      out << "lower_force_thresholds_nominal:\n";
      for (auto item : msg.lower_force_thresholds_nominal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: upper_force_thresholds_nominal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.upper_force_thresholds_nominal.size() == 0) {
      out << "upper_force_thresholds_nominal: []\n";
    } else {
      out << "upper_force_thresholds_nominal:\n";
      for (auto item : msg.upper_force_thresholds_nominal) {
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

inline std::string to_yaml(const SetFullCollisionBehavior_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::srv::SetFullCollisionBehavior_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::srv::SetFullCollisionBehavior_Request & msg)
{
  return franka_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::srv::SetFullCollisionBehavior_Request>()
{
  return "franka_msgs::srv::SetFullCollisionBehavior_Request";
}

template<>
inline const char * name<franka_msgs::srv::SetFullCollisionBehavior_Request>()
{
  return "franka_msgs/srv/SetFullCollisionBehavior_Request";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetFullCollisionBehavior_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::srv::SetFullCollisionBehavior_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::srv::SetFullCollisionBehavior_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franka_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFullCollisionBehavior_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetFullCollisionBehavior_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetFullCollisionBehavior_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::srv::SetFullCollisionBehavior_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::srv::SetFullCollisionBehavior_Response & msg)
{
  return franka_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::srv::SetFullCollisionBehavior_Response>()
{
  return "franka_msgs::srv::SetFullCollisionBehavior_Response";
}

template<>
inline const char * name<franka_msgs::srv::SetFullCollisionBehavior_Response>()
{
  return "franka_msgs/srv/SetFullCollisionBehavior_Response";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetFullCollisionBehavior_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<franka_msgs::srv::SetFullCollisionBehavior_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<franka_msgs::srv::SetFullCollisionBehavior_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::srv::SetFullCollisionBehavior>()
{
  return "franka_msgs::srv::SetFullCollisionBehavior";
}

template<>
inline const char * name<franka_msgs::srv::SetFullCollisionBehavior>()
{
  return "franka_msgs/srv/SetFullCollisionBehavior";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetFullCollisionBehavior>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_msgs::srv::SetFullCollisionBehavior_Request>::value &&
    has_fixed_size<franka_msgs::srv::SetFullCollisionBehavior_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_msgs::srv::SetFullCollisionBehavior>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_msgs::srv::SetFullCollisionBehavior_Request>::value &&
    has_bounded_size<franka_msgs::srv::SetFullCollisionBehavior_Response>::value
  >
{
};

template<>
struct is_service<franka_msgs::srv::SetFullCollisionBehavior>
  : std::true_type
{
};

template<>
struct is_service_request<franka_msgs::srv::SetFullCollisionBehavior_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_msgs::srv::SetFullCollisionBehavior_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__TRAITS_HPP_
