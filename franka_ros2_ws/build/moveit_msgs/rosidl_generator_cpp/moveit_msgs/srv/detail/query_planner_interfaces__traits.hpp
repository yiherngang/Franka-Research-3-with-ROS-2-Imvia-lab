// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/query_planner_interfaces__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryPlannerInterfaces_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QueryPlannerInterfaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QueryPlannerInterfaces_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::QueryPlannerInterfaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::QueryPlannerInterfaces_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::QueryPlannerInterfaces_Request>()
{
  return "moveit_msgs::srv::QueryPlannerInterfaces_Request";
}

template<>
inline const char * name<moveit_msgs::srv::QueryPlannerInterfaces_Request>()
{
  return "moveit_msgs/srv/QueryPlannerInterfaces_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'planner_interfaces'
#include "moveit_msgs/msg/detail/planner_interface_description__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryPlannerInterfaces_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: planner_interfaces
  {
    if (msg.planner_interfaces.size() == 0) {
      out << "planner_interfaces: []";
    } else {
      out << "planner_interfaces: [";
      size_t pending_items = msg.planner_interfaces.size();
      for (auto item : msg.planner_interfaces) {
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
  const QueryPlannerInterfaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planner_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planner_interfaces.size() == 0) {
      out << "planner_interfaces: []\n";
    } else {
      out << "planner_interfaces:\n";
      for (auto item : msg.planner_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QueryPlannerInterfaces_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::QueryPlannerInterfaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::QueryPlannerInterfaces_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::QueryPlannerInterfaces_Response>()
{
  return "moveit_msgs::srv::QueryPlannerInterfaces_Response";
}

template<>
inline const char * name<moveit_msgs::srv::QueryPlannerInterfaces_Response>()
{
  return "moveit_msgs/srv/QueryPlannerInterfaces_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::QueryPlannerInterfaces>()
{
  return "moveit_msgs::srv::QueryPlannerInterfaces";
}

template<>
inline const char * name<moveit_msgs::srv::QueryPlannerInterfaces>()
{
  return "moveit_msgs/srv/QueryPlannerInterfaces";
}

template<>
struct has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>::value &&
    has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>::value &&
    has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::QueryPlannerInterfaces>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__TRAITS_HPP_
