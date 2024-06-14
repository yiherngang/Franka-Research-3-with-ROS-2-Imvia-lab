// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/motion_plan_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'workspace_parameters'
#include "moveit_msgs/msg/detail/workspace_parameters__traits.hpp"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'goal_constraints'
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"
// Member 'trajectory_constraints'
#include "moveit_msgs/msg/detail/trajectory_constraints__traits.hpp"
// Member 'reference_trajectories'
#include "moveit_msgs/msg/detail/generic_trajectory__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionPlanRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: workspace_parameters
  {
    out << "workspace_parameters: ";
    to_flow_style_yaml(msg.workspace_parameters, out);
    out << ", ";
  }

  // member: start_state
  {
    out << "start_state: ";
    to_flow_style_yaml(msg.start_state, out);
    out << ", ";
  }

  // member: goal_constraints
  {
    if (msg.goal_constraints.size() == 0) {
      out << "goal_constraints: []";
    } else {
      out << "goal_constraints: [";
      size_t pending_items = msg.goal_constraints.size();
      for (auto item : msg.goal_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_constraints
  {
    out << "path_constraints: ";
    to_flow_style_yaml(msg.path_constraints, out);
    out << ", ";
  }

  // member: trajectory_constraints
  {
    out << "trajectory_constraints: ";
    to_flow_style_yaml(msg.trajectory_constraints, out);
    out << ", ";
  }

  // member: reference_trajectories
  {
    if (msg.reference_trajectories.size() == 0) {
      out << "reference_trajectories: []";
    } else {
      out << "reference_trajectories: [";
      size_t pending_items = msg.reference_trajectories.size();
      for (auto item : msg.reference_trajectories) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pipeline_id
  {
    out << "pipeline_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_id, out);
    out << ", ";
  }

  // member: planner_id
  {
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
    out << ", ";
  }

  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: num_planning_attempts
  {
    out << "num_planning_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.num_planning_attempts, out);
    out << ", ";
  }

  // member: allowed_planning_time
  {
    out << "allowed_planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.allowed_planning_time, out);
    out << ", ";
  }

  // member: max_velocity_scaling_factor
  {
    out << "max_velocity_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_scaling_factor, out);
    out << ", ";
  }

  // member: max_acceleration_scaling_factor
  {
    out << "max_acceleration_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_scaling_factor, out);
    out << ", ";
  }

  // member: cartesian_speed_end_effector_link
  {
    out << "cartesian_speed_end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_speed_end_effector_link, out);
    out << ", ";
  }

  // member: max_cartesian_speed
  {
    out << "max_cartesian_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cartesian_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionPlanRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: workspace_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "workspace_parameters:\n";
    to_block_style_yaml(msg.workspace_parameters, out, indentation + 2);
  }

  // member: start_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_state:\n";
    to_block_style_yaml(msg.start_state, out, indentation + 2);
  }

  // member: goal_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_constraints.size() == 0) {
      out << "goal_constraints: []\n";
    } else {
      out << "goal_constraints:\n";
      for (auto item : msg.goal_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_constraints:\n";
    to_block_style_yaml(msg.path_constraints, out, indentation + 2);
  }

  // member: trajectory_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_constraints:\n";
    to_block_style_yaml(msg.trajectory_constraints, out, indentation + 2);
  }

  // member: reference_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_trajectories.size() == 0) {
      out << "reference_trajectories: []\n";
    } else {
      out << "reference_trajectories:\n";
      for (auto item : msg.reference_trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pipeline_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pipeline_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_id, out);
    out << "\n";
  }

  // member: planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
    out << "\n";
  }

  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: num_planning_attempts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_planning_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.num_planning_attempts, out);
    out << "\n";
  }

  // member: allowed_planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allowed_planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.allowed_planning_time, out);
    out << "\n";
  }

  // member: max_velocity_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_scaling_factor, out);
    out << "\n";
  }

  // member: max_acceleration_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_scaling_factor, out);
    out << "\n";
  }

  // member: cartesian_speed_end_effector_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_speed_end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_speed_end_effector_link, out);
    out << "\n";
  }

  // member: max_cartesian_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_cartesian_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cartesian_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionPlanRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::msg::MotionPlanRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::MotionPlanRequest & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::MotionPlanRequest>()
{
  return "moveit_msgs::msg::MotionPlanRequest";
}

template<>
inline const char * name<moveit_msgs::msg::MotionPlanRequest>()
{
  return "moveit_msgs/msg/MotionPlanRequest";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionPlanRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionPlanRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::MotionPlanRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__TRAITS_HPP_
