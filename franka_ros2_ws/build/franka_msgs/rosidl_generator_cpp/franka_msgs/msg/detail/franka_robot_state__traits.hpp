// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/msg/detail/franka_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'collision_indicators'
#include "franka_msgs/msg/detail/collision_indicators__traits.hpp"
// Member 'measured_joint_state'
// Member 'desired_joint_state'
// Member 'measured_joint_motor_state'
// Member 'tau_ext_hat_filtered'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'elbow'
#include "franka_msgs/msg/detail/elbow__traits.hpp"
// Member 'k_f_ext_hat_k'
// Member 'o_f_ext_hat_k'
#include "geometry_msgs/msg/detail/wrench_stamped__traits.hpp"
// Member 'inertia_ee'
// Member 'inertia_load'
// Member 'inertia_total'
#include "geometry_msgs/msg/detail/inertia_stamped__traits.hpp"
// Member 'o_t_ee'
// Member 'o_t_ee_d'
// Member 'o_t_ee_c'
// Member 'f_t_ee'
// Member 'ee_t_k'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'o_dp_ee_d'
// Member 'o_dp_ee_c'
#include "geometry_msgs/msg/detail/twist_stamped__traits.hpp"
// Member 'o_ddp_ee_c'
#include "geometry_msgs/msg/detail/accel_stamped__traits.hpp"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__traits.hpp"

namespace franka_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FrankaRobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: collision_indicators
  {
    out << "collision_indicators: ";
    to_flow_style_yaml(msg.collision_indicators, out);
    out << ", ";
  }

  // member: measured_joint_state
  {
    out << "measured_joint_state: ";
    to_flow_style_yaml(msg.measured_joint_state, out);
    out << ", ";
  }

  // member: desired_joint_state
  {
    out << "desired_joint_state: ";
    to_flow_style_yaml(msg.desired_joint_state, out);
    out << ", ";
  }

  // member: measured_joint_motor_state
  {
    out << "measured_joint_motor_state: ";
    to_flow_style_yaml(msg.measured_joint_motor_state, out);
    out << ", ";
  }

  // member: ddq_d
  {
    if (msg.ddq_d.size() == 0) {
      out << "ddq_d: []";
    } else {
      out << "ddq_d: [";
      size_t pending_items = msg.ddq_d.size();
      for (auto item : msg.ddq_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dtau_j
  {
    if (msg.dtau_j.size() == 0) {
      out << "dtau_j: []";
    } else {
      out << "dtau_j: [";
      size_t pending_items = msg.dtau_j.size();
      for (auto item : msg.dtau_j) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau_ext_hat_filtered
  {
    out << "tau_ext_hat_filtered: ";
    to_flow_style_yaml(msg.tau_ext_hat_filtered, out);
    out << ", ";
  }

  // member: elbow
  {
    out << "elbow: ";
    to_flow_style_yaml(msg.elbow, out);
    out << ", ";
  }

  // member: k_f_ext_hat_k
  {
    out << "k_f_ext_hat_k: ";
    to_flow_style_yaml(msg.k_f_ext_hat_k, out);
    out << ", ";
  }

  // member: o_f_ext_hat_k
  {
    out << "o_f_ext_hat_k: ";
    to_flow_style_yaml(msg.o_f_ext_hat_k, out);
    out << ", ";
  }

  // member: inertia_ee
  {
    out << "inertia_ee: ";
    to_flow_style_yaml(msg.inertia_ee, out);
    out << ", ";
  }

  // member: inertia_load
  {
    out << "inertia_load: ";
    to_flow_style_yaml(msg.inertia_load, out);
    out << ", ";
  }

  // member: inertia_total
  {
    out << "inertia_total: ";
    to_flow_style_yaml(msg.inertia_total, out);
    out << ", ";
  }

  // member: o_t_ee
  {
    out << "o_t_ee: ";
    to_flow_style_yaml(msg.o_t_ee, out);
    out << ", ";
  }

  // member: o_t_ee_d
  {
    out << "o_t_ee_d: ";
    to_flow_style_yaml(msg.o_t_ee_d, out);
    out << ", ";
  }

  // member: o_t_ee_c
  {
    out << "o_t_ee_c: ";
    to_flow_style_yaml(msg.o_t_ee_c, out);
    out << ", ";
  }

  // member: f_t_ee
  {
    out << "f_t_ee: ";
    to_flow_style_yaml(msg.f_t_ee, out);
    out << ", ";
  }

  // member: ee_t_k
  {
    out << "ee_t_k: ";
    to_flow_style_yaml(msg.ee_t_k, out);
    out << ", ";
  }

  // member: o_dp_ee_d
  {
    out << "o_dp_ee_d: ";
    to_flow_style_yaml(msg.o_dp_ee_d, out);
    out << ", ";
  }

  // member: o_dp_ee_c
  {
    out << "o_dp_ee_c: ";
    to_flow_style_yaml(msg.o_dp_ee_c, out);
    out << ", ";
  }

  // member: o_ddp_ee_c
  {
    out << "o_ddp_ee_c: ";
    to_flow_style_yaml(msg.o_ddp_ee_c, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: control_command_success_rate
  {
    out << "control_command_success_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.control_command_success_rate, out);
    out << ", ";
  }

  // member: robot_mode
  {
    out << "robot_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_mode, out);
    out << ", ";
  }

  // member: current_errors
  {
    out << "current_errors: ";
    to_flow_style_yaml(msg.current_errors, out);
    out << ", ";
  }

  // member: last_motion_errors
  {
    out << "last_motion_errors: ";
    to_flow_style_yaml(msg.last_motion_errors, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrankaRobotState & msg,
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

  // member: collision_indicators
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_indicators:\n";
    to_block_style_yaml(msg.collision_indicators, out, indentation + 2);
  }

  // member: measured_joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_joint_state:\n";
    to_block_style_yaml(msg.measured_joint_state, out, indentation + 2);
  }

  // member: desired_joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_joint_state:\n";
    to_block_style_yaml(msg.desired_joint_state, out, indentation + 2);
  }

  // member: measured_joint_motor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_joint_motor_state:\n";
    to_block_style_yaml(msg.measured_joint_motor_state, out, indentation + 2);
  }

  // member: ddq_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ddq_d.size() == 0) {
      out << "ddq_d: []\n";
    } else {
      out << "ddq_d:\n";
      for (auto item : msg.ddq_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dtau_j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dtau_j.size() == 0) {
      out << "dtau_j: []\n";
    } else {
      out << "dtau_j:\n";
      for (auto item : msg.dtau_j) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau_ext_hat_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tau_ext_hat_filtered:\n";
    to_block_style_yaml(msg.tau_ext_hat_filtered, out, indentation + 2);
  }

  // member: elbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow:\n";
    to_block_style_yaml(msg.elbow, out, indentation + 2);
  }

  // member: k_f_ext_hat_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_f_ext_hat_k:\n";
    to_block_style_yaml(msg.k_f_ext_hat_k, out, indentation + 2);
  }

  // member: o_f_ext_hat_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_f_ext_hat_k:\n";
    to_block_style_yaml(msg.o_f_ext_hat_k, out, indentation + 2);
  }

  // member: inertia_ee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inertia_ee:\n";
    to_block_style_yaml(msg.inertia_ee, out, indentation + 2);
  }

  // member: inertia_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inertia_load:\n";
    to_block_style_yaml(msg.inertia_load, out, indentation + 2);
  }

  // member: inertia_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inertia_total:\n";
    to_block_style_yaml(msg.inertia_total, out, indentation + 2);
  }

  // member: o_t_ee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_t_ee:\n";
    to_block_style_yaml(msg.o_t_ee, out, indentation + 2);
  }

  // member: o_t_ee_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_t_ee_d:\n";
    to_block_style_yaml(msg.o_t_ee_d, out, indentation + 2);
  }

  // member: o_t_ee_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_t_ee_c:\n";
    to_block_style_yaml(msg.o_t_ee_c, out, indentation + 2);
  }

  // member: f_t_ee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_t_ee:\n";
    to_block_style_yaml(msg.f_t_ee, out, indentation + 2);
  }

  // member: ee_t_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_t_k:\n";
    to_block_style_yaml(msg.ee_t_k, out, indentation + 2);
  }

  // member: o_dp_ee_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_dp_ee_d:\n";
    to_block_style_yaml(msg.o_dp_ee_d, out, indentation + 2);
  }

  // member: o_dp_ee_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_dp_ee_c:\n";
    to_block_style_yaml(msg.o_dp_ee_c, out, indentation + 2);
  }

  // member: o_ddp_ee_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_ddp_ee_c:\n";
    to_block_style_yaml(msg.o_ddp_ee_c, out, indentation + 2);
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: control_command_success_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_command_success_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.control_command_success_rate, out);
    out << "\n";
  }

  // member: robot_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_mode, out);
    out << "\n";
  }

  // member: current_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_errors:\n";
    to_block_style_yaml(msg.current_errors, out, indentation + 2);
  }

  // member: last_motion_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_motion_errors:\n";
    to_block_style_yaml(msg.last_motion_errors, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrankaRobotState & msg, bool use_flow_style = false)
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

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::msg::FrankaRobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::msg::FrankaRobotState & msg)
{
  return franka_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::msg::FrankaRobotState>()
{
  return "franka_msgs::msg::FrankaRobotState";
}

template<>
inline const char * name<franka_msgs::msg::FrankaRobotState>()
{
  return "franka_msgs/msg/FrankaRobotState";
}

template<>
struct has_fixed_size<franka_msgs::msg::FrankaRobotState>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::msg::CollisionIndicators>::value && has_fixed_size<franka_msgs::msg::Elbow>::value && has_fixed_size<franka_msgs::msg::Errors>::value && has_fixed_size<geometry_msgs::msg::AccelStamped>::value && has_fixed_size<geometry_msgs::msg::InertiaStamped>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<geometry_msgs::msg::TwistStamped>::value && has_fixed_size<geometry_msgs::msg::WrenchStamped>::value && has_fixed_size<sensor_msgs::msg::JointState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<franka_msgs::msg::FrankaRobotState>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::msg::CollisionIndicators>::value && has_bounded_size<franka_msgs::msg::Elbow>::value && has_bounded_size<franka_msgs::msg::Errors>::value && has_bounded_size<geometry_msgs::msg::AccelStamped>::value && has_bounded_size<geometry_msgs::msg::InertiaStamped>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<geometry_msgs::msg::TwistStamped>::value && has_bounded_size<geometry_msgs::msg::WrenchStamped>::value && has_bounded_size<sensor_msgs::msg::JointState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<franka_msgs::msg::FrankaRobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_
