// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'workspace_parameters'
#include "moveit_msgs/msg/detail/workspace_parameters__struct.hpp"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'goal_constraints'
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.hpp"
// Member 'trajectory_constraints'
#include "moveit_msgs/msg/detail/trajectory_constraints__struct.hpp"
// Member 'reference_trajectories'
#include "moveit_msgs/msg/detail/generic_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__MotionPlanRequest __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__MotionPlanRequest __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionPlanRequest_
{
  using Type = MotionPlanRequest_<ContainerAllocator>;

  explicit MotionPlanRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : workspace_parameters(_init),
    start_state(_init),
    path_constraints(_init),
    trajectory_constraints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pipeline_id = "";
      this->planner_id = "";
      this->group_name = "";
      this->num_planning_attempts = 0l;
      this->allowed_planning_time = 0.0;
      this->max_velocity_scaling_factor = 0.0;
      this->max_acceleration_scaling_factor = 0.0;
      this->cartesian_speed_end_effector_link = "";
      this->max_cartesian_speed = 0.0;
    }
  }

  explicit MotionPlanRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : workspace_parameters(_alloc, _init),
    start_state(_alloc, _init),
    path_constraints(_alloc, _init),
    trajectory_constraints(_alloc, _init),
    pipeline_id(_alloc),
    planner_id(_alloc),
    group_name(_alloc),
    cartesian_speed_end_effector_link(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pipeline_id = "";
      this->planner_id = "";
      this->group_name = "";
      this->num_planning_attempts = 0l;
      this->allowed_planning_time = 0.0;
      this->max_velocity_scaling_factor = 0.0;
      this->max_acceleration_scaling_factor = 0.0;
      this->cartesian_speed_end_effector_link = "";
      this->max_cartesian_speed = 0.0;
    }
  }

  // field types and members
  using _workspace_parameters_type =
    moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator>;
  _workspace_parameters_type workspace_parameters;
  using _start_state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _start_state_type start_state;
  using _goal_constraints_type =
    std::vector<moveit_msgs::msg::Constraints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Constraints_<ContainerAllocator>>>;
  _goal_constraints_type goal_constraints;
  using _path_constraints_type =
    moveit_msgs::msg::Constraints_<ContainerAllocator>;
  _path_constraints_type path_constraints;
  using _trajectory_constraints_type =
    moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator>;
  _trajectory_constraints_type trajectory_constraints;
  using _reference_trajectories_type =
    std::vector<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>>>;
  _reference_trajectories_type reference_trajectories;
  using _pipeline_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pipeline_id_type pipeline_id;
  using _planner_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planner_id_type planner_id;
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _num_planning_attempts_type =
    int32_t;
  _num_planning_attempts_type num_planning_attempts;
  using _allowed_planning_time_type =
    double;
  _allowed_planning_time_type allowed_planning_time;
  using _max_velocity_scaling_factor_type =
    double;
  _max_velocity_scaling_factor_type max_velocity_scaling_factor;
  using _max_acceleration_scaling_factor_type =
    double;
  _max_acceleration_scaling_factor_type max_acceleration_scaling_factor;
  using _cartesian_speed_end_effector_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cartesian_speed_end_effector_link_type cartesian_speed_end_effector_link;
  using _max_cartesian_speed_type =
    double;
  _max_cartesian_speed_type max_cartesian_speed;

  // setters for named parameter idiom
  Type & set__workspace_parameters(
    const moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator> & _arg)
  {
    this->workspace_parameters = _arg;
    return *this;
  }
  Type & set__start_state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->start_state = _arg;
    return *this;
  }
  Type & set__goal_constraints(
    const std::vector<moveit_msgs::msg::Constraints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Constraints_<ContainerAllocator>>> & _arg)
  {
    this->goal_constraints = _arg;
    return *this;
  }
  Type & set__path_constraints(
    const moveit_msgs::msg::Constraints_<ContainerAllocator> & _arg)
  {
    this->path_constraints = _arg;
    return *this;
  }
  Type & set__trajectory_constraints(
    const moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator> & _arg)
  {
    this->trajectory_constraints = _arg;
    return *this;
  }
  Type & set__reference_trajectories(
    const std::vector<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->reference_trajectories = _arg;
    return *this;
  }
  Type & set__pipeline_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pipeline_id = _arg;
    return *this;
  }
  Type & set__planner_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planner_id = _arg;
    return *this;
  }
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__num_planning_attempts(
    const int32_t & _arg)
  {
    this->num_planning_attempts = _arg;
    return *this;
  }
  Type & set__allowed_planning_time(
    const double & _arg)
  {
    this->allowed_planning_time = _arg;
    return *this;
  }
  Type & set__max_velocity_scaling_factor(
    const double & _arg)
  {
    this->max_velocity_scaling_factor = _arg;
    return *this;
  }
  Type & set__max_acceleration_scaling_factor(
    const double & _arg)
  {
    this->max_acceleration_scaling_factor = _arg;
    return *this;
  }
  Type & set__cartesian_speed_end_effector_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cartesian_speed_end_effector_link = _arg;
    return *this;
  }
  Type & set__max_cartesian_speed(
    const double & _arg)
  {
    this->max_cartesian_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__MotionPlanRequest
    std::shared_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__MotionPlanRequest
    std::shared_ptr<moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionPlanRequest_ & other) const
  {
    if (this->workspace_parameters != other.workspace_parameters) {
      return false;
    }
    if (this->start_state != other.start_state) {
      return false;
    }
    if (this->goal_constraints != other.goal_constraints) {
      return false;
    }
    if (this->path_constraints != other.path_constraints) {
      return false;
    }
    if (this->trajectory_constraints != other.trajectory_constraints) {
      return false;
    }
    if (this->reference_trajectories != other.reference_trajectories) {
      return false;
    }
    if (this->pipeline_id != other.pipeline_id) {
      return false;
    }
    if (this->planner_id != other.planner_id) {
      return false;
    }
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->num_planning_attempts != other.num_planning_attempts) {
      return false;
    }
    if (this->allowed_planning_time != other.allowed_planning_time) {
      return false;
    }
    if (this->max_velocity_scaling_factor != other.max_velocity_scaling_factor) {
      return false;
    }
    if (this->max_acceleration_scaling_factor != other.max_acceleration_scaling_factor) {
      return false;
    }
    if (this->cartesian_speed_end_effector_link != other.cartesian_speed_end_effector_link) {
      return false;
    }
    if (this->max_cartesian_speed != other.max_cartesian_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionPlanRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionPlanRequest_

// alias to use template instance with default allocator
using MotionPlanRequest =
  moveit_msgs::msg::MotionPlanRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_HPP_
