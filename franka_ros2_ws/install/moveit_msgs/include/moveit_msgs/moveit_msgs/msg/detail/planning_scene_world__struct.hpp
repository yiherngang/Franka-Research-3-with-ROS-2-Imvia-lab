// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'collision_objects'
#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
// Member 'octomap'
#include "octomap_msgs/msg/detail/octomap_with_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PlanningSceneWorld __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PlanningSceneWorld __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningSceneWorld_
{
  using Type = PlanningSceneWorld_<ContainerAllocator>;

  explicit PlanningSceneWorld_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : octomap(_init)
  {
    (void)_init;
  }

  explicit PlanningSceneWorld_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : octomap(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _collision_objects_type =
    std::vector<moveit_msgs::msg::CollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>>;
  _collision_objects_type collision_objects;
  using _octomap_type =
    octomap_msgs::msg::OctomapWithPose_<ContainerAllocator>;
  _octomap_type octomap;

  // setters for named parameter idiom
  Type & set__collision_objects(
    const std::vector<moveit_msgs::msg::CollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>> & _arg)
  {
    this->collision_objects = _arg;
    return *this;
  }
  Type & set__octomap(
    const octomap_msgs::msg::OctomapWithPose_<ContainerAllocator> & _arg)
  {
    this->octomap = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PlanningSceneWorld
    std::shared_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PlanningSceneWorld
    std::shared_ptr<moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningSceneWorld_ & other) const
  {
    if (this->collision_objects != other.collision_objects) {
      return false;
    }
    if (this->octomap != other.octomap) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningSceneWorld_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningSceneWorld_

// alias to use template instance with default allocator
using PlanningSceneWorld =
  moveit_msgs::msg::PlanningSceneWorld_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__STRUCT_HPP_
