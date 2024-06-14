// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/LinkScale.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/link_scale__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkScale_scale
{
public:
  explicit Init_LinkScale_scale(::moveit_msgs::msg::LinkScale & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::LinkScale scale(::moveit_msgs::msg::LinkScale::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::LinkScale msg_;
};

class Init_LinkScale_link_name
{
public:
  Init_LinkScale_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkScale_scale link_name(::moveit_msgs::msg::LinkScale::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_LinkScale_scale(msg_);
  }

private:
  ::moveit_msgs::msg::LinkScale msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::LinkScale>()
{
  return moveit_msgs::msg::builder::Init_LinkScale_link_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__BUILDER_HPP_
