// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetCartesianPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetCartesianPath_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCartesianPath_Request_
{
  using Type = GetCartesianPath_Request_<ContainerAllocator>;

  explicit GetCartesianPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    start_state(_init),
    path_constraints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->link_name = "";
      this->max_step = 0.0;
      this->jump_threshold = 0.0;
      this->prismatic_jump_threshold = 0.0;
      this->revolute_jump_threshold = 0.0;
      this->avoid_collisions = false;
    }
  }

  explicit GetCartesianPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    start_state(_alloc, _init),
    group_name(_alloc),
    link_name(_alloc),
    path_constraints(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->link_name = "";
      this->max_step = 0.0;
      this->jump_threshold = 0.0;
      this->prismatic_jump_threshold = 0.0;
      this->revolute_jump_threshold = 0.0;
      this->avoid_collisions = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _start_state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _start_state_type start_state;
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _max_step_type =
    double;
  _max_step_type max_step;
  using _jump_threshold_type =
    double;
  _jump_threshold_type jump_threshold;
  using _prismatic_jump_threshold_type =
    double;
  _prismatic_jump_threshold_type prismatic_jump_threshold;
  using _revolute_jump_threshold_type =
    double;
  _revolute_jump_threshold_type revolute_jump_threshold;
  using _avoid_collisions_type =
    bool;
  _avoid_collisions_type avoid_collisions;
  using _path_constraints_type =
    moveit_msgs::msg::Constraints_<ContainerAllocator>;
  _path_constraints_type path_constraints;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__start_state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->start_state = _arg;
    return *this;
  }
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__max_step(
    const double & _arg)
  {
    this->max_step = _arg;
    return *this;
  }
  Type & set__jump_threshold(
    const double & _arg)
  {
    this->jump_threshold = _arg;
    return *this;
  }
  Type & set__prismatic_jump_threshold(
    const double & _arg)
  {
    this->prismatic_jump_threshold = _arg;
    return *this;
  }
  Type & set__revolute_jump_threshold(
    const double & _arg)
  {
    this->revolute_jump_threshold = _arg;
    return *this;
  }
  Type & set__avoid_collisions(
    const bool & _arg)
  {
    this->avoid_collisions = _arg;
    return *this;
  }
  Type & set__path_constraints(
    const moveit_msgs::msg::Constraints_<ContainerAllocator> & _arg)
  {
    this->path_constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetCartesianPath_Request
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetCartesianPath_Request
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCartesianPath_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->start_state != other.start_state) {
      return false;
    }
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->link_name != other.link_name) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->max_step != other.max_step) {
      return false;
    }
    if (this->jump_threshold != other.jump_threshold) {
      return false;
    }
    if (this->prismatic_jump_threshold != other.prismatic_jump_threshold) {
      return false;
    }
    if (this->revolute_jump_threshold != other.revolute_jump_threshold) {
      return false;
    }
    if (this->avoid_collisions != other.avoid_collisions) {
      return false;
    }
    if (this->path_constraints != other.path_constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCartesianPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCartesianPath_Request_

// alias to use template instance with default allocator
using GetCartesianPath_Request =
  moveit_msgs::srv::GetCartesianPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'start_state'
// already included above
// #include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'solution'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetCartesianPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetCartesianPath_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCartesianPath_Response_
{
  using Type = GetCartesianPath_Response_<ContainerAllocator>;

  explicit GetCartesianPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_state(_init),
    solution(_init),
    error_code(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fraction = 0.0;
    }
  }

  explicit GetCartesianPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_state(_alloc, _init),
    solution(_alloc, _init),
    error_code(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fraction = 0.0;
    }
  }

  // field types and members
  using _start_state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _start_state_type start_state;
  using _solution_type =
    moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>;
  _solution_type solution;
  using _fraction_type =
    double;
  _fraction_type fraction;
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__start_state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->start_state = _arg;
    return *this;
  }
  Type & set__solution(
    const moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> & _arg)
  {
    this->solution = _arg;
    return *this;
  }
  Type & set__fraction(
    const double & _arg)
  {
    this->fraction = _arg;
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
    moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetCartesianPath_Response
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetCartesianPath_Response
    std::shared_ptr<moveit_msgs::srv::GetCartesianPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCartesianPath_Response_ & other) const
  {
    if (this->start_state != other.start_state) {
      return false;
    }
    if (this->solution != other.solution) {
      return false;
    }
    if (this->fraction != other.fraction) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCartesianPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCartesianPath_Response_

// alias to use template instance with default allocator
using GetCartesianPath_Response =
  moveit_msgs::srv::GetCartesianPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GetCartesianPath
{
  using Request = moveit_msgs::srv::GetCartesianPath_Request;
  using Response = moveit_msgs::srv::GetCartesianPath_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_HPP_
