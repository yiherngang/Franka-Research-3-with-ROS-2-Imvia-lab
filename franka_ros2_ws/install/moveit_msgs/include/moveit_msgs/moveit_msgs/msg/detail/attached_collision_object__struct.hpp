// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object'
#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
// Member 'detach_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__AttachedCollisionObject __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__AttachedCollisionObject __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttachedCollisionObject_
{
  using Type = AttachedCollisionObject_<ContainerAllocator>;

  explicit AttachedCollisionObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_init),
    detach_posture(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->weight = 0.0;
    }
  }

  explicit AttachedCollisionObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_name(_alloc),
    object(_alloc, _init),
    detach_posture(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->weight = 0.0;
    }
  }

  // field types and members
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;
  using _object_type =
    moveit_msgs::msg::CollisionObject_<ContainerAllocator>;
  _object_type object;
  using _touch_links_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _touch_links_type touch_links;
  using _detach_posture_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _detach_posture_type detach_posture;
  using _weight_type =
    double;
  _weight_type weight;

  // setters for named parameter idiom
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
    return *this;
  }
  Type & set__object(
    const moveit_msgs::msg::CollisionObject_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__touch_links(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->touch_links = _arg;
    return *this;
  }
  Type & set__detach_posture(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->detach_posture = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__AttachedCollisionObject
    std::shared_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__AttachedCollisionObject
    std::shared_ptr<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachedCollisionObject_ & other) const
  {
    if (this->link_name != other.link_name) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    if (this->touch_links != other.touch_links) {
      return false;
    }
    if (this->detach_posture != other.detach_posture) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachedCollisionObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachedCollisionObject_

// alias to use template instance with default allocator
using AttachedCollisionObject =
  moveit_msgs::msg::AttachedCollisionObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_HPP_
