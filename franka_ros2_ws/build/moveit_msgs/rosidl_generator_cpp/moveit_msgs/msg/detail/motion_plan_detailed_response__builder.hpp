// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/MotionPlanDetailedResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/motion_plan_detailed_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionPlanDetailedResponse_error_code
{
public:
  explicit Init_MotionPlanDetailedResponse_error_code(::moveit_msgs::msg::MotionPlanDetailedResponse & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::MotionPlanDetailedResponse error_code(::moveit_msgs::msg::MotionPlanDetailedResponse::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanDetailedResponse msg_;
};

class Init_MotionPlanDetailedResponse_processing_time
{
public:
  explicit Init_MotionPlanDetailedResponse_processing_time(::moveit_msgs::msg::MotionPlanDetailedResponse & msg)
  : msg_(msg)
  {}
  Init_MotionPlanDetailedResponse_error_code processing_time(::moveit_msgs::msg::MotionPlanDetailedResponse::_processing_time_type arg)
  {
    msg_.processing_time = std::move(arg);
    return Init_MotionPlanDetailedResponse_error_code(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanDetailedResponse msg_;
};

class Init_MotionPlanDetailedResponse_description
{
public:
  explicit Init_MotionPlanDetailedResponse_description(::moveit_msgs::msg::MotionPlanDetailedResponse & msg)
  : msg_(msg)
  {}
  Init_MotionPlanDetailedResponse_processing_time description(::moveit_msgs::msg::MotionPlanDetailedResponse::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_MotionPlanDetailedResponse_processing_time(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanDetailedResponse msg_;
};

class Init_MotionPlanDetailedResponse_trajectory
{
public:
  explicit Init_MotionPlanDetailedResponse_trajectory(::moveit_msgs::msg::MotionPlanDetailedResponse & msg)
  : msg_(msg)
  {}
  Init_MotionPlanDetailedResponse_description trajectory(::moveit_msgs::msg::MotionPlanDetailedResponse::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_MotionPlanDetailedResponse_description(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanDetailedResponse msg_;
};

class Init_MotionPlanDetailedResponse_group_name
{
public:
  explicit Init_MotionPlanDetailedResponse_group_name(::moveit_msgs::msg::MotionPlanDetailedResponse & msg)
  : msg_(msg)
  {}
  Init_MotionPlanDetailedResponse_trajectory group_name(::moveit_msgs::msg::MotionPlanDetailedResponse::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_MotionPlanDetailedResponse_trajectory(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanDetailedResponse msg_;
};

class Init_MotionPlanDetailedResponse_trajectory_start
{
public:
  Init_MotionPlanDetailedResponse_trajectory_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionPlanDetailedResponse_group_name trajectory_start(::moveit_msgs::msg::MotionPlanDetailedResponse::_trajectory_start_type arg)
  {
    msg_.trajectory_start = std::move(arg);
    return Init_MotionPlanDetailedResponse_group_name(msg_);
  }

private:
  ::moveit_msgs::msg::MotionPlanDetailedResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::MotionPlanDetailedResponse>()
{
  return moveit_msgs::msg::builder::Init_MotionPlanDetailedResponse_trajectory_start();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__BUILDER_HPP_
