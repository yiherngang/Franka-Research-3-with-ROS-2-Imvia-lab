// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/get_position_fk__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPositionFK_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fk_link_names
  {
    if (msg.fk_link_names.size() == 0) {
      out << "fk_link_names: []";
    } else {
      out << "fk_link_names: [";
      size_t pending_items = msg.fk_link_names.size();
      for (auto item : msg.fk_link_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_state
  {
    out << "robot_state: ";
    to_flow_style_yaml(msg.robot_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPositionFK_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: fk_link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fk_link_names.size() == 0) {
      out << "fk_link_names: []\n";
    } else {
      out << "fk_link_names:\n";
      for (auto item : msg.fk_link_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state:\n";
    to_block_style_yaml(msg.robot_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPositionFK_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetPositionFK_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetPositionFK_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionFK_Request>()
{
  return "moveit_msgs::srv::GetPositionFK_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionFK_Request>()
{
  return "moveit_msgs/srv/GetPositionFK_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionFK_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionFK_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetPositionFK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose_stamped'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPositionFK_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_stamped
  {
    if (msg.pose_stamped.size() == 0) {
      out << "pose_stamped: []";
    } else {
      out << "pose_stamped: [";
      size_t pending_items = msg.pose_stamped.size();
      for (auto item : msg.pose_stamped) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fk_link_names
  {
    if (msg.fk_link_names.size() == 0) {
      out << "fk_link_names: []";
    } else {
      out << "fk_link_names: [";
      size_t pending_items = msg.fk_link_names.size();
      for (auto item : msg.fk_link_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const GetPositionFK_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_stamped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_stamped.size() == 0) {
      out << "pose_stamped: []\n";
    } else {
      out << "pose_stamped:\n";
      for (auto item : msg.pose_stamped) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: fk_link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fk_link_names.size() == 0) {
      out << "fk_link_names: []\n";
    } else {
      out << "fk_link_names:\n";
      for (auto item : msg.fk_link_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const GetPositionFK_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GetPositionFK_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetPositionFK_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionFK_Response>()
{
  return "moveit_msgs::srv::GetPositionFK_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionFK_Response>()
{
  return "moveit_msgs/srv/GetPositionFK_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionFK_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionFK_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetPositionFK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionFK>()
{
  return "moveit_msgs::srv::GetPositionFK";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionFK>()
{
  return "moveit_msgs/srv/GetPositionFK";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionFK>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPositionFK_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPositionFK_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionFK>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPositionFK_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPositionFK_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetPositionFK>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetPositionFK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetPositionFK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__TRAITS_HPP_
