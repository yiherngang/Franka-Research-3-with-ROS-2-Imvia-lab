// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/MotionSequenceResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/motion_sequence_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionSequenceResponse_planning_time
{
public:
  explicit Init_MotionSequenceResponse_planning_time(::moveit_msgs::msg::MotionSequenceResponse & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::MotionSequenceResponse planning_time(::moveit_msgs::msg::MotionSequenceResponse::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::MotionSequenceResponse msg_;
};

class Init_MotionSequenceResponse_planned_trajectories
{
public:
  explicit Init_MotionSequenceResponse_planned_trajectories(::moveit_msgs::msg::MotionSequenceResponse & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceResponse_planning_time planned_trajectories(::moveit_msgs::msg::MotionSequenceResponse::_planned_trajectories_type arg)
  {
    msg_.planned_trajectories = std::move(arg);
    return Init_MotionSequenceResponse_planning_time(msg_);
  }

private:
  ::moveit_msgs::msg::MotionSequenceResponse msg_;
};

class Init_MotionSequenceResponse_sequence_start
{
public:
  explicit Init_MotionSequenceResponse_sequence_start(::moveit_msgs::msg::MotionSequenceResponse & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceResponse_planned_trajectories sequence_start(::moveit_msgs::msg::MotionSequenceResponse::_sequence_start_type arg)
  {
    msg_.sequence_start = std::move(arg);
    return Init_MotionSequenceResponse_planned_trajectories(msg_);
  }

private:
  ::moveit_msgs::msg::MotionSequenceResponse msg_;
};

class Init_MotionSequenceResponse_error_code
{
public:
  Init_MotionSequenceResponse_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequenceResponse_sequence_start error_code(::moveit_msgs::msg::MotionSequenceResponse::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_MotionSequenceResponse_sequence_start(msg_);
  }

private:
  ::moveit_msgs::msg::MotionSequenceResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::MotionSequenceResponse>()
{
  return moveit_msgs::msg::builder::Init_MotionSequenceResponse_error_code();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__BUILDER_HPP_
