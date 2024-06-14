// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/MotionPlanResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/motion_plan_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionPlanResponse_error_code
{
public:
  explicit Init_MotionPlanResponse_error_code(::moveit_msgs::msg::MotionPlanResponse & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::MotionPlanResponse error_code(::moveit_msgs::msg::MotionPlanResponse::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanResponse msg_;
};

class Init_MotionPlanResponse_planning_time
{
public:
  explicit Init_MotionPlanResponse_planning_time(::moveit_msgs::msg::MotionPlanResponse & msg)
  : msg_(msg)
  {}
  Init_MotionPlanResponse_error_code planning_time(::moveit_msgs::msg::MotionPlanResponse::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return Init_MotionPlanResponse_error_code(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanResponse msg_;
};

class Init_MotionPlanResponse_trajectory
{
public:
  explicit Init_MotionPlanResponse_trajectory(::moveit_msgs::msg::MotionPlanResponse & msg)
  : msg_(msg)
  {}
  Init_MotionPlanResponse_planning_time trajectory(::moveit_msgs::msg::MotionPlanResponse::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_MotionPlanResponse_planning_time(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanResponse msg_;
};

class Init_MotionPlanResponse_group_name
{
public:
  explicit Init_MotionPlanResponse_group_name(::moveit_msgs::msg::MotionPlanResponse & msg)
  : msg_(msg)
  {}
  Init_MotionPlanResponse_trajectory group_name(::moveit_msgs::msg::MotionPlanResponse::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_MotionPlanResponse_trajectory(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanResponse msg_;
};

class Init_MotionPlanResponse_trajectory_start
{
public:
  Init_MotionPlanResponse_trajectory_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionPlanResponse_group_name trajectory_start(::moveit_msgs::msg::MotionPlanResponse::_trajectory_start_type arg)
  {
    msg_.trajectory_start = std::move(arg);
    return Init_MotionPlanResponse_group_name(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::MotionPlanResponse>()
{
  return moveit_msgs::msg::builder::Init_MotionPlanResponse_trajectory_start();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__BUILDER_HPP_
