// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/LinkPadding.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/link_padding__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkPadding_padding
{
public:
  explicit Init_LinkPadding_padding(::moveit_msgs::msg::LinkPadding & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::LinkPadding padding(::moveit_msgs::msg::LinkPadding::_padding_type arg)
  {
    msg_.padding = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::LinkPadding msg_;
};

class Init_LinkPadding_link_name
{
public:
  Init_LinkPadding_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkPadding_padding link_name(::moveit_msgs::msg::LinkPadding::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_LinkPadding_padding(msg_);
  }

private:
  ::moveit_msgs::msg::LinkPadding msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::LinkPadding>()
{
  return moveit_msgs::msg::builder::Init_LinkPadding_link_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__BUILDER_HPP_
