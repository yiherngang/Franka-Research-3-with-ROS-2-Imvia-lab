// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRASP__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRASP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/grasp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_Grasp_allowed_touch_objects
{
public:
  explicit Init_Grasp_allowed_touch_objects(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::Grasp allowed_touch_objects(::moveit_msgs::msg::Grasp::_allowed_touch_objects_type arg)
  {
    msg_.allowed_touch_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_max_contact_force
{
public:
  explicit Init_Grasp_max_contact_force(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_allowed_touch_objects max_contact_force(::moveit_msgs::msg::Grasp::_max_contact_force_type arg)
  {
    msg_.max_contact_force = std::move(arg);
    return Init_Grasp_allowed_touch_objects(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_post_place_retreat
{
public:
  explicit Init_Grasp_post_place_retreat(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_max_contact_force post_place_retreat(::moveit_msgs::msg::Grasp::_post_place_retreat_type arg)
  {
    msg_.post_place_retreat = std::move(arg);
    return Init_Grasp_max_contact_force(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_post_grasp_retreat
{
public:
  explicit Init_Grasp_post_grasp_retreat(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_post_place_retreat post_grasp_retreat(::moveit_msgs::msg::Grasp::_post_grasp_retreat_type arg)
  {
    msg_.post_grasp_retreat = std::move(arg);
    return Init_Grasp_post_place_retreat(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_pre_grasp_approach
{
public:
  explicit Init_Grasp_pre_grasp_approach(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_post_grasp_retreat pre_grasp_approach(::moveit_msgs::msg::Grasp::_pre_grasp_approach_type arg)
  {
    msg_.pre_grasp_approach = std::move(arg);
    return Init_Grasp_post_grasp_retreat(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_grasp_quality
{
public:
  explicit Init_Grasp_grasp_quality(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_pre_grasp_approach grasp_quality(::moveit_msgs::msg::Grasp::_grasp_quality_type arg)
  {
    msg_.grasp_quality = std::move(arg);
    return Init_Grasp_pre_grasp_approach(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_grasp_pose
{
public:
  explicit Init_Grasp_grasp_pose(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_grasp_quality grasp_pose(::moveit_msgs::msg::Grasp::_grasp_pose_type arg)
  {
    msg_.grasp_pose = std::move(arg);
    return Init_Grasp_grasp_quality(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_grasp_posture
{
public:
  explicit Init_Grasp_grasp_posture(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_grasp_pose grasp_posture(::moveit_msgs::msg::Grasp::_grasp_posture_type arg)
  {
    msg_.grasp_posture = std::move(arg);
    return Init_Grasp_grasp_pose(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_pre_grasp_posture
{
public:
  explicit Init_Grasp_pre_grasp_posture(::moveit_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_grasp_posture pre_grasp_posture(::moveit_msgs::msg::Grasp::_pre_grasp_posture_type arg)
  {
    msg_.pre_grasp_posture = std::move(arg);
    return Init_Grasp_grasp_posture(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

class Init_Grasp_id
{
public:
  Init_Grasp_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grasp_pre_grasp_posture id(::moveit_msgs::msg::Grasp::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Grasp_pre_grasp_posture(msg_);
  }

private:
  ::moveit_msgs::msg::Grasp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::Grasp>()
{
  return moveit_msgs::msg::builder::Init_Grasp_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRASP__BUILDER_HPP_
