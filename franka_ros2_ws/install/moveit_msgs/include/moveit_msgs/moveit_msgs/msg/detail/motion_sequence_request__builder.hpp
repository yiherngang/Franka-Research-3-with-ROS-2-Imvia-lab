// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/MotionSequenceRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/motion_sequence_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionSequenceRequest_items
{
public:
  Init_MotionSequenceRequest_items()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::msg::MotionSequenceRequest items(::moveit_msgs::msg::MotionSequenceRequest::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::MotionSequenceRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::MotionSequenceRequest>()
{
  return moveit_msgs::msg::builder::Init_MotionSequenceRequest_items();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__BUILDER_HPP_
