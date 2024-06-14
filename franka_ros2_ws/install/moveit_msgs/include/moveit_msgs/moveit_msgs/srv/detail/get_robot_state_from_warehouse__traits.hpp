// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/get_robot_state_from_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotStateFromWarehouse_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
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
  const GetRobotStateFromWarehouse_Request & msg,
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

inline std::string to_yaml(const GetRobotStateFromWarehouse_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetRobotStateFromWarehouse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetRobotStateFromWarehouse_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>()
{
  return "moveit_msgs::srv::GetRobotStateFromWarehouse_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>()
{
  return "moveit_msgs/srv/GetRobotStateFromWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotStateFromWarehouse_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotStateFromWarehouse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotStateFromWarehouse_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetRobotStateFromWarehouse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetRobotStateFromWarehouse_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>()
{
  return "moveit_msgs::srv::GetRobotStateFromWarehouse_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>()
{
  return "moveit_msgs/srv/GetRobotStateFromWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::RobotState>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::RobotState>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetRobotStateFromWarehouse>()
{
  return "moveit_msgs::srv::GetRobotStateFromWarehouse";
}

template<>
inline const char * name<moveit_msgs::srv::GetRobotStateFromWarehouse>()
{
  return "moveit_msgs/srv/GetRobotStateFromWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetRobotStateFromWarehouse>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__TRAITS_HPP_
