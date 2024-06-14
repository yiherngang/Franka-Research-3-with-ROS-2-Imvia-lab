// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionObject_operation
{
public:
  explicit Init_CollisionObject_operation(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::CollisionObject operation(::moveit_msgs::msg::CollisionObject::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_subframe_poses
{
public:
  explicit Init_CollisionObject_subframe_poses(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_operation subframe_poses(::moveit_msgs::msg::CollisionObject::_subframe_poses_type arg)
  {
    msg_.subframe_poses = std::move(arg);
    return Init_CollisionObject_operation(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_subframe_names
{
public:
  explicit Init_CollisionObject_subframe_names(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_subframe_poses subframe_names(::moveit_msgs::msg::CollisionObject::_subframe_names_type arg)
  {
    msg_.subframe_names = std::move(arg);
    return Init_CollisionObject_subframe_poses(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_plane_poses
{
public:
  explicit Init_CollisionObject_plane_poses(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_subframe_names plane_poses(::moveit_msgs::msg::CollisionObject::_plane_poses_type arg)
  {
    msg_.plane_poses = std::move(arg);
    return Init_CollisionObject_subframe_names(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_planes
{
public:
  explicit Init_CollisionObject_planes(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_plane_poses planes(::moveit_msgs::msg::CollisionObject::_planes_type arg)
  {
    msg_.planes = std::move(arg);
    return Init_CollisionObject_plane_poses(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_mesh_poses
{
public:
  explicit Init_CollisionObject_mesh_poses(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_planes mesh_poses(::moveit_msgs::msg::CollisionObject::_mesh_poses_type arg)
  {
    msg_.mesh_poses = std::move(arg);
    return Init_CollisionObject_planes(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_meshes
{
public:
  explicit Init_CollisionObject_meshes(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_mesh_poses meshes(::moveit_msgs::msg::CollisionObject::_meshes_type arg)
  {
    msg_.meshes = std::move(arg);
    return Init_CollisionObject_mesh_poses(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_primitive_poses
{
public:
  explicit Init_CollisionObject_primitive_poses(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_meshes primitive_poses(::moveit_msgs::msg::CollisionObject::_primitive_poses_type arg)
  {
    msg_.primitive_poses = std::move(arg);
    return Init_CollisionObject_meshes(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_primitives
{
public:
  explicit Init_CollisionObject_primitives(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_primitive_poses primitives(::moveit_msgs::msg::CollisionObject::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return Init_CollisionObject_primitive_poses(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_type
{
public:
  explicit Init_CollisionObject_type(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_primitives type(::moveit_msgs::msg::CollisionObject::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CollisionObject_primitives(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_id
{
public:
  explicit Init_CollisionObject_id(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_type id(::moveit_msgs::msg::CollisionObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CollisionObject_type(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_pose
{
public:
  explicit Init_CollisionObject_pose(::moveit_msgs::msg::CollisionObject & msg)
  : msg_(msg)
  {}
  Init_CollisionObject_id pose(::moveit_msgs::msg::CollisionObject::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CollisionObject_id(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

class Init_CollisionObject_header
{
public:
  Init_CollisionObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionObject_pose header(::moveit_msgs::msg::CollisionObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CollisionObject_pose(msg_);
  }

private:
  ::moveit_msgs::msg::CollisionObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::CollisionObject>()
{
  return moveit_msgs::msg::builder::Init_CollisionObject_header();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__BUILDER_HPP_
