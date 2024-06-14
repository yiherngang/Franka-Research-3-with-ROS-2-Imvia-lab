// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__BUILDER_HPP_
#define FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/msg/detail/grasp_epsilon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspEpsilon_outer
{
public:
  explicit Init_GraspEpsilon_outer(::franka_msgs::msg::GraspEpsilon & msg)
  : msg_(msg)
  {}
  ::franka_msgs::msg::GraspEpsilon outer(::franka_msgs::msg::GraspEpsilon::_outer_type arg)
  {
    msg_.outer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::msg::GraspEpsilon msg_;
};

class Init_GraspEpsilon_inner
{
public:
  Init_GraspEpsilon_inner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspEpsilon_outer inner(::franka_msgs::msg::GraspEpsilon::_inner_type arg)
  {
    msg_.inner = std::move(arg);
    return Init_GraspEpsilon_outer(msg_);
  }

private:
  ::franka_msgs::msg::GraspEpsilon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::msg::GraspEpsilon>()
{
  return franka_msgs::msg::builder::Init_GraspEpsilon_inner();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__BUILDER_HPP_
