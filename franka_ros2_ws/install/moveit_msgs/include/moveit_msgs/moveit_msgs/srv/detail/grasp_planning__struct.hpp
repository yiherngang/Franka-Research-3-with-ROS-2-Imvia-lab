// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
// Member 'movable_obstacles'
#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
// Member 'candidate_grasps'
#include "moveit_msgs/msg/detail/grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GraspPlanning_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GraspPlanning_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GraspPlanning_Request_
{
  using Type = GraspPlanning_Request_<ContainerAllocator>;

  explicit GraspPlanning_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  explicit GraspPlanning_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : group_name(_alloc),
    target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  // field types and members
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _target_type =
    moveit_msgs::msg::CollisionObject_<ContainerAllocator>;
  _target_type target;
  using _support_surfaces_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _support_surfaces_type support_surfaces;
  using _candidate_grasps_type =
    std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Grasp_<ContainerAllocator>>>;
  _candidate_grasps_type candidate_grasps;
  using _movable_obstacles_type =
    std::vector<moveit_msgs::msg::CollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>>;
  _movable_obstacles_type movable_obstacles;

  // setters for named parameter idiom
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__target(
    const moveit_msgs::msg::CollisionObject_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__support_surfaces(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->support_surfaces = _arg;
    return *this;
  }
  Type & set__candidate_grasps(
    const std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Grasp_<ContainerAllocator>>> & _arg)
  {
    this->candidate_grasps = _arg;
    return *this;
  }
  Type & set__movable_obstacles(
    const std::vector<moveit_msgs::msg::CollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>> & _arg)
  {
    this->movable_obstacles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GraspPlanning_Request
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GraspPlanning_Request
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspPlanning_Request_ & other) const
  {
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->support_surfaces != other.support_surfaces) {
      return false;
    }
    if (this->candidate_grasps != other.candidate_grasps) {
      return false;
    }
    if (this->movable_obstacles != other.movable_obstacles) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspPlanning_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspPlanning_Request_

// alias to use template instance with default allocator
using GraspPlanning_Request =
  moveit_msgs::srv::GraspPlanning_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'grasps'
// already included above
// #include "moveit_msgs/msg/detail/grasp__struct.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GraspPlanning_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GraspPlanning_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GraspPlanning_Response_
{
  using Type = GraspPlanning_Response_<ContainerAllocator>;

  explicit GraspPlanning_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_init)
  {
    (void)_init;
  }

  explicit GraspPlanning_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _grasps_type =
    std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Grasp_<ContainerAllocator>>>;
  _grasps_type grasps;
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__grasps(
    const std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Grasp_<ContainerAllocator>>> & _arg)
  {
    this->grasps = _arg;
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
    moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GraspPlanning_Response
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GraspPlanning_Response
    std::shared_ptr<moveit_msgs::srv::GraspPlanning_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspPlanning_Response_ & other) const
  {
    if (this->grasps != other.grasps) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspPlanning_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspPlanning_Response_

// alias to use template instance with default allocator
using GraspPlanning_Response =
  moveit_msgs::srv::GraspPlanning_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GraspPlanning
{
  using Request = moveit_msgs::srv::GraspPlanning_Request;
  using Response = moveit_msgs::srv::GraspPlanning_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__STRUCT_HPP_
