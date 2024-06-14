// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_POINT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/cartesian_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianPoint_acceleration
{
public:
  explicit Init_CartesianPoint_acceleration(::moveit_msgs::msg::CartesianPoint & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::CartesianPoint acceleration(::moveit_msgs::msg::CartesianPoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianPoint msg_;
};

class Init_CartesianPoint_velocity
{
public:
  explicit Init_CartesianPoint_velocity(::moveit_msgs::msg::CartesianPoint & msg)
  : msg_(msg)
  {}
  Init_CartesianPoint_acceleration velocity(::moveit_msgs::msg::CartesianPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_CartesianPoint_acceleration(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianPoint msg_;
};

class Init_CartesianPoint_pose
{
public:
  Init_CartesianPoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianPoint_velocity pose(::moveit_msgs::msg::CartesianPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CartesianPoint_velocity(msg_);
  }

private:
  ::moveit_msgs::msg::CartesianPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::CartesianPoint>()
{
  return moveit_msgs::msg::builder::Init_CartesianPoint_pose();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_POINT__BUILDER_HPP_
