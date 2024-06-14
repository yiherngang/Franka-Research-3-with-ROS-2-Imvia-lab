// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/motion_plan_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionPlanRequest_max_cartesian_speed
{
public:
  explicit Init_MotionPlanRequest_max_cartesian_speed(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::MotionPlanRequest max_cartesian_speed(::moveit_msgs::msg::MotionPlanRequest::_max_cartesian_speed_type arg)
  {
    msg_.max_cartesian_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_cartesian_speed_end_effector_link
{
public:
  explicit Init_MotionPlanRequest_cartesian_speed_end_effector_link(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_max_cartesian_speed cartesian_speed_end_effector_link(::moveit_msgs::msg::MotionPlanRequest::_cartesian_speed_end_effector_link_type arg)
  {
    msg_.cartesian_speed_end_effector_link = std::move(arg);
    return Init_MotionPlanRequest_max_cartesian_speed(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_max_acceleration_scaling_factor
{
public:
  explicit Init_MotionPlanRequest_max_acceleration_scaling_factor(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_cartesian_speed_end_effector_link max_acceleration_scaling_factor(::moveit_msgs::msg::MotionPlanRequest::_max_acceleration_scaling_factor_type arg)
  {
    msg_.max_acceleration_scaling_factor = std::move(arg);
    return Init_MotionPlanRequest_cartesian_speed_end_effector_link(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_max_velocity_scaling_factor
{
public:
  explicit Init_MotionPlanRequest_max_velocity_scaling_factor(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_max_acceleration_scaling_factor max_velocity_scaling_factor(::moveit_msgs::msg::MotionPlanRequest::_max_velocity_scaling_factor_type arg)
  {
    msg_.max_velocity_scaling_factor = std::move(arg);
    return Init_MotionPlanRequest_max_acceleration_scaling_factor(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_allowed_planning_time
{
public:
  explicit Init_MotionPlanRequest_allowed_planning_time(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_max_velocity_scaling_factor allowed_planning_time(::moveit_msgs::msg::MotionPlanRequest::_allowed_planning_time_type arg)
  {
    msg_.allowed_planning_time = std::move(arg);
    return Init_MotionPlanRequest_max_velocity_scaling_factor(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_num_planning_attempts
{
public:
  explicit Init_MotionPlanRequest_num_planning_attempts(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_allowed_planning_time num_planning_attempts(::moveit_msgs::msg::MotionPlanRequest::_num_planning_attempts_type arg)
  {
    msg_.num_planning_attempts = std::move(arg);
    return Init_MotionPlanRequest_allowed_planning_time(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_group_name
{
public:
  explicit Init_MotionPlanRequest_group_name(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_num_planning_attempts group_name(::moveit_msgs::msg::MotionPlanRequest::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_MotionPlanRequest_num_planning_attempts(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_planner_id
{
public:
  explicit Init_MotionPlanRequest_planner_id(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_group_name planner_id(::moveit_msgs::msg::MotionPlanRequest::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return Init_MotionPlanRequest_group_name(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_pipeline_id
{
public:
  explicit Init_MotionPlanRequest_pipeline_id(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_planner_id pipeline_id(::moveit_msgs::msg::MotionPlanRequest::_pipeline_id_type arg)
  {
    msg_.pipeline_id = std::move(arg);
    return Init_MotionPlanRequest_planner_id(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_reference_trajectories
{
public:
  explicit Init_MotionPlanRequest_reference_trajectories(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_pipeline_id reference_trajectories(::moveit_msgs::msg::MotionPlanRequest::_reference_trajectories_type arg)
  {
    msg_.reference_trajectories = std::move(arg);
    return Init_MotionPlanRequest_pipeline_id(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_trajectory_constraints
{
public:
  explicit Init_MotionPlanRequest_trajectory_constraints(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_reference_trajectories trajectory_constraints(::moveit_msgs::msg::MotionPlanRequest::_trajectory_constraints_type arg)
  {
    msg_.trajectory_constraints = std::move(arg);
    return Init_MotionPlanRequest_reference_trajectories(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_path_constraints
{
public:
  explicit Init_MotionPlanRequest_path_constraints(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_trajectory_constraints path_constraints(::moveit_msgs::msg::MotionPlanRequest::_path_constraints_type arg)
  {
    msg_.path_constraints = std::move(arg);
    return Init_MotionPlanRequest_trajectory_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_goal_constraints
{
public:
  explicit Init_MotionPlanRequest_goal_constraints(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_path_constraints goal_constraints(::moveit_msgs::msg::MotionPlanRequest::_goal_constraints_type arg)
  {
    msg_.goal_constraints = std::move(arg);
    return Init_MotionPlanRequest_path_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_start_state
{
public:
  explicit Init_MotionPlanRequest_start_state(::moveit_msgs::msg::MotionPlanRequest & msg)
  : msg_(msg)
  {}
  Init_MotionPlanRequest_goal_constraints start_state(::moveit_msgs::msg::MotionPlanRequest::_start_state_type arg)
  {
    msg_.start_state = std::move(arg);
    return Init_MotionPlanRequest_goal_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

class Init_MotionPlanRequest_workspace_parameters
{
public:
  Init_MotionPlanRequest_workspace_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionPlanRequest_start_state workspace_parameters(::moveit_msgs::msg::MotionPlanRequest::_workspace_parameters_type arg)
  {
    msg_.workspace_parameters = std::move(arg);
    return Init_MotionPlanRequest_start_state(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::MotionPlanRequest>()
{
  return moveit_msgs::msg::builder::Init_MotionPlanRequest_workspace_parameters();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__BUILDER_HPP_
