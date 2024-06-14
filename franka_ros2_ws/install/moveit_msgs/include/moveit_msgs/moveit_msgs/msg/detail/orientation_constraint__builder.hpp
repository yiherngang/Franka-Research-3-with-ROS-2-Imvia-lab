// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/OrientationConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/orientation_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_OrientationConstraint_weight
{
public:
  explicit Init_OrientationConstraint_weight(::moveit_msgs::msg::OrientationConstraint & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::OrientationConstraint weight(::moveit_msgs::msg::OrientationConstraint::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

class Init_OrientationConstraint_parameterization
{
public:
  explicit Init_OrientationConstraint_parameterization(::moveit_msgs::msg::OrientationConstraint & msg)
  : msg_(msg)
  {}
  Init_OrientationConstraint_weight parameterization(::moveit_msgs::msg::OrientationConstraint::_parameterization_type arg)
  {
    msg_.parameterization = std::move(arg);
    return Init_OrientationConstraint_weight(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

class Init_OrientationConstraint_absolute_z_axis_tolerance
{
public:
  explicit Init_OrientationConstraint_absolute_z_axis_tolerance(::moveit_msgs::msg::OrientationConstraint & msg)
  : msg_(msg)
  {}
  Init_OrientationConstraint_parameterization absolute_z_axis_tolerance(::moveit_msgs::msg::OrientationConstraint::_absolute_z_axis_tolerance_type arg)
  {
    msg_.absolute_z_axis_tolerance = std::move(arg);
    return Init_OrientationConstraint_parameterization(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

class Init_OrientationConstraint_absolute_y_axis_tolerance
{
public:
  explicit Init_OrientationConstraint_absolute_y_axis_tolerance(::moveit_msgs::msg::OrientationConstraint & msg)
  : msg_(msg)
  {}
  Init_OrientationConstraint_absolute_z_axis_tolerance absolute_y_axis_tolerance(::moveit_msgs::msg::OrientationConstraint::_absolute_y_axis_tolerance_type arg)
  {
    msg_.absolute_y_axis_tolerance = std::move(arg);
    return Init_OrientationConstraint_absolute_z_axis_tolerance(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

class Init_OrientationConstraint_absolute_x_axis_tolerance
{
public:
  explicit Init_OrientationConstraint_absolute_x_axis_tolerance(::moveit_msgs::msg::OrientationConstraint & msg)
  : msg_(msg)
  {}
  Init_OrientationConstraint_absolute_y_axis_tolerance absolute_x_axis_tolerance(::moveit_msgs::msg::OrientationConstraint::_absolute_x_axis_tolerance_type arg)
  {
    msg_.absolute_x_axis_tolerance = std::move(arg);
    return Init_OrientationConstraint_absolute_y_axis_tolerance(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

class Init_OrientationConstraint_link_name
{
public:
  explicit Init_OrientationConstraint_link_name(::moveit_msgs::msg::OrientationConstraint & msg)
  : msg_(msg)
  {}
  Init_OrientationConstraint_absolute_x_axis_tolerance link_name(::moveit_msgs::msg::OrientationConstraint::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_OrientationConstraint_absolute_x_axis_tolerance(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

class Init_OrientationConstraint_orientation
{
public:
  explicit Init_OrientationConstraint_orientation(::moveit_msgs::msg::OrientationConstraint & msg)
  : msg_(msg)
  {}
  Init_OrientationConstraint_link_name orientation(::moveit_msgs::msg::OrientationConstraint::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_OrientationConstraint_link_name(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

class Init_OrientationConstraint_header
{
public:
  Init_OrientationConstraint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrientationConstraint_orientation header(::moveit_msgs::msg::OrientationConstraint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OrientationConstraint_orientation(msg_);
  }

private:
  ::moveit_msgs::msg::OrientationConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::OrientationConstraint>()
{
  return moveit_msgs::msg::builder::Init_OrientationConstraint_header();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__BUILDER_HPP_
