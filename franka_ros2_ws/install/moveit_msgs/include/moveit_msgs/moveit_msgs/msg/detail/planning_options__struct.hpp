// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'planning_scene_diff'
#include "moveit_msgs/msg/detail/planning_scene__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PlanningOptions __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PlanningOptions __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningOptions_
{
  using Type = PlanningOptions_<ContainerAllocator>;

  explicit PlanningOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_scene_diff(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_only = false;
      this->look_around = false;
      this->look_around_attempts = 0l;
      this->max_safe_execution_cost = 0.0;
      this->replan = false;
      this->replan_attempts = 0l;
      this->replan_delay = 0.0;
    }
  }

  explicit PlanningOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_scene_diff(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_only = false;
      this->look_around = false;
      this->look_around_attempts = 0l;
      this->max_safe_execution_cost = 0.0;
      this->replan = false;
      this->replan_attempts = 0l;
      this->replan_delay = 0.0;
    }
  }

  // field types and members
  using _planning_scene_diff_type =
    moveit_msgs::msg::PlanningScene_<ContainerAllocator>;
  _planning_scene_diff_type planning_scene_diff;
  using _plan_only_type =
    bool;
  _plan_only_type plan_only;
  using _look_around_type =
    bool;
  _look_around_type look_around;
  using _look_around_attempts_type =
    int32_t;
  _look_around_attempts_type look_around_attempts;
  using _max_safe_execution_cost_type =
    double;
  _max_safe_execution_cost_type max_safe_execution_cost;
  using _replan_type =
    bool;
  _replan_type replan;
  using _replan_attempts_type =
    int32_t;
  _replan_attempts_type replan_attempts;
  using _replan_delay_type =
    double;
  _replan_delay_type replan_delay;

  // setters for named parameter idiom
  Type & set__planning_scene_diff(
    const moveit_msgs::msg::PlanningScene_<ContainerAllocator> & _arg)
  {
    this->planning_scene_diff = _arg;
    return *this;
  }
  Type & set__plan_only(
    const bool & _arg)
  {
    this->plan_only = _arg;
    return *this;
  }
  Type & set__look_around(
    const bool & _arg)
  {
    this->look_around = _arg;
    return *this;
  }
  Type & set__look_around_attempts(
    const int32_t & _arg)
  {
    this->look_around_attempts = _arg;
    return *this;
  }
  Type & set__max_safe_execution_cost(
    const double & _arg)
  {
    this->max_safe_execution_cost = _arg;
    return *this;
  }
  Type & set__replan(
    const bool & _arg)
  {
    this->replan = _arg;
    return *this;
  }
  Type & set__replan_attempts(
    const int32_t & _arg)
  {
    this->replan_attempts = _arg;
    return *this;
  }
  Type & set__replan_delay(
    const double & _arg)
  {
    this->replan_delay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PlanningOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PlanningOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PlanningOptions
    std::shared_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PlanningOptions
    std::shared_ptr<moveit_msgs::msg::PlanningOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningOptions_ & other) const
  {
    if (this->planning_scene_diff != other.planning_scene_diff) {
      return false;
    }
    if (this->plan_only != other.plan_only) {
      return false;
    }
    if (this->look_around != other.look_around) {
      return false;
    }
    if (this->look_around_attempts != other.look_around_attempts) {
      return false;
    }
    if (this->max_safe_execution_cost != other.max_safe_execution_cost) {
      return false;
    }
    if (this->replan != other.replan) {
      return false;
    }
    if (this->replan_attempts != other.replan_attempts) {
      return false;
    }
    if (this->replan_delay != other.replan_delay) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningOptions_

// alias to use template instance with default allocator
using PlanningOptions =
  moveit_msgs::msg::PlanningOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_HPP_
