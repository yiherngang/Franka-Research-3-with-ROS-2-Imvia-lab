// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/bounding_volume__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingVolume_mesh_poses
{
public:
  explicit Init_BoundingVolume_mesh_poses(::moveit_msgs::msg::BoundingVolume & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::BoundingVolume mesh_poses(::moveit_msgs::msg::BoundingVolume::_mesh_poses_type arg)
  {
    msg_.mesh_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::BoundingVolume msg_;
};

class Init_BoundingVolume_meshes
{
public:
  explicit Init_BoundingVolume_meshes(::moveit_msgs::msg::BoundingVolume & msg)
  : msg_(msg)
  {}
  Init_BoundingVolume_mesh_poses meshes(::moveit_msgs::msg::BoundingVolume::_meshes_type arg)
  {
    msg_.meshes = std::move(arg);
    return Init_BoundingVolume_mesh_poses(msg_);
  }

private:
  ::moveit_msgs::msg::BoundingVolume msg_;
};

class Init_BoundingVolume_primitive_poses
{
public:
  explicit Init_BoundingVolume_primitive_poses(::moveit_msgs::msg::BoundingVolume & msg)
  : msg_(msg)
  {}
  Init_BoundingVolume_meshes primitive_poses(::moveit_msgs::msg::BoundingVolume::_primitive_poses_type arg)
  {
    msg_.primitive_poses = std::move(arg);
    return Init_BoundingVolume_meshes(msg_);
  }

private:
  ::moveit_msgs::msg::BoundingVolume msg_;
};

class Init_BoundingVolume_primitives
{
public:
  Init_BoundingVolume_primitives()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingVolume_primitive_poses primitives(::moveit_msgs::msg::BoundingVolume::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return Init_BoundingVolume_primitive_poses(msg_);
  }

private:
  ::moveit_msgs::msg::BoundingVolume msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::BoundingVolume>()
{
  return moveit_msgs::msg::builder::Init_BoundingVolume_primitives();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__BUILDER_HPP_
