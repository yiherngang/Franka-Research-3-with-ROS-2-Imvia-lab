// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/motion_sequence_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionSequenceItem_blend_radius
{
public:
  explicit Init_MotionSequenceItem_blend_radius(::moveit_msgs::msg::MotionSequenceItem & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::MotionSequenceItem blend_radius(::moveit_msgs::msg::MotionSequenceItem::_blend_radius_type arg)
  {
    msg_.blend_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::MotionSequenceItem msg_;
};

class Init_MotionSequenceItem_req
{
public:
  Init_MotionSequenceItem_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequenceItem_blend_radius req(::moveit_msgs::msg::MotionSequenceItem::_req_type arg)
  {
    msg_.req = std::move(arg);
    return Init_MotionSequenceItem_blend_radius(msg_);
  }

private:
  ::moveit_msgs::msg::MotionSequenceItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::MotionSequenceItem>()
{
  return moveit_msgs::msg::builder::Init_MotionSequenceItem_req();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__BUILDER_HPP_
