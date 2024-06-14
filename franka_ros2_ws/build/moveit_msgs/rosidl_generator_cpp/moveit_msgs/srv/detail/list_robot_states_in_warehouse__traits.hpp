// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListRobotStatesInWarehouse_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: regex
  {
    out << "regex: ";
    rosidl_generator_traits::value_to_yaml(msg.regex, out);
    out << ", ";
  }

  // member: robot
  {
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListRobotStatesInWarehouse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: regex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regex: ";
    rosidl_generator_traits::value_to_yaml(msg.regex, out);
    out << "\n";
  }

  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListRobotStatesInWarehouse_Request & msg, bool use_flow_style = false)
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

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::srv::ListRobotStatesInWarehouse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::ListRobotStatesInWarehouse_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse_Request";
}

template<>
inline const char * name<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>()
{
  return "moveit_msgs/srv/ListRobotStatesInWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListRobotStatesInWarehouse_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
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
  const ListRobotStatesInWarehouse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
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

inline std::string to_yaml(const ListRobotStatesInWarehouse_Response & msg, bool use_flow_style = false)
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

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::srv::ListRobotStatesInWarehouse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::ListRobotStatesInWarehouse_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse_Response";
}

template<>
inline const char * name<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>()
{
  return "moveit_msgs/srv/ListRobotStatesInWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse";
}

template<>
inline const char * name<moveit_msgs::srv::ListRobotStatesInWarehouse>()
{
  return "moveit_msgs/srv/ListRobotStatesInWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_
