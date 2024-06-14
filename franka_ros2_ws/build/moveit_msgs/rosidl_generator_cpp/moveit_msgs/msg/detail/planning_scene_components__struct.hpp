// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PlanningSceneComponents __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PlanningSceneComponents __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningSceneComponents_
{
  using Type = PlanningSceneComponents_<ContainerAllocator>;

  explicit PlanningSceneComponents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->components = 0ul;
    }
  }

  explicit PlanningSceneComponents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->components = 0ul;
    }
  }

  // field types and members
  using _components_type =
    uint32_t;
  _components_type components;

  // setters for named parameter idiom
  Type & set__components(
    const uint32_t & _arg)
  {
    this->components = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t SCENE_SETTINGS =
    1u;
  static constexpr uint32_t ROBOT_STATE =
    2u;
  static constexpr uint32_t ROBOT_STATE_ATTACHED_OBJECTS =
    4u;
  static constexpr uint32_t WORLD_OBJECT_NAMES =
    8u;
  static constexpr uint32_t WORLD_OBJECT_GEOMETRY =
    16u;
  static constexpr uint32_t OCTOMAP =
    32u;
  static constexpr uint32_t TRANSFORMS =
    64u;
  static constexpr uint32_t ALLOWED_COLLISION_MATRIX =
    128u;
  static constexpr uint32_t LINK_PADDING_AND_SCALING =
    256u;
  static constexpr uint32_t OBJECT_COLORS =
    512u;

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PlanningSceneComponents
    std::shared_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PlanningSceneComponents
    std::shared_ptr<moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningSceneComponents_ & other) const
  {
    if (this->components != other.components) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningSceneComponents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningSceneComponents_

// alias to use template instance with default allocator
using PlanningSceneComponents =
  moveit_msgs::msg::PlanningSceneComponents_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::SCENE_SETTINGS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::ROBOT_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::ROBOT_STATE_ATTACHED_OBJECTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::WORLD_OBJECT_NAMES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::WORLD_OBJECT_GEOMETRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::OCTOMAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::TRANSFORMS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::ALLOWED_COLLISION_MATRIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::LINK_PADDING_AND_SCALING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PlanningSceneComponents_<ContainerAllocator>::OBJECT_COLORS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_HPP_
