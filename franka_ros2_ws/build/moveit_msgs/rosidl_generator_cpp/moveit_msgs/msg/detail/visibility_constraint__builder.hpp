// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/visibility_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_VisibilityConstraint_weight
{
public:
  explicit Init_VisibilityConstraint_weight(::moveit_msgs::msg::VisibilityConstraint & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::VisibilityConstraint weight(::moveit_msgs::msg::VisibilityConstraint::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

class Init_VisibilityConstraint_sensor_view_direction
{
public:
  explicit Init_VisibilityConstraint_sensor_view_direction(::moveit_msgs::msg::VisibilityConstraint & msg)
  : msg_(msg)
  {}
  Init_VisibilityConstraint_weight sensor_view_direction(::moveit_msgs::msg::VisibilityConstraint::_sensor_view_direction_type arg)
  {
    msg_.sensor_view_direction = std::move(arg);
    return Init_VisibilityConstraint_weight(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

class Init_VisibilityConstraint_max_range_angle
{
public:
  explicit Init_VisibilityConstraint_max_range_angle(::moveit_msgs::msg::VisibilityConstraint & msg)
  : msg_(msg)
  {}
  Init_VisibilityConstraint_sensor_view_direction max_range_angle(::moveit_msgs::msg::VisibilityConstraint::_max_range_angle_type arg)
  {
    msg_.max_range_angle = std::move(arg);
    return Init_VisibilityConstraint_sensor_view_direction(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

class Init_VisibilityConstraint_max_view_angle
{
public:
  explicit Init_VisibilityConstraint_max_view_angle(::moveit_msgs::msg::VisibilityConstraint & msg)
  : msg_(msg)
  {}
  Init_VisibilityConstraint_max_range_angle max_view_angle(::moveit_msgs::msg::VisibilityConstraint::_max_view_angle_type arg)
  {
    msg_.max_view_angle = std::move(arg);
    return Init_VisibilityConstraint_max_range_angle(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

class Init_VisibilityConstraint_sensor_pose
{
public:
  explicit Init_VisibilityConstraint_sensor_pose(::moveit_msgs::msg::VisibilityConstraint & msg)
  : msg_(msg)
  {}
  Init_VisibilityConstraint_max_view_angle sensor_pose(::moveit_msgs::msg::VisibilityConstraint::_sensor_pose_type arg)
  {
    msg_.sensor_pose = std::move(arg);
    return Init_VisibilityConstraint_max_view_angle(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

class Init_VisibilityConstraint_cone_sides
{
public:
  explicit Init_VisibilityConstraint_cone_sides(::moveit_msgs::msg::VisibilityConstraint & msg)
  : msg_(msg)
  {}
  Init_VisibilityConstraint_sensor_pose cone_sides(::moveit_msgs::msg::VisibilityConstraint::_cone_sides_type arg)
  {
    msg_.cone_sides = std::move(arg);
    return Init_VisibilityConstraint_sensor_pose(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

class Init_VisibilityConstraint_target_pose
{
public:
  explicit Init_VisibilityConstraint_target_pose(::moveit_msgs::msg::VisibilityConstraint & msg)
  : msg_(msg)
  {}
  Init_VisibilityConstraint_cone_sides target_pose(::moveit_msgs::msg::VisibilityConstraint::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_VisibilityConstraint_cone_sides(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

class Init_VisibilityConstraint_target_radius
{
public:
  Init_VisibilityConstraint_target_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisibilityConstraint_target_pose target_radius(::moveit_msgs::msg::VisibilityConstraint::_target_radius_type arg)
  {
    msg_.target_radius = std::move(arg);
    return Init_VisibilityConstraint_target_pose(msg_);
  }

private:
  ::moveit_msgs::msg::VisibilityConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::VisibilityConstraint>()
{
  return moveit_msgs::msg::builder::Init_VisibilityConstraint_target_radius();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__BUILDER_HPP_
