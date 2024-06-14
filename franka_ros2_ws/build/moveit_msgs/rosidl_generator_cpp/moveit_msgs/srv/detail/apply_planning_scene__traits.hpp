// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ApplyPlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/apply_planning_scene__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'scene'
#include "moveit_msgs/msg/detail/planning_scene__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyPlanningScene_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: scene
  {
    out << "scene: ";
    to_flow_style_yaml(msg.scene, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyPlanningScene_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene:\n";
    to_block_style_yaml(msg.scene, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyPlanningScene_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::ApplyPlanningScene_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::ApplyPlanningScene_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::ApplyPlanningScene_Request>()
{
  return "moveit_msgs::srv::ApplyPlanningScene_Request";
}

template<>
inline const char * name<moveit_msgs::srv::ApplyPlanningScene_Request>()
{
  return "moveit_msgs/srv/ApplyPlanningScene_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct is_message<moveit_msgs::srv::ApplyPlanningScene_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyPlanningScene_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyPlanningScene_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyPlanningScene_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::ApplyPlanningScene_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::ApplyPlanningScene_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::ApplyPlanningScene_Response>()
{
  return "moveit_msgs::srv::ApplyPlanningScene_Response";
}

template<>
inline const char * name<moveit_msgs::srv::ApplyPlanningScene_Response>()
{
  return "moveit_msgs/srv/ApplyPlanningScene_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::ApplyPlanningScene_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ApplyPlanningScene>()
{
  return "moveit_msgs::srv::ApplyPlanningScene";
}

template<>
inline const char * name<moveit_msgs::srv::ApplyPlanningScene>()
{
  return "moveit_msgs/srv/ApplyPlanningScene";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ApplyPlanningScene>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ApplyPlanningScene>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::ApplyPlanningScene>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::ApplyPlanningScene_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::ApplyPlanningScene_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__TRAITS_HPP_
