// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/OrientedBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/oriented_bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_OrientedBoundingBox_extents
{
public:
  explicit Init_OrientedBoundingBox_extents(::moveit_msgs::msg::OrientedBoundingBox & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::OrientedBoundingBox extents(::moveit_msgs::msg::OrientedBoundingBox::_extents_type arg)
  {
    msg_.extents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::OrientedBoundingBox msg_;
};

class Init_OrientedBoundingBox_pose
{
public:
  Init_OrientedBoundingBox_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrientedBoundingBox_extents pose(::moveit_msgs::msg::OrientedBoundingBox::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_OrientedBoundingBox_extents(msg_);
  }

private:
  ::moveit_msgs::msg::OrientedBoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::OrientedBoundingBox>()
{
  return moveit_msgs::msg::builder::Init_OrientedBoundingBox_pose();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__BUILDER_HPP_
