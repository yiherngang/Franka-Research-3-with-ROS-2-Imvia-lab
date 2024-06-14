// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/planner_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PlannerParams_descriptions
{
public:
  explicit Init_PlannerParams_descriptions(::moveit_msgs::msg::PlannerParams & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PlannerParams descriptions(::moveit_msgs::msg::PlannerParams::_descriptions_type arg)
  {
    msg_.descriptions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PlannerParams msg_;
};

class Init_PlannerParams_values
{
public:
  explicit Init_PlannerParams_values(::moveit_msgs::msg::PlannerParams & msg)
  : msg_(msg)
  {}
  Init_PlannerParams_descriptions values(::moveit_msgs::msg::PlannerParams::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_PlannerParams_descriptions(msg_);
  }

private:
  ::moveit_msgs::msg::PlannerParams msg_;
};

class Init_PlannerParams_keys
{
public:
  Init_PlannerParams_keys()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerParams_values keys(::moveit_msgs::msg::PlannerParams::_keys_type arg)
  {
    msg_.keys = std::move(arg);
    return Init_PlannerParams_values(msg_);
  }

private:
  ::moveit_msgs::msg::PlannerParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PlannerParams>()
{
  return moveit_msgs::msg::builder::Init_PlannerParams_keys();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__BUILDER_HPP_
