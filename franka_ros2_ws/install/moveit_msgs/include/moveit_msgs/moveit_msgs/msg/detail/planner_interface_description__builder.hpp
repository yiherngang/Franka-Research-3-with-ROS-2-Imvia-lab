// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PlannerInterfaceDescription.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/planner_interface_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PlannerInterfaceDescription_planner_ids
{
public:
  explicit Init_PlannerInterfaceDescription_planner_ids(::moveit_msgs::msg::PlannerInterfaceDescription & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PlannerInterfaceDescription planner_ids(::moveit_msgs::msg::PlannerInterfaceDescription::_planner_ids_type arg)
  {
    msg_.planner_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PlannerInterfaceDescription msg_;
};

class Init_PlannerInterfaceDescription_pipeline_id
{
public:
  explicit Init_PlannerInterfaceDescription_pipeline_id(::moveit_msgs::msg::PlannerInterfaceDescription & msg)
  : msg_(msg)
  {}
  Init_PlannerInterfaceDescription_planner_ids pipeline_id(::moveit_msgs::msg::PlannerInterfaceDescription::_pipeline_id_type arg)
  {
    msg_.pipeline_id = std::move(arg);
    return Init_PlannerInterfaceDescription_planner_ids(msg_);
  }

private:
  ::moveit_msgs::msg::PlannerInterfaceDescription msg_;
};

class Init_PlannerInterfaceDescription_name
{
public:
  Init_PlannerInterfaceDescription_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerInterfaceDescription_pipeline_id name(::moveit_msgs::msg::PlannerInterfaceDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PlannerInterfaceDescription_pipeline_id(msg_);
  }

private:
  ::moveit_msgs::msg::PlannerInterfaceDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PlannerInterfaceDescription>()
{
  return moveit_msgs::msg::builder::Init_PlannerInterfaceDescription_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__BUILDER_HPP_
