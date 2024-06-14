// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/MotionSequenceResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"
// Member 'sequence_start'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'planned_trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__MotionSequenceResponse __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__MotionSequenceResponse __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionSequenceResponse_
{
  using Type = MotionSequenceResponse_<ContainerAllocator>;

  explicit MotionSequenceResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_init),
    sequence_start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_time = 0.0;
    }
  }

  explicit MotionSequenceResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_alloc, _init),
    sequence_start(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_time = 0.0;
    }
  }

  // field types and members
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;
  using _sequence_start_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _sequence_start_type sequence_start;
  using _planned_trajectories_type =
    std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>;
  _planned_trajectories_type planned_trajectories;
  using _planning_time_type =
    double;
  _planning_time_type planning_time;

  // setters for named parameter idiom
  Type & set__error_code(
    const moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__sequence_start(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->sequence_start = _arg;
    return *this;
  }
  Type & set__planned_trajectories(
    const std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->planned_trajectories = _arg;
    return *this;
  }
  Type & set__planning_time(
    const double & _arg)
  {
    this->planning_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__MotionSequenceResponse
    std::shared_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__MotionSequenceResponse
    std::shared_ptr<moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequenceResponse_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->sequence_start != other.sequence_start) {
      return false;
    }
    if (this->planned_trajectories != other.planned_trajectories) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequenceResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequenceResponse_

// alias to use template instance with default allocator
using MotionSequenceResponse =
  moveit_msgs::msg::MotionSequenceResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__STRUCT_HPP_
