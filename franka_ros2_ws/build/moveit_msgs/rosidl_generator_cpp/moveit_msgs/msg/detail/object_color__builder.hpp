// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/object_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectColor_color
{
public:
  explicit Init_ObjectColor_color(::moveit_msgs::msg::ObjectColor & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::ObjectColor color(::moveit_msgs::msg::ObjectColor::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::ObjectColor msg_;
};

class Init_ObjectColor_id
{
public:
  Init_ObjectColor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectColor_color id(::moveit_msgs::msg::ObjectColor::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObjectColor_color(msg_);
  }

private:
  ::moveit_msgs::msg::ObjectColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::ObjectColor>()
{
  return moveit_msgs::msg::builder::Init_ObjectColor_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__BUILDER_HPP_
