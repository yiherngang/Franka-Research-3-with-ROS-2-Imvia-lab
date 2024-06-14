// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"
// Member 'primitive_poses'
// Member 'mesh_poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__BoundingVolume __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__BoundingVolume __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingVolume_
{
  using Type = BoundingVolume_<ContainerAllocator>;

  explicit BoundingVolume_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BoundingVolume_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _primitives_type =
    std::vector<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>>;
  _primitives_type primitives;
  using _primitive_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _primitive_poses_type primitive_poses;
  using _meshes_type =
    std::vector<shape_msgs::msg::Mesh_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shape_msgs::msg::Mesh_<ContainerAllocator>>>;
  _meshes_type meshes;
  using _mesh_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _mesh_poses_type mesh_poses;

  // setters for named parameter idiom
  Type & set__primitives(
    const std::vector<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }
  Type & set__primitive_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->primitive_poses = _arg;
    return *this;
  }
  Type & set__meshes(
    const std::vector<shape_msgs::msg::Mesh_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shape_msgs::msg::Mesh_<ContainerAllocator>>> & _arg)
  {
    this->meshes = _arg;
    return *this;
  }
  Type & set__mesh_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->mesh_poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::BoundingVolume_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::BoundingVolume_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::BoundingVolume_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::BoundingVolume_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__BoundingVolume
    std::shared_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__BoundingVolume
    std::shared_ptr<moveit_msgs::msg::BoundingVolume_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingVolume_ & other) const
  {
    if (this->primitives != other.primitives) {
      return false;
    }
    if (this->primitive_poses != other.primitive_poses) {
      return false;
    }
    if (this->meshes != other.meshes) {
      return false;
    }
    if (this->mesh_poses != other.mesh_poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingVolume_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingVolume_

// alias to use template instance with default allocator
using BoundingVolume =
  moveit_msgs::msg::BoundingVolume_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__STRUCT_HPP_
