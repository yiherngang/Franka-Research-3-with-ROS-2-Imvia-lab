// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PlaceLocation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/place_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaceLocation_allowed_touch_objects
{
public:
  explicit Init_PlaceLocation_allowed_touch_objects(::moveit_msgs::msg::PlaceLocation & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PlaceLocation allowed_touch_objects(::moveit_msgs::msg::PlaceLocation::_allowed_touch_objects_type arg)
  {
    msg_.allowed_touch_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PlaceLocation msg_;
};

class Init_PlaceLocation_post_place_retreat
{
public:
  explicit Init_PlaceLocation_post_place_retreat(::moveit_msgs::msg::PlaceLocation & msg)
  : msg_(msg)
  {}
  Init_PlaceLocation_allowed_touch_objects post_place_retreat(::moveit_msgs::msg::PlaceLocation::_post_place_retreat_type arg)
  {
    msg_.post_place_retreat = std::move(arg);
    return Init_PlaceLocation_allowed_touch_objects(msg_);
  }

private:
  ::moveit_msgs::msg::PlaceLocation msg_;
};

class Init_PlaceLocation_pre_place_approach
{
public:
  explicit Init_PlaceLocation_pre_place_approach(::moveit_msgs::msg::PlaceLocation & msg)
  : msg_(msg)
  {}
  Init_PlaceLocation_post_place_retreat pre_place_approach(::moveit_msgs::msg::PlaceLocation::_pre_place_approach_type arg)
  {
    msg_.pre_place_approach = std::move(arg);
    return Init_PlaceLocation_post_place_retreat(msg_);
  }

private:
  ::moveit_msgs::msg::PlaceLocation msg_;
};

class Init_PlaceLocation_quality
{
public:
  explicit Init_PlaceLocation_quality(::moveit_msgs::msg::PlaceLocation & msg)
  : msg_(msg)
  {}
  Init_PlaceLocation_pre_place_approach quality(::moveit_msgs::msg::PlaceLocation::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_PlaceLocation_pre_place_approach(msg_);
  }

private:
  ::moveit_msgs::msg::PlaceLocation msg_;
};

class Init_PlaceLocation_place_pose
{
public:
  explicit Init_PlaceLocation_place_pose(::moveit_msgs::msg::PlaceLocation & msg)
  : msg_(msg)
  {}
  Init_PlaceLocation_quality place_pose(::moveit_msgs::msg::PlaceLocation::_place_pose_type arg)
  {
    msg_.place_pose = std::move(arg);
    return Init_PlaceLocation_quality(msg_);
  }

private:
  ::moveit_msgs::msg::PlaceLocation msg_;
};

class Init_PlaceLocation_post_place_posture
{
public:
  explicit Init_PlaceLocation_post_place_posture(::moveit_msgs::msg::PlaceLocation & msg)
  : msg_(msg)
  {}
  Init_PlaceLocation_place_pose post_place_posture(::moveit_msgs::msg::PlaceLocation::_post_place_posture_type arg)
  {
    msg_.post_place_posture = std::move(arg);
    return Init_PlaceLocation_place_pose(msg_);
  }

private:
  ::moveit_msgs::msg::PlaceLocation msg_;
};

class Init_PlaceLocation_id
{
public:
  Init_PlaceLocation_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaceLocation_post_place_posture id(::moveit_msgs::msg::PlaceLocation::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PlaceLocation_post_place_posture(msg_);
  }

private:
  ::moveit_msgs::msg::PlaceLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PlaceLocation>()
{
  return moveit_msgs::msg::builder::Init_PlaceLocation_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__BUILDER_HPP_
