// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__BUILDER_HPP_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/msg/detail/franka_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace msg
{

namespace builder
{

class Init_FrankaRobotState_last_motion_errors
{
public:
  explicit Init_FrankaRobotState_last_motion_errors(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  ::franka_msgs::msg::FrankaRobotState last_motion_errors(::franka_msgs::msg::FrankaRobotState::_last_motion_errors_type arg)
  {
    msg_.last_motion_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_current_errors
{
public:
  explicit Init_FrankaRobotState_current_errors(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_last_motion_errors current_errors(::franka_msgs::msg::FrankaRobotState::_current_errors_type arg)
  {
    msg_.current_errors = std::move(arg);
    return Init_FrankaRobotState_last_motion_errors(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_robot_mode
{
public:
  explicit Init_FrankaRobotState_robot_mode(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_current_errors robot_mode(::franka_msgs::msg::FrankaRobotState::_robot_mode_type arg)
  {
    msg_.robot_mode = std::move(arg);
    return Init_FrankaRobotState_current_errors(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_control_command_success_rate
{
public:
  explicit Init_FrankaRobotState_control_command_success_rate(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_robot_mode control_command_success_rate(::franka_msgs::msg::FrankaRobotState::_control_command_success_rate_type arg)
  {
    msg_.control_command_success_rate = std::move(arg);
    return Init_FrankaRobotState_robot_mode(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_time
{
public:
  explicit Init_FrankaRobotState_time(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_control_command_success_rate time(::franka_msgs::msg::FrankaRobotState::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_FrankaRobotState_control_command_success_rate(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_ddp_ee_c
{
public:
  explicit Init_FrankaRobotState_o_ddp_ee_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_time o_ddp_ee_c(::franka_msgs::msg::FrankaRobotState::_o_ddp_ee_c_type arg)
  {
    msg_.o_ddp_ee_c = std::move(arg);
    return Init_FrankaRobotState_time(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_dp_ee_c
{
public:
  explicit Init_FrankaRobotState_o_dp_ee_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_ddp_ee_c o_dp_ee_c(::franka_msgs::msg::FrankaRobotState::_o_dp_ee_c_type arg)
  {
    msg_.o_dp_ee_c = std::move(arg);
    return Init_FrankaRobotState_o_ddp_ee_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_dp_ee_d
{
public:
  explicit Init_FrankaRobotState_o_dp_ee_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_dp_ee_c o_dp_ee_d(::franka_msgs::msg::FrankaRobotState::_o_dp_ee_d_type arg)
  {
    msg_.o_dp_ee_d = std::move(arg);
    return Init_FrankaRobotState_o_dp_ee_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_ee_t_k
{
public:
  explicit Init_FrankaRobotState_ee_t_k(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_dp_ee_d ee_t_k(::franka_msgs::msg::FrankaRobotState::_ee_t_k_type arg)
  {
    msg_.ee_t_k = std::move(arg);
    return Init_FrankaRobotState_o_dp_ee_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_f_t_ee
{
public:
  explicit Init_FrankaRobotState_f_t_ee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_ee_t_k f_t_ee(::franka_msgs::msg::FrankaRobotState::_f_t_ee_type arg)
  {
    msg_.f_t_ee = std::move(arg);
    return Init_FrankaRobotState_ee_t_k(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_t_ee_c
{
public:
  explicit Init_FrankaRobotState_o_t_ee_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_f_t_ee o_t_ee_c(::franka_msgs::msg::FrankaRobotState::_o_t_ee_c_type arg)
  {
    msg_.o_t_ee_c = std::move(arg);
    return Init_FrankaRobotState_f_t_ee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_t_ee_d
{
public:
  explicit Init_FrankaRobotState_o_t_ee_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_t_ee_c o_t_ee_d(::franka_msgs::msg::FrankaRobotState::_o_t_ee_d_type arg)
  {
    msg_.o_t_ee_d = std::move(arg);
    return Init_FrankaRobotState_o_t_ee_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_t_ee
{
public:
  explicit Init_FrankaRobotState_o_t_ee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_t_ee_d o_t_ee(::franka_msgs::msg::FrankaRobotState::_o_t_ee_type arg)
  {
    msg_.o_t_ee = std::move(arg);
    return Init_FrankaRobotState_o_t_ee_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_inertia_total
{
public:
  explicit Init_FrankaRobotState_inertia_total(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_t_ee inertia_total(::franka_msgs::msg::FrankaRobotState::_inertia_total_type arg)
  {
    msg_.inertia_total = std::move(arg);
    return Init_FrankaRobotState_o_t_ee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_inertia_load
{
public:
  explicit Init_FrankaRobotState_inertia_load(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_inertia_total inertia_load(::franka_msgs::msg::FrankaRobotState::_inertia_load_type arg)
  {
    msg_.inertia_load = std::move(arg);
    return Init_FrankaRobotState_inertia_total(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_inertia_ee
{
public:
  explicit Init_FrankaRobotState_inertia_ee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_inertia_load inertia_ee(::franka_msgs::msg::FrankaRobotState::_inertia_ee_type arg)
  {
    msg_.inertia_ee = std::move(arg);
    return Init_FrankaRobotState_inertia_load(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_f_ext_hat_k
{
public:
  explicit Init_FrankaRobotState_o_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_inertia_ee o_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState::_o_f_ext_hat_k_type arg)
  {
    msg_.o_f_ext_hat_k = std::move(arg);
    return Init_FrankaRobotState_inertia_ee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_k_f_ext_hat_k
{
public:
  explicit Init_FrankaRobotState_k_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_f_ext_hat_k k_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState::_k_f_ext_hat_k_type arg)
  {
    msg_.k_f_ext_hat_k = std::move(arg);
    return Init_FrankaRobotState_o_f_ext_hat_k(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_elbow
{
public:
  explicit Init_FrankaRobotState_elbow(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_k_f_ext_hat_k elbow(::franka_msgs::msg::FrankaRobotState::_elbow_type arg)
  {
    msg_.elbow = std::move(arg);
    return Init_FrankaRobotState_k_f_ext_hat_k(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_tau_ext_hat_filtered
{
public:
  explicit Init_FrankaRobotState_tau_ext_hat_filtered(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_elbow tau_ext_hat_filtered(::franka_msgs::msg::FrankaRobotState::_tau_ext_hat_filtered_type arg)
  {
    msg_.tau_ext_hat_filtered = std::move(arg);
    return Init_FrankaRobotState_elbow(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_dtau_j
{
public:
  explicit Init_FrankaRobotState_dtau_j(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_tau_ext_hat_filtered dtau_j(::franka_msgs::msg::FrankaRobotState::_dtau_j_type arg)
  {
    msg_.dtau_j = std::move(arg);
    return Init_FrankaRobotState_tau_ext_hat_filtered(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_ddq_d
{
public:
  explicit Init_FrankaRobotState_ddq_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_dtau_j ddq_d(::franka_msgs::msg::FrankaRobotState::_ddq_d_type arg)
  {
    msg_.ddq_d = std::move(arg);
    return Init_FrankaRobotState_dtau_j(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_measured_joint_motor_state
{
public:
  explicit Init_FrankaRobotState_measured_joint_motor_state(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_ddq_d measured_joint_motor_state(::franka_msgs::msg::FrankaRobotState::_measured_joint_motor_state_type arg)
  {
    msg_.measured_joint_motor_state = std::move(arg);
    return Init_FrankaRobotState_ddq_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_desired_joint_state
{
public:
  explicit Init_FrankaRobotState_desired_joint_state(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_measured_joint_motor_state desired_joint_state(::franka_msgs::msg::FrankaRobotState::_desired_joint_state_type arg)
  {
    msg_.desired_joint_state = std::move(arg);
    return Init_FrankaRobotState_measured_joint_motor_state(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_measured_joint_state
{
public:
  explicit Init_FrankaRobotState_measured_joint_state(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_desired_joint_state measured_joint_state(::franka_msgs::msg::FrankaRobotState::_measured_joint_state_type arg)
  {
    msg_.measured_joint_state = std::move(arg);
    return Init_FrankaRobotState_desired_joint_state(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_collision_indicators
{
public:
  explicit Init_FrankaRobotState_collision_indicators(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_measured_joint_state collision_indicators(::franka_msgs::msg::FrankaRobotState::_collision_indicators_type arg)
  {
    msg_.collision_indicators = std::move(arg);
    return Init_FrankaRobotState_measured_joint_state(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_header
{
public:
  Init_FrankaRobotState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrankaRobotState_collision_indicators header(::franka_msgs::msg::FrankaRobotState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FrankaRobotState_collision_indicators(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::msg::FrankaRobotState>()
{
  return franka_msgs::msg::builder::Init_FrankaRobotState_header();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__BUILDER_HPP_
