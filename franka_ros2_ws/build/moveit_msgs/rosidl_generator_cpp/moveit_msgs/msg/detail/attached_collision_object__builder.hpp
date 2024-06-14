// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/attached_collision_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_AttachedCollisionObject_weight
{
public:
  explicit Init_AttachedCollisionObject_weight(::moveit_msgs::msg::AttachedCollisionObject & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::AttachedCollisionObject weight(::moveit_msgs::msg::AttachedCollisionObject::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::AttachedCollisionObject msg_;
};

class Init_AttachedCollisionObject_detach_posture
{
public:
  explicit Init_AttachedCollisionObject_detach_posture(::moveit_msgs::msg::AttachedCollisionObject & msg)
  : msg_(msg)
  {}
  Init_AttachedCollisionObject_weight detach_posture(::moveit_msgs::msg::AttachedCollisionObject::_detach_posture_type arg)
  {
    msg_.detach_posture = std::move(arg);
    return Init_AttachedCollisionObject_weight(msg_);
  }

private:
  ::moveit_msgs::msg::AttachedCollisionObject msg_;
};

class Init_AttachedCollisionObject_touch_links
{
public:
  explicit Init_AttachedCollisionObject_touch_links(::moveit_msgs::msg::AttachedCollisionObject & msg)
  : msg_(msg)
  {}
  Init_AttachedCollisionObject_detach_posture touch_links(::moveit_msgs::msg::AttachedCollisionObject::_touch_links_type arg)
  {
    msg_.touch_links = std::move(arg);
    return Init_AttachedCollisionObject_detach_posture(msg_);
  }

private:
  ::moveit_msgs::msg::AttachedCollisionObject msg_;
};

class Init_AttachedCollisionObject_object
{
public:
  explicit Init_AttachedCollisionObject_object(::moveit_msgs::msg::AttachedCollisionObject & msg)
  : msg_(msg)
  {}
  Init_AttachedCollisionObject_touch_links object(::moveit_msgs::msg::AttachedCollisionObject::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_AttachedCollisionObject_touch_links(msg_);
  }

private:
  ::moveit_msgs::msg::AttachedCollisionObject msg_;
};

class Init_AttachedCollisionObject_link_name
{
public:
  Init_AttachedCollisionObject_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttachedCollisionObject_object link_name(::moveit_msgs::msg::AttachedCollisionObject::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_AttachedCollisionObject_object(msg_);
  }

private:
  ::moveit_msgs::msg::AttachedCollisionObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::AttachedCollisionObject>()
{
  return moveit_msgs::msg::builder::Init_AttachedCollisionObject_link_name();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__BUILDER_HPP_
