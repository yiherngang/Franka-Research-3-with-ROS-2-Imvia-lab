// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/position_ik_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionIKRequest_timeout
{
public:
  explicit Init_PositionIKRequest_timeout(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PositionIKRequest timeout(::moveit_msgs::msg::PositionIKRequest::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_pose_stamped_vector
{
public:
  explicit Init_PositionIKRequest_pose_stamped_vector(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  Init_PositionIKRequest_timeout pose_stamped_vector(::moveit_msgs::msg::PositionIKRequest::_pose_stamped_vector_type arg)
  {
    msg_.pose_stamped_vector = std::move(arg);
    return Init_PositionIKRequest_timeout(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_ik_link_names
{
public:
  explicit Init_PositionIKRequest_ik_link_names(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  Init_PositionIKRequest_pose_stamped_vector ik_link_names(::moveit_msgs::msg::PositionIKRequest::_ik_link_names_type arg)
  {
    msg_.ik_link_names = std::move(arg);
    return Init_PositionIKRequest_pose_stamped_vector(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_pose_stamped
{
public:
  explicit Init_PositionIKRequest_pose_stamped(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  Init_PositionIKRequest_ik_link_names pose_stamped(::moveit_msgs::msg::PositionIKRequest::_pose_stamped_type arg)
  {
    msg_.pose_stamped = std::move(arg);
    return Init_PositionIKRequest_ik_link_names(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_ik_link_name
{
public:
  explicit Init_PositionIKRequest_ik_link_name(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  Init_PositionIKRequest_pose_stamped ik_link_name(::moveit_msgs::msg::PositionIKRequest::_ik_link_name_type arg)
  {
    msg_.ik_link_name = std::move(arg);
    return Init_PositionIKRequest_pose_stamped(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_avoid_collisions
{
public:
  explicit Init_PositionIKRequest_avoid_collisions(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  Init_PositionIKRequest_ik_link_name avoid_collisions(::moveit_msgs::msg::PositionIKRequest::_avoid_collisions_type arg)
  {
    msg_.avoid_collisions = std::move(arg);
    return Init_PositionIKRequest_ik_link_name(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_constraints
{
public:
  explicit Init_PositionIKRequest_constraints(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  Init_PositionIKRequest_avoid_collisions constraints(::moveit_msgs::msg::PositionIKRequest::_constraints_type arg)
  {
    msg_.constraints = std::move(arg);
    return Init_PositionIKRequest_avoid_collisions(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_robot_state
{
public:
  explicit Init_PositionIKRequest_robot_state(::moveit_msgs::msg::PositionIKRequest & msg)
  : msg_(msg)
  {}
  Init_PositionIKRequest_constraints robot_state(::moveit_msgs::msg::PositionIKRequest::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_PositionIKRequest_constraints(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

class Init_PositionIKRequest_group_name
{
public:
  Init_PositionIKRequest_group_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionIKRequest_robot_state group_name(::moveit_msgs::msg::PositionIKRequest::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_PositionIKRequest_robot_state(msg_);
  }

private:
  ::moveit_msgs::msg::PositionIKRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PositionIKRequest>()
{
  return moveit_msgs::msg::builder::Init_PositionIKRequest_group_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__BUILDER_HPP_
