// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/save_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filename
  {
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveMap_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::SaveMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::SaveMap_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::SaveMap_Request>()
{
  return "moveit_msgs::srv::SaveMap_Request";
}

template<>
inline const char * name<moveit_msgs::srv::SaveMap_Request>()
{
  return "moveit_msgs/srv/SaveMap_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::SaveMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveMap_Response & msg,
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
  const SaveMap_Response & msg,
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

inline std::string to_yaml(const SaveMap_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::SaveMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::SaveMap_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::SaveMap_Response>()
{
  return "moveit_msgs::srv::SaveMap_Response";
}

template<>
inline const char * name<moveit_msgs::srv::SaveMap_Response>()
{
  return "moveit_msgs/srv/SaveMap_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::SaveMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::SaveMap>()
{
  return "moveit_msgs::srv::SaveMap";
}

template<>
inline const char * name<moveit_msgs::srv::SaveMap>()
{
  return "moveit_msgs/srv/SaveMap";
}

template<>
struct has_fixed_size<moveit_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::SaveMap_Request>::value &&
    has_fixed_size<moveit_msgs::srv::SaveMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::SaveMap_Request>::value &&
    has_bounded_size<moveit_msgs::srv::SaveMap_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::SaveMap>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::SaveMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::SaveMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
