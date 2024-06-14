// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pre_grasp_posture'
// Member 'grasp_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"
// Member 'grasp_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'pre_grasp_approach'
// Member 'post_grasp_retreat'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/detail/gripper_translation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__Grasp __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__Grasp __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Grasp_
{
  using Type = Grasp_<ContainerAllocator>;

  explicit Grasp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pre_grasp_posture(_init),
    grasp_posture(_init),
    grasp_pose(_init),
    pre_grasp_approach(_init),
    post_grasp_retreat(_init),
    post_place_retreat(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->grasp_quality = 0.0;
      this->max_contact_force = 0.0f;
    }
  }

  explicit Grasp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    pre_grasp_posture(_alloc, _init),
    grasp_posture(_alloc, _init),
    grasp_pose(_alloc, _init),
    pre_grasp_approach(_alloc, _init),
    post_grasp_retreat(_alloc, _init),
    post_place_retreat(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->grasp_quality = 0.0;
      this->max_contact_force = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _pre_grasp_posture_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _pre_grasp_posture_type pre_grasp_posture;
  using _grasp_posture_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _grasp_posture_type grasp_posture;
  using _grasp_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _grasp_pose_type grasp_pose;
  using _grasp_quality_type =
    double;
  _grasp_quality_type grasp_quality;
  using _pre_grasp_approach_type =
    moveit_msgs::msg::GripperTranslation_<ContainerAllocator>;
  _pre_grasp_approach_type pre_grasp_approach;
  using _post_grasp_retreat_type =
    moveit_msgs::msg::GripperTranslation_<ContainerAllocator>;
  _post_grasp_retreat_type post_grasp_retreat;
  using _post_place_retreat_type =
    moveit_msgs::msg::GripperTranslation_<ContainerAllocator>;
  _post_place_retreat_type post_place_retreat;
  using _max_contact_force_type =
    float;
  _max_contact_force_type max_contact_force;
  using _allowed_touch_objects_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _allowed_touch_objects_type allowed_touch_objects;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pre_grasp_posture(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->pre_grasp_posture = _arg;
    return *this;
  }
  Type & set__grasp_posture(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->grasp_posture = _arg;
    return *this;
  }
  Type & set__grasp_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->grasp_pose = _arg;
    return *this;
  }
  Type & set__grasp_quality(
    const double & _arg)
  {
    this->grasp_quality = _arg;
    return *this;
  }
  Type & set__pre_grasp_approach(
    const moveit_msgs::msg::GripperTranslation_<ContainerAllocator> & _arg)
  {
    this->pre_grasp_approach = _arg;
    return *this;
  }
  Type & set__post_grasp_retreat(
    const moveit_msgs::msg::GripperTranslation_<ContainerAllocator> & _arg)
  {
    this->post_grasp_retreat = _arg;
    return *this;
  }
  Type & set__post_place_retreat(
    const moveit_msgs::msg::GripperTranslation_<ContainerAllocator> & _arg)
  {
    this->post_place_retreat = _arg;
    return *this;
  }
  Type & set__max_contact_force(
    const float & _arg)
  {
    this->max_contact_force = _arg;
    return *this;
  }
  Type & set__allowed_touch_objects(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->allowed_touch_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::Grasp_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::Grasp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::Grasp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::Grasp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__Grasp
    std::shared_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__Grasp
    std::shared_ptr<moveit_msgs::msg::Grasp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grasp_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pre_grasp_posture != other.pre_grasp_posture) {
      return false;
    }
    if (this->grasp_posture != other.grasp_posture) {
      return false;
    }
    if (this->grasp_pose != other.grasp_pose) {
      return false;
    }
    if (this->grasp_quality != other.grasp_quality) {
      return false;
    }
    if (this->pre_grasp_approach != other.pre_grasp_approach) {
      return false;
    }
    if (this->post_grasp_retreat != other.post_grasp_retreat) {
      return false;
    }
    if (this->post_place_retreat != other.post_place_retreat) {
      return false;
    }
    if (this->max_contact_force != other.max_contact_force) {
      return false;
    }
    if (this->allowed_touch_objects != other.allowed_touch_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grasp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grasp_

// alias to use template instance with default allocator
using Grasp =
  moveit_msgs::msg::Grasp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_HPP_
