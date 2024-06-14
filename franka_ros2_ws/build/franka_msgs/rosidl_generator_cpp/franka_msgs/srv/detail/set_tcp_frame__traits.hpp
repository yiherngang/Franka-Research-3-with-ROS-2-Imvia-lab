// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:srv/SetTCPFrame.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_TCP_FRAME__TRAITS_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_TCP_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/srv/detail/set_tcp_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franka_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTCPFrame_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: transformation
  {
    if (msg.transformation.size() == 0) {
      out << "transformation: []";
    } else {
      out << "transformation: [";
      size_t pending_items = msg.transformation.size();
      for (auto item : msg.transformation) {
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
  const SetTCPFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transformation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transformation.size() == 0) {
      out << "transformation: []\n";
    } else {
      out << "transformation:\n";
      for (auto item : msg.transformation) {
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

inline std::string to_yaml(const SetTCPFrame_Request & msg, bool use_flow_style = false)
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
  const franka_msgs::srv::SetTCPFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::srv::SetTCPFrame_Request & msg)
{
  return franka_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::srv::SetTCPFrame_Request>()
{
  return "franka_msgs::srv::SetTCPFrame_Request";
}

template<>
inline const char * name<franka_msgs::srv::SetTCPFrame_Request>()
{
  return "franka_msgs/srv/SetTCPFrame_Request";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetTCPFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::srv::SetTCPFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::srv::SetTCPFrame_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franka_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTCPFrame_Response & msg,
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
  const SetTCPFrame_Response & msg,
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

inline std::string to_yaml(const SetTCPFrame_Response & msg, bool use_flow_style = false)
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
  const franka_msgs::srv::SetTCPFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::srv::SetTCPFrame_Response & msg)
{
  return franka_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::srv::SetTCPFrame_Response>()
{
  return "franka_msgs::srv::SetTCPFrame_Response";
}

template<>
inline const char * name<franka_msgs::srv::SetTCPFrame_Response>()
{
  return "franka_msgs/srv/SetTCPFrame_Response";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetTCPFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<franka_msgs::srv::SetTCPFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<franka_msgs::srv::SetTCPFrame_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::srv::SetTCPFrame>()
{
  return "franka_msgs::srv::SetTCPFrame";
}

template<>
inline const char * name<franka_msgs::srv::SetTCPFrame>()
{
  return "franka_msgs/srv/SetTCPFrame";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetTCPFrame>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_msgs::srv::SetTCPFrame_Request>::value &&
    has_fixed_size<franka_msgs::srv::SetTCPFrame_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_msgs::srv::SetTCPFrame>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_msgs::srv::SetTCPFrame_Request>::value &&
    has_bounded_size<franka_msgs::srv::SetTCPFrame_Response>::value
  >
{
};

template<>
struct is_service<franka_msgs::srv::SetTCPFrame>
  : std::true_type
{
};

template<>
struct is_service_request<franka_msgs::srv::SetTCPFrame_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_msgs::srv::SetTCPFrame_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_TCP_FRAME__TRAITS_HPP_
