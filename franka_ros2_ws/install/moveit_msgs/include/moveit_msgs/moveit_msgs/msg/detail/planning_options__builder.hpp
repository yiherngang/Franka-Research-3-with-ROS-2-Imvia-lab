// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/planning_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningOptions_replan_delay
{
public:
  explicit Init_PlanningOptions_replan_delay(::moveit_msgs::msg::PlanningOptions & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PlanningOptions replan_delay(::moveit_msgs::msg::PlanningOptions::_replan_delay_type arg)
  {
    msg_.replan_delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

class Init_PlanningOptions_replan_attempts
{
public:
  explicit Init_PlanningOptions_replan_attempts(::moveit_msgs::msg::PlanningOptions & msg)
  : msg_(msg)
  {}
  Init_PlanningOptions_replan_delay replan_attempts(::moveit_msgs::msg::PlanningOptions::_replan_attempts_type arg)
  {
    msg_.replan_attempts = std::move(arg);
    return Init_PlanningOptions_replan_delay(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

class Init_PlanningOptions_replan
{
public:
  explicit Init_PlanningOptions_replan(::moveit_msgs::msg::PlanningOptions & msg)
  : msg_(msg)
  {}
  Init_PlanningOptions_replan_attempts replan(::moveit_msgs::msg::PlanningOptions::_replan_type arg)
  {
    msg_.replan = std::move(arg);
    return Init_PlanningOptions_replan_attempts(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

class Init_PlanningOptions_max_safe_execution_cost
{
public:
  explicit Init_PlanningOptions_max_safe_execution_cost(::moveit_msgs::msg::PlanningOptions & msg)
  : msg_(msg)
  {}
  Init_PlanningOptions_replan max_safe_execution_cost(::moveit_msgs::msg::PlanningOptions::_max_safe_execution_cost_type arg)
  {
    msg_.max_safe_execution_cost = std::move(arg);
    return Init_PlanningOptions_replan(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

class Init_PlanningOptions_look_around_attempts
{
public:
  explicit Init_PlanningOptions_look_around_attempts(::moveit_msgs::msg::PlanningOptions & msg)
  : msg_(msg)
  {}
  Init_PlanningOptions_max_safe_execution_cost look_around_attempts(::moveit_msgs::msg::PlanningOptions::_look_around_attempts_type arg)
  {
    msg_.look_around_attempts = std::move(arg);
    return Init_PlanningOptions_max_safe_execution_cost(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

class Init_PlanningOptions_look_around
{
public:
  explicit Init_PlanningOptions_look_around(::moveit_msgs::msg::PlanningOptions & msg)
  : msg_(msg)
  {}
  Init_PlanningOptions_look_around_attempts look_around(::moveit_msgs::msg::PlanningOptions::_look_around_type arg)
  {
    msg_.look_around = std::move(arg);
    return Init_PlanningOptions_look_around_attempts(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

class Init_PlanningOptions_plan_only
{
public:
  explicit Init_PlanningOptions_plan_only(::moveit_msgs::msg::PlanningOptions & msg)
  : msg_(msg)
  {}
  Init_PlanningOptions_look_around plan_only(::moveit_msgs::msg::PlanningOptions::_plan_only_type arg)
  {
    msg_.plan_only = std::move(arg);
    return Init_PlanningOptions_look_around(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

class Init_PlanningOptions_planning_scene_diff
{
public:
  Init_PlanningOptions_planning_scene_diff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningOptions_plan_only planning_scene_diff(::moveit_msgs::msg::PlanningOptions::_planning_scene_diff_type arg)
  {
    msg_.planning_scene_diff = std::move(arg);
    return Init_PlanningOptions_plan_only(msg_);
  }

private:
  ::moveit_msgs::msg::PlanningOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PlanningOptions>()
{
  return moveit_msgs::msg::builder::Init_PlanningOptions_planning_scene_diff();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__BUILDER_HPP_
