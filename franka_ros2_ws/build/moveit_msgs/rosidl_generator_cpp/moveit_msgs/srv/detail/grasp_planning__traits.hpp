// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
// Member 'movable_obstacles'
#include "moveit_msgs/msg/detail/collision_object__traits.hpp"
// Member 'candidate_grasps'
#include "moveit_msgs/msg/detail/grasp__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GraspPlanning_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: support_surfaces
  {
    if (msg.support_surfaces.size() == 0) {
      out << "support_surfaces: []";
    } else {
      out << "support_surfaces: [";
      size_t pending_items = msg.support_surfaces.size();
      for (auto item : msg.support_surfaces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: candidate_grasps
  {
    if (msg.candidate_grasps.size() == 0) {
      out << "candidate_grasps: []";
    } else {
      out << "candidate_grasps: [";
      size_t pending_items = msg.candidate_grasps.size();
      for (auto item : msg.candidate_grasps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: movable_obstacles
  {
    if (msg.movable_obstacles.size() == 0) {
      out << "movable_obstacles: []";
    } else {
      out << "movable_obstacles: [";
      size_t pending_items = msg.movable_obstacles.size();
      for (auto item : msg.movable_obstacles) {
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
  const GraspPlanning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: support_surfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.support_surfaces.size() == 0) {
      out << "support_surfaces: []\n";
    } else {
      out << "support_surfaces:\n";
      for (auto item : msg.support_surfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: candidate_grasps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.candidate_grasps.size() == 0) {
      out << "candidate_grasps: []\n";
    } else {
      out << "candidate_grasps:\n";
      for (auto item : msg.candidate_grasps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: movable_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.movable_obstacles.size() == 0) {
      out << "movable_obstacles: []\n";
    } else {
      out << "movable_obstacles:\n";
      for (auto item : msg.movable_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraspPlanning_Request & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GraspPlanning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GraspPlanning_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GraspPlanning_Request>()
{
  return "moveit_msgs::srv::GraspPlanning_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GraspPlanning_Request>()
{
  return "moveit_msgs/srv/GraspPlanning_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GraspPlanning_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GraspPlanning_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GraspPlanning_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'grasps'
// already included above
// #include "moveit_msgs/msg/detail/grasp__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GraspPlanning_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: grasps
  {
    if (msg.grasps.size() == 0) {
      out << "grasps: []";
    } else {
      out << "grasps: [";
      size_t pending_items = msg.grasps.size();
      for (auto item : msg.grasps) {
        to_flow_style_yaml(item, out);
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
  const GraspPlanning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grasps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grasps.size() == 0) {
      out << "grasps: []\n";
    } else {
      out << "grasps:\n";
      for (auto item : msg.grasps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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

inline std::string to_yaml(const GraspPlanning_Response & msg, bool use_flow_style = false)
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
  const moveit_msgs::srv::GraspPlanning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GraspPlanning_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GraspPlanning_Response>()
{
  return "moveit_msgs::srv::GraspPlanning_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GraspPlanning_Response>()
{
  return "moveit_msgs/srv/GraspPlanning_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GraspPlanning_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GraspPlanning_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GraspPlanning_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GraspPlanning>()
{
  return "moveit_msgs::srv::GraspPlanning";
}

template<>
inline const char * name<moveit_msgs::srv::GraspPlanning>()
{
  return "moveit_msgs/srv/GraspPlanning";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GraspPlanning>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GraspPlanning_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GraspPlanning_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GraspPlanning>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GraspPlanning_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GraspPlanning_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GraspPlanning>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GraspPlanning_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GraspPlanning_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__TRAITS_HPP_
