// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/MotionPlanDetailedResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__MotionPlanDetailedResponse __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__MotionPlanDetailedResponse __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionPlanDetailedResponse_
{
  using Type = MotionPlanDetailedResponse_<ContainerAllocator>;

  explicit MotionPlanDetailedResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_start(_init),
    error_code(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  explicit MotionPlanDetailedResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_start(_alloc, _init),
    group_name(_alloc),
    error_code(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  // field types and members
  using _trajectory_start_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _trajectory_start_type trajectory_start;
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _trajectory_type =
    std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>;
  _trajectory_type trajectory;
  using _description_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _description_type description;
  using _processing_time_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _processing_time_type processing_time;
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__trajectory_start(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->trajectory_start = _arg;
    return *this;
  }
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__trajectory(
    const std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__description(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__processing_time(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->processing_time = _arg;
    return *this;
  }
  Type & set__error_code(
    const moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__MotionPlanDetailedResponse
    std::shared_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__MotionPlanDetailedResponse
    std::shared_ptr<moveit_msgs::msg::MotionPlanDetailedResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionPlanDetailedResponse_ & other) const
  {
    if (this->trajectory_start != other.trajectory_start) {
      return false;
    }
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->processing_time != other.processing_time) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionPlanDetailedResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionPlanDetailedResponse_

// alias to use template instance with default allocator
using MotionPlanDetailedResponse =
  moveit_msgs::msg::MotionPlanDetailedResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__STRUCT_HPP_
