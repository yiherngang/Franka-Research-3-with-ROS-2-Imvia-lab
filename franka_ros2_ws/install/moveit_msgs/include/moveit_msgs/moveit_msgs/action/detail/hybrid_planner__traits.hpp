// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:action/HybridPlanner.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__HYBRID_PLANNER__TRAITS_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__HYBRID_PLANNER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motion_sequence'
#include "moveit_msgs/msg/detail/motion_sequence_request__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: planning_group
  {
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
    out << ", ";
  }

  // member: motion_sequence
  {
    out << "motion_sequence: ";
    to_flow_style_yaml(msg.motion_sequence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planning_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
    out << "\n";
  }

  // member: motion_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_sequence:\n";
    to_block_style_yaml(msg.motion_sequence, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_Goal & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_Goal>()
{
  return "moveit_msgs::action::HybridPlanner_Goal";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_Goal>()
{
  return "moveit_msgs/action/HybridPlanner_Goal";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_Result & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_Result>()
{
  return "moveit_msgs::action::HybridPlanner_Result";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_Result>()
{
  return "moveit_msgs/action/HybridPlanner_Result";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_Feedback & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_Feedback>()
{
  return "moveit_msgs::action::HybridPlanner_Feedback";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_Feedback>()
{
  return "moveit_msgs/action/HybridPlanner_Feedback";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/hybrid_planner__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_SendGoal_Request & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_SendGoal_Request>()
{
  return "moveit_msgs::action::HybridPlanner_SendGoal_Request";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_SendGoal_Request>()
{
  return "moveit_msgs/action/HybridPlanner_SendGoal_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::HybridPlanner_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::HybridPlanner_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_SendGoal_Response & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_SendGoal_Response>()
{
  return "moveit_msgs::action::HybridPlanner_SendGoal_Response";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_SendGoal_Response>()
{
  return "moveit_msgs/action/HybridPlanner_SendGoal_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_SendGoal>()
{
  return "moveit_msgs::action::HybridPlanner_SendGoal";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_SendGoal>()
{
  return "moveit_msgs/action/HybridPlanner_SendGoal";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::HybridPlanner_SendGoal_Request>::value &&
    has_fixed_size<moveit_msgs::action::HybridPlanner_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::HybridPlanner_SendGoal_Request>::value &&
    has_bounded_size<moveit_msgs::action::HybridPlanner_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::HybridPlanner_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::HybridPlanner_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::HybridPlanner_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_GetResult_Request & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_GetResult_Request>()
{
  return "moveit_msgs::action::HybridPlanner_GetResult_Request";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_GetResult_Request>()
{
  return "moveit_msgs/action/HybridPlanner_GetResult_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_GetResult_Response & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_GetResult_Response>()
{
  return "moveit_msgs::action::HybridPlanner_GetResult_Response";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_GetResult_Response>()
{
  return "moveit_msgs/action/HybridPlanner_GetResult_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::HybridPlanner_Result>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::HybridPlanner_Result>::value> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_GetResult>()
{
  return "moveit_msgs::action::HybridPlanner_GetResult";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_GetResult>()
{
  return "moveit_msgs/action/HybridPlanner_GetResult";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::HybridPlanner_GetResult_Request>::value &&
    has_fixed_size<moveit_msgs::action::HybridPlanner_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::HybridPlanner_GetResult_Request>::value &&
    has_bounded_size<moveit_msgs::action::HybridPlanner_GetResult_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::HybridPlanner_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::HybridPlanner_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::HybridPlanner_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HybridPlanner_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HybridPlanner_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HybridPlanner_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::HybridPlanner_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::HybridPlanner_FeedbackMessage & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::HybridPlanner_FeedbackMessage>()
{
  return "moveit_msgs::action::HybridPlanner_FeedbackMessage";
}

template<>
inline const char * name<moveit_msgs::action::HybridPlanner_FeedbackMessage>()
{
  return "moveit_msgs/action/HybridPlanner_FeedbackMessage";
}

template<>
struct has_fixed_size<moveit_msgs::action::HybridPlanner_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::HybridPlanner_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::HybridPlanner_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::HybridPlanner_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::HybridPlanner_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<moveit_msgs::action::HybridPlanner>
  : std::true_type
{
};

template<>
struct is_action_goal<moveit_msgs::action::HybridPlanner_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<moveit_msgs::action::HybridPlanner_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<moveit_msgs::action::HybridPlanner_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVEIT_MSGS__ACTION__DETAIL__HYBRID_PLANNER__TRAITS_HPP_
