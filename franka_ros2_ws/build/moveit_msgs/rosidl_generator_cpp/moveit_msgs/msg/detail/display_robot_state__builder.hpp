// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/display_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_DisplayRobotState_hide
{
public:
  explicit Init_DisplayRobotState_hide(::moveit_msgs::msg::DisplayRobotState & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::DisplayRobotState hide(::moveit_msgs::msg::DisplayRobotState::_hide_type arg)
  {
    msg_.hide = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::DisplayRobotState msg_;
};

class Init_DisplayRobotState_highlight_links
{
public:
  explicit Init_DisplayRobotState_highlight_links(::moveit_msgs::msg::DisplayRobotState & msg)
  : msg_(msg)
  {}
  Init_DisplayRobotState_hide highlight_links(::moveit_msgs::msg::DisplayRobotState::_highlight_links_type arg)
  {
    msg_.highlight_links = std::move(arg);
    return Init_DisplayRobotState_hide(msg_);
  }

private:
  ::moveit_msgs::msg::DisplayRobotState msg_;
};

class Init_DisplayRobotState_state
{
public:
  Init_DisplayRobotState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DisplayRobotState_highlight_links state(::moveit_msgs::msg::DisplayRobotState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_DisplayRobotState_highlight_links(msg_);
  }

private:
  ::moveit_msgs::msg::DisplayRobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::DisplayRobotState>()
{
  return moveit_msgs::msg::builder::Init_DisplayRobotState_state();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__BUILDER_HPP_
