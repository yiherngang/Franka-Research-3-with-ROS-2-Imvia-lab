// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/workspace_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_WorkspaceParameters_max_corner
{
public:
  explicit Init_WorkspaceParameters_max_corner(::moveit_msgs::msg::WorkspaceParameters & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::WorkspaceParameters max_corner(::moveit_msgs::msg::WorkspaceParameters::_max_corner_type arg)
  {
    msg_.max_corner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::WorkspaceParameters msg_;
};

class Init_WorkspaceParameters_min_corner
{
public:
  explicit Init_WorkspaceParameters_min_corner(::moveit_msgs::msg::WorkspaceParameters & msg)
  : msg_(msg)
  {}
  Init_WorkspaceParameters_max_corner min_corner(::moveit_msgs::msg::WorkspaceParameters::_min_corner_type arg)
  {
    msg_.min_corner = std::move(arg);
    return Init_WorkspaceParameters_max_corner(msg_);
  }

private:
  ::moveit_msgs::msg::WorkspaceParameters msg_;
};

class Init_WorkspaceParameters_header
{
public:
  Init_WorkspaceParameters_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkspaceParameters_min_corner header(::moveit_msgs::msg::WorkspaceParameters::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WorkspaceParameters_min_corner(msg_);
  }

private:
  ::moveit_msgs::msg::WorkspaceParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::WorkspaceParameters>()
{
  return moveit_msgs::msg::builder::Init_WorkspaceParameters_header();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__BUILDER_HPP_
