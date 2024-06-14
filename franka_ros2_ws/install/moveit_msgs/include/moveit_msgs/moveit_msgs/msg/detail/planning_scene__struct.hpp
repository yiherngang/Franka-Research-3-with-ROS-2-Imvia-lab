// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'fixed_frame_transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"
// Member 'allowed_collision_matrix'
#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.hpp"
// Member 'link_padding'
#include "moveit_msgs/msg/detail/link_padding__struct.hpp"
// Member 'link_scale'
#include "moveit_msgs/msg/detail/link_scale__struct.hpp"
// Member 'object_colors'
#include "moveit_msgs/msg/detail/object_color__struct.hpp"
// Member 'world'
#include "moveit_msgs/msg/detail/planning_scene_world__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PlanningScene __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PlanningScene __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningScene_
{
  using Type = PlanningScene_<ContainerAllocator>;

  explicit PlanningScene_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_state(_init),
    allowed_collision_matrix(_init),
    world(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->robot_model_name = "";
      this->is_diff = false;
    }
  }

  explicit PlanningScene_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    robot_state(_alloc, _init),
    robot_model_name(_alloc),
    allowed_collision_matrix(_alloc, _init),
    world(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->robot_model_name = "";
      this->is_diff = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _robot_state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _robot_state_type robot_state;
  using _robot_model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_model_name_type robot_model_name;
  using _fixed_frame_transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>>;
  _fixed_frame_transforms_type fixed_frame_transforms;
  using _allowed_collision_matrix_type =
    moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator>;
  _allowed_collision_matrix_type allowed_collision_matrix;
  using _link_padding_type =
    std::vector<moveit_msgs::msg::LinkPadding_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::LinkPadding_<ContainerAllocator>>>;
  _link_padding_type link_padding;
  using _link_scale_type =
    std::vector<moveit_msgs::msg::LinkScale_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::LinkScale_<ContainerAllocator>>>;
  _link_scale_type link_scale;
  using _object_colors_type =
    std::vector<moveit_msgs::msg::ObjectColor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ObjectColor_<ContainerAllocator>>>;
  _object_colors_type object_colors;
  using _world_type =
    moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>;
  _world_type world;
  using _is_diff_type =
    bool;
  _is_diff_type is_diff;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__robot_state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }
  Type & set__robot_model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_model_name = _arg;
    return *this;
  }
  Type & set__fixed_frame_transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>> & _arg)
  {
    this->fixed_frame_transforms = _arg;
    return *this;
  }
  Type & set__allowed_collision_matrix(
    const moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator> & _arg)
  {
    this->allowed_collision_matrix = _arg;
    return *this;
  }
  Type & set__link_padding(
    const std::vector<moveit_msgs::msg::LinkPadding_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::LinkPadding_<ContainerAllocator>>> & _arg)
  {
    this->link_padding = _arg;
    return *this;
  }
  Type & set__link_scale(
    const std::vector<moveit_msgs::msg::LinkScale_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::LinkScale_<ContainerAllocator>>> & _arg)
  {
    this->link_scale = _arg;
    return *this;
  }
  Type & set__object_colors(
    const std::vector<moveit_msgs::msg::ObjectColor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ObjectColor_<ContainerAllocator>>> & _arg)
  {
    this->object_colors = _arg;
    return *this;
  }
  Type & set__world(
    const moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> & _arg)
  {
    this->world = _arg;
    return *this;
  }
  Type & set__is_diff(
    const bool & _arg)
  {
    this->is_diff = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PlanningScene_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PlanningScene_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningScene_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlanningScene_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PlanningScene
    std::shared_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PlanningScene
    std::shared_ptr<moveit_msgs::msg::PlanningScene_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningScene_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->robot_state != other.robot_state) {
      return false;
    }
    if (this->robot_model_name != other.robot_model_name) {
      return false;
    }
    if (this->fixed_frame_transforms != other.fixed_frame_transforms) {
      return false;
    }
    if (this->allowed_collision_matrix != other.allowed_collision_matrix) {
      return false;
    }
    if (this->link_padding != other.link_padding) {
      return false;
    }
    if (this->link_scale != other.link_scale) {
      return false;
    }
    if (this->object_colors != other.object_colors) {
      return false;
    }
    if (this->world != other.world) {
      return false;
    }
    if (this->is_diff != other.is_diff) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningScene_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningScene_

// alias to use template instance with default allocator
using PlanningScene =
  moveit_msgs::msg::PlanningScene_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__STRUCT_HPP_
