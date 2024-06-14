// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:action/Place.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__PLACE__STRUCT_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__PLACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'place_locations'
#include "moveit_msgs/msg/detail/place_location__struct.hpp"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.hpp"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_Goal __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_Goal __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_Goal_
{
  using Type = Place_Goal_<ContainerAllocator>;

  explicit Place_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_constraints(_init),
    planning_options(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->attached_object_name = "";
      this->place_eef = false;
      this->support_surface_name = "";
      this->allow_gripper_support_collision = false;
      this->planner_id = "";
      this->allowed_planning_time = 0.0;
    }
  }

  explicit Place_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : group_name(_alloc),
    attached_object_name(_alloc),
    support_surface_name(_alloc),
    path_constraints(_alloc, _init),
    planner_id(_alloc),
    planning_options(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->attached_object_name = "";
      this->place_eef = false;
      this->support_surface_name = "";
      this->allow_gripper_support_collision = false;
      this->planner_id = "";
      this->allowed_planning_time = 0.0;
    }
  }

  // field types and members
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _attached_object_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _attached_object_name_type attached_object_name;
  using _place_locations_type =
    std::vector<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>>>;
  _place_locations_type place_locations;
  using _place_eef_type =
    bool;
  _place_eef_type place_eef;
  using _support_surface_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _support_surface_name_type support_surface_name;
  using _allow_gripper_support_collision_type =
    bool;
  _allow_gripper_support_collision_type allow_gripper_support_collision;
  using _path_constraints_type =
    moveit_msgs::msg::Constraints_<ContainerAllocator>;
  _path_constraints_type path_constraints;
  using _planner_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planner_id_type planner_id;
  using _allowed_touch_objects_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _allowed_touch_objects_type allowed_touch_objects;
  using _allowed_planning_time_type =
    double;
  _allowed_planning_time_type allowed_planning_time;
  using _planning_options_type =
    moveit_msgs::msg::PlanningOptions_<ContainerAllocator>;
  _planning_options_type planning_options;

  // setters for named parameter idiom
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__attached_object_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->attached_object_name = _arg;
    return *this;
  }
  Type & set__place_locations(
    const std::vector<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>>> & _arg)
  {
    this->place_locations = _arg;
    return *this;
  }
  Type & set__place_eef(
    const bool & _arg)
  {
    this->place_eef = _arg;
    return *this;
  }
  Type & set__support_surface_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->support_surface_name = _arg;
    return *this;
  }
  Type & set__allow_gripper_support_collision(
    const bool & _arg)
  {
    this->allow_gripper_support_collision = _arg;
    return *this;
  }
  Type & set__path_constraints(
    const moveit_msgs::msg::Constraints_<ContainerAllocator> & _arg)
  {
    this->path_constraints = _arg;
    return *this;
  }
  Type & set__planner_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planner_id = _arg;
    return *this;
  }
  Type & set__allowed_touch_objects(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->allowed_touch_objects = _arg;
    return *this;
  }
  Type & set__allowed_planning_time(
    const double & _arg)
  {
    this->allowed_planning_time = _arg;
    return *this;
  }
  Type & set__planning_options(
    const moveit_msgs::msg::PlanningOptions_<ContainerAllocator> & _arg)
  {
    this->planning_options = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::Place_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_Goal
    std::shared_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_Goal
    std::shared_ptr<moveit_msgs::action::Place_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_Goal_ & other) const
  {
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->attached_object_name != other.attached_object_name) {
      return false;
    }
    if (this->place_locations != other.place_locations) {
      return false;
    }
    if (this->place_eef != other.place_eef) {
      return false;
    }
    if (this->support_surface_name != other.support_surface_name) {
      return false;
    }
    if (this->allow_gripper_support_collision != other.allow_gripper_support_collision) {
      return false;
    }
    if (this->path_constraints != other.path_constraints) {
      return false;
    }
    if (this->planner_id != other.planner_id) {
      return false;
    }
    if (this->allowed_touch_objects != other.allowed_touch_objects) {
      return false;
    }
    if (this->allowed_planning_time != other.allowed_planning_time) {
      return false;
    }
    if (this->planning_options != other.planning_options) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_Goal_

// alias to use template instance with default allocator
using Place_Goal =
  moveit_msgs::action::Place_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'trajectory_stages'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"
// Member 'place_location'
// already included above
// #include "moveit_msgs/msg/detail/place_location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_Result __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_Result __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_Result_
{
  using Type = Place_Result_<ContainerAllocator>;

  explicit Place_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_init),
    trajectory_start(_init),
    place_location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_time = 0.0;
    }
  }

  explicit Place_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_alloc, _init),
    trajectory_start(_alloc, _init),
    place_location(_alloc, _init)
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
  using _trajectory_start_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _trajectory_start_type trajectory_start;
  using _trajectory_stages_type =
    std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>;
  _trajectory_stages_type trajectory_stages;
  using _trajectory_descriptions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _trajectory_descriptions_type trajectory_descriptions;
  using _place_location_type =
    moveit_msgs::msg::PlaceLocation_<ContainerAllocator>;
  _place_location_type place_location;
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
  Type & set__trajectory_start(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->trajectory_start = _arg;
    return *this;
  }
  Type & set__trajectory_stages(
    const std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_stages = _arg;
    return *this;
  }
  Type & set__trajectory_descriptions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->trajectory_descriptions = _arg;
    return *this;
  }
  Type & set__place_location(
    const moveit_msgs::msg::PlaceLocation_<ContainerAllocator> & _arg)
  {
    this->place_location = _arg;
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
    moveit_msgs::action::Place_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_Result
    std::shared_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_Result
    std::shared_ptr<moveit_msgs::action::Place_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->trajectory_start != other.trajectory_start) {
      return false;
    }
    if (this->trajectory_stages != other.trajectory_stages) {
      return false;
    }
    if (this->trajectory_descriptions != other.trajectory_descriptions) {
      return false;
    }
    if (this->place_location != other.place_location) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_Result_

// alias to use template instance with default allocator
using Place_Result =
  moveit_msgs::action::Place_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_Feedback __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_Feedback_
{
  using Type = Place_Feedback_<ContainerAllocator>;

  explicit Place_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit Place_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::Place_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_Feedback
    std::shared_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_Feedback
    std::shared_ptr<moveit_msgs::action::Place_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_Feedback_

// alias to use template instance with default allocator
using Place_Feedback =
  moveit_msgs::action::Place_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_SendGoal_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_SendGoal_Request_
{
  using Type = Place_SendGoal_Request_<ContainerAllocator>;

  explicit Place_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Place_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    moveit_msgs::action::Place_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const moveit_msgs::action::Place_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_SendGoal_Request
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_SendGoal_Request
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_SendGoal_Request_

// alias to use template instance with default allocator
using Place_SendGoal_Request =
  moveit_msgs::action::Place_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_SendGoal_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_SendGoal_Response_
{
  using Type = Place_SendGoal_Response_<ContainerAllocator>;

  explicit Place_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Place_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_SendGoal_Response
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_SendGoal_Response
    std::shared_ptr<moveit_msgs::action::Place_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_SendGoal_Response_

// alias to use template instance with default allocator
using Place_SendGoal_Response =
  moveit_msgs::action::Place_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace action
{

struct Place_SendGoal
{
  using Request = moveit_msgs::action::Place_SendGoal_Request;
  using Response = moveit_msgs::action::Place_SendGoal_Response;
};

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_GetResult_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_GetResult_Request_
{
  using Type = Place_GetResult_Request_<ContainerAllocator>;

  explicit Place_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Place_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_GetResult_Request
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_GetResult_Request
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_GetResult_Request_

// alias to use template instance with default allocator
using Place_GetResult_Request =
  moveit_msgs::action::Place_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_GetResult_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_GetResult_Response_
{
  using Type = Place_GetResult_Response_<ContainerAllocator>;

  explicit Place_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Place_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    moveit_msgs::action::Place_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const moveit_msgs::action::Place_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_GetResult_Response
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_GetResult_Response
    std::shared_ptr<moveit_msgs::action::Place_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_GetResult_Response_

// alias to use template instance with default allocator
using Place_GetResult_Response =
  moveit_msgs::action::Place_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace action
{

struct Place_GetResult
{
  using Request = moveit_msgs::action::Place_GetResult_Request;
  using Response = moveit_msgs::action::Place_GetResult_Response;
};

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__Place_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__Place_FeedbackMessage __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Place_FeedbackMessage_
{
  using Type = Place_FeedbackMessage_<ContainerAllocator>;

  explicit Place_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Place_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    moveit_msgs::action::Place_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const moveit_msgs::action::Place_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__Place_FeedbackMessage
    std::shared_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__Place_FeedbackMessage
    std::shared_ptr<moveit_msgs::action::Place_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Place_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Place_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Place_FeedbackMessage_

// alias to use template instance with default allocator
using Place_FeedbackMessage =
  moveit_msgs::action::Place_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace moveit_msgs
{

namespace action
{

struct Place
{
  /// The goal message defined in the action definition.
  using Goal = moveit_msgs::action::Place_Goal;
  /// The result message defined in the action definition.
  using Result = moveit_msgs::action::Place_Result;
  /// The feedback message defined in the action definition.
  using Feedback = moveit_msgs::action::Place_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = moveit_msgs::action::Place_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = moveit_msgs::action::Place_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = moveit_msgs::action::Place_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Place Place;

}  // namespace action

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__PLACE__STRUCT_HPP_
