// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:action/GlobalPlanner.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__GLOBAL_PLANNER__STRUCT_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__GLOBAL_PLANNER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'motion_sequence'
#include "moveit_msgs/msg/detail/motion_sequence_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_Goal __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_Goal __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_Goal_
{
  using Type = GlobalPlanner_Goal_<ContainerAllocator>;

  explicit GlobalPlanner_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion_sequence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_group = "";
    }
  }

  explicit GlobalPlanner_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_group(_alloc),
    motion_sequence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_group = "";
    }
  }

  // field types and members
  using _planning_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_group_type planning_group;
  using _motion_sequence_type =
    moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>;
  _motion_sequence_type motion_sequence;

  // setters for named parameter idiom
  Type & set__planning_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_group = _arg;
    return *this;
  }
  Type & set__motion_sequence(
    const moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> & _arg)
  {
    this->motion_sequence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_Goal
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_Goal
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_Goal_ & other) const
  {
    if (this->planning_group != other.planning_group) {
      return false;
    }
    if (this->motion_sequence != other.motion_sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_Goal_

// alias to use template instance with default allocator
using GlobalPlanner_Goal =
  moveit_msgs::action::GlobalPlanner_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'response'
#include "moveit_msgs/msg/detail/motion_plan_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_Result __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_Result __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_Result_
{
  using Type = GlobalPlanner_Result_<ContainerAllocator>;

  explicit GlobalPlanner_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit GlobalPlanner_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    moveit_msgs::msg::MotionPlanResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const moveit_msgs::msg::MotionPlanResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_Result
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_Result
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_Result_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_Result_

// alias to use template instance with default allocator
using GlobalPlanner_Result =
  moveit_msgs::action::GlobalPlanner_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_Feedback __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_Feedback_
{
  using Type = GlobalPlanner_Feedback_<ContainerAllocator>;

  explicit GlobalPlanner_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit GlobalPlanner_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_Feedback
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_Feedback
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_Feedback_

// alias to use template instance with default allocator
using GlobalPlanner_Feedback =
  moveit_msgs::action::GlobalPlanner_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/global_planner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_SendGoal_Request_
{
  using Type = GlobalPlanner_SendGoal_Request_<ContainerAllocator>;

  explicit GlobalPlanner_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GlobalPlanner_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const moveit_msgs::action::GlobalPlanner_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Request
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Request
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_SendGoal_Request_

// alias to use template instance with default allocator
using GlobalPlanner_SendGoal_Request =
  moveit_msgs::action::GlobalPlanner_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_SendGoal_Response_
{
  using Type = GlobalPlanner_SendGoal_Response_<ContainerAllocator>;

  explicit GlobalPlanner_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GlobalPlanner_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Response
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_SendGoal_Response
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_SendGoal_Response_

// alias to use template instance with default allocator
using GlobalPlanner_SendGoal_Response =
  moveit_msgs::action::GlobalPlanner_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace action
{

struct GlobalPlanner_SendGoal
{
  using Request = moveit_msgs::action::GlobalPlanner_SendGoal_Request;
  using Response = moveit_msgs::action::GlobalPlanner_SendGoal_Response;
};

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_GetResult_Request_
{
  using Type = GlobalPlanner_GetResult_Request_<ContainerAllocator>;

  explicit GlobalPlanner_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GlobalPlanner_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Request
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Request
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_GetResult_Request_

// alias to use template instance with default allocator
using GlobalPlanner_GetResult_Request =
  moveit_msgs::action::GlobalPlanner_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_GetResult_Response_
{
  using Type = GlobalPlanner_GetResult_Response_<ContainerAllocator>;

  explicit GlobalPlanner_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GlobalPlanner_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const moveit_msgs::action::GlobalPlanner_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Response
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_GetResult_Response
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_GetResult_Response_

// alias to use template instance with default allocator
using GlobalPlanner_GetResult_Response =
  moveit_msgs::action::GlobalPlanner_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace action
{

struct GlobalPlanner_GetResult
{
  using Request = moveit_msgs::action::GlobalPlanner_GetResult_Request;
  using Response = moveit_msgs::action::GlobalPlanner_GetResult_Response;
};

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__GlobalPlanner_FeedbackMessage __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GlobalPlanner_FeedbackMessage_
{
  using Type = GlobalPlanner_FeedbackMessage_<ContainerAllocator>;

  explicit GlobalPlanner_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GlobalPlanner_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const moveit_msgs::action::GlobalPlanner_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_FeedbackMessage
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__GlobalPlanner_FeedbackMessage
    std::shared_ptr<moveit_msgs::action::GlobalPlanner_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPlanner_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPlanner_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPlanner_FeedbackMessage_

// alias to use template instance with default allocator
using GlobalPlanner_FeedbackMessage =
  moveit_msgs::action::GlobalPlanner_FeedbackMessage_<std::allocator<void>>;

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

struct GlobalPlanner
{
  /// The goal message defined in the action definition.
  using Goal = moveit_msgs::action::GlobalPlanner_Goal;
  /// The result message defined in the action definition.
  using Result = moveit_msgs::action::GlobalPlanner_Result;
  /// The feedback message defined in the action definition.
  using Feedback = moveit_msgs::action::GlobalPlanner_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = moveit_msgs::action::GlobalPlanner_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = moveit_msgs::action::GlobalPlanner_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = moveit_msgs::action::GlobalPlanner_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GlobalPlanner GlobalPlanner;

}  // namespace action

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__GLOBAL_PLANNER__STRUCT_HPP_
