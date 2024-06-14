// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/get_planner_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPlannerParams_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pipeline_id
  {
    out << "pipeline_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_id, out);
    out << ", ";
  }

  // member: planner_config
  {
    out << "planner_config: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_config, out);
    out << ", ";
  }

  // member: group
  {
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPlannerParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pipeline_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pipeline_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_id, out);
    out << "\n";
  }

  // member: planner_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_config: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_config, out);
    out << "\n";
  }

  // member: group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPlannerParams_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetPlannerParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetPlannerParams_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams_Request>()
{
  return "moveit_msgs::srv::GetPlannerParams_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetPlannerParams_Request>()
{
  return "moveit_msgs/srv/GetPlannerParams_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetPlannerParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'params'
#include "moveit_msgs/msg/detail/planner_params__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPlannerParams_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: params
  {
    out << "params: ";
    to_flow_style_yaml(msg.params, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPlannerParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params:\n";
    to_block_style_yaml(msg.params, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPlannerParams_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetPlannerParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetPlannerParams_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams_Response>()
{
  return "moveit_msgs::srv::GetPlannerParams_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetPlannerParams_Response>()
{
  return "moveit_msgs/srv/GetPlannerParams_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlannerParams>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlannerParams>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetPlannerParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams>()
{
  return "moveit_msgs::srv::GetPlannerParams";
}

template<>
inline const char * name<moveit_msgs::srv::GetPlannerParams>()
{
  return "moveit_msgs/srv/GetPlannerParams";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPlannerParams_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPlannerParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPlannerParams_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPlannerParams_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetPlannerParams>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetPlannerParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetPlannerParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__TRAITS_HPP_
