// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/CostSource.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/cost_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_CostSource_aabb_max
{
public:
  explicit Init_CostSource_aabb_max(::moveit_msgs::msg::CostSource & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::CostSource aabb_max(::moveit_msgs::msg::CostSource::_aabb_max_type arg)
  {
    msg_.aabb_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::CostSource msg_;
};

class Init_CostSource_aabb_min
{
public:
  explicit Init_CostSource_aabb_min(::moveit_msgs::msg::CostSource & msg)
  : msg_(msg)
  {}
  Init_CostSource_aabb_max aabb_min(::moveit_msgs::msg::CostSource::_aabb_min_type arg)
  {
    msg_.aabb_min = std::move(arg);
    return Init_CostSource_aabb_max(msg_);
  }

private:
  ::moveit_msgs::msg::CostSource msg_;
};

class Init_CostSource_cost_density
{
public:
  Init_CostSource_cost_density()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CostSource_aabb_min cost_density(::moveit_msgs::msg::CostSource::_cost_density_type arg)
  {
    msg_.cost_density = std::move(arg);
    return Init_CostSource_aabb_min(msg_);
  }

private:
  ::moveit_msgs::msg::CostSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::CostSource>()
{
  return moveit_msgs::msg::builder::Init_CostSource_cost_density();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__BUILDER_HPP_
