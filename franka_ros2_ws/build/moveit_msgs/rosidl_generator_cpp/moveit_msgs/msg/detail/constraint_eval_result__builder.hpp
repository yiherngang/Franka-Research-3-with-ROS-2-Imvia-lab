// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/ConstraintEvalResult.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONSTRAINT_EVAL_RESULT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONSTRAINT_EVAL_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/constraint_eval_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstraintEvalResult_distance
{
public:
  explicit Init_ConstraintEvalResult_distance(::moveit_msgs::msg::ConstraintEvalResult & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::ConstraintEvalResult distance(::moveit_msgs::msg::ConstraintEvalResult::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::ConstraintEvalResult msg_;
};

class Init_ConstraintEvalResult_result
{
public:
  Init_ConstraintEvalResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintEvalResult_distance result(::moveit_msgs::msg::ConstraintEvalResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_ConstraintEvalResult_distance(msg_);
  }

private:
  ::moveit_msgs::msg::ConstraintEvalResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::ConstraintEvalResult>()
{
  return moveit_msgs::msg::builder::Init_ConstraintEvalResult_result();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONSTRAINT_EVAL_RESULT__BUILDER_HPP_
