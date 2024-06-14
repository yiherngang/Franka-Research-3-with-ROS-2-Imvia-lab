// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPositionIK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/get_position_ik__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ik_request'
#include "moveit_msgs/msg/detail/position_ik_request__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPositionIK_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ik_request
  {
    out << "ik_request: ";
    to_flow_style_yaml(msg.ik_request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPositionIK_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ik_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ik_request:\n";
    to_block_style_yaml(msg.ik_request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPositionIK_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetPositionIK_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetPositionIK_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionIK_Request>()
{
  return "moveit_msgs::srv::GetPositionIK_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionIK_Request>()
{
  return "moveit_msgs/srv/GetPositionIK_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionIK_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PositionIKRequest>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionIK_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PositionIKRequest>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetPositionIK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'solution'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPositionIK_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: solution
  {
    out << "solution: ";
    to_flow_style_yaml(msg.solution, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPositionIK_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution:\n";
    to_block_style_yaml(msg.solution, out, indentation + 2);
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPositionIK_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetPositionIK_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetPositionIK_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionIK_Response>()
{
  return "moveit_msgs::srv::GetPositionIK_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionIK_Response>()
{
  return "moveit_msgs/srv/GetPositionIK_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionIK_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_fixed_size<moveit_msgs::msg::RobotState>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionIK_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_bounded_size<moveit_msgs::msg::RobotState>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetPositionIK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionIK>()
{
  return "moveit_msgs::srv::GetPositionIK";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionIK>()
{
  return "moveit_msgs/srv/GetPositionIK";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionIK>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPositionIK_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPositionIK_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionIK>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPositionIK_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPositionIK_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetPositionIK>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetPositionIK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetPositionIK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__TRAITS_HPP_
