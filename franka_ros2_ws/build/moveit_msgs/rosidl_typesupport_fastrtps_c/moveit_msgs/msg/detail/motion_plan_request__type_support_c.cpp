// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_plan_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/detail/motion_plan_request__struct.h"
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_msgs/msg/detail/constraints__functions.h"  // goal_constraints, path_constraints
#include "moveit_msgs/msg/detail/generic_trajectory__functions.h"  // reference_trajectories
#include "moveit_msgs/msg/detail/robot_state__functions.h"  // start_state
#include "moveit_msgs/msg/detail/trajectory_constraints__functions.h"  // trajectory_constraints
#include "moveit_msgs/msg/detail/workspace_parameters__functions.h"  // workspace_parameters
#include "rosidl_runtime_c/string.h"  // cartesian_speed_end_effector_link, group_name, pipeline_id, planner_id
#include "rosidl_runtime_c/string_functions.h"  // cartesian_speed_end_effector_link, group_name, pipeline_id, planner_id

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__Constraints(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__Constraints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints)();
size_t get_serialized_size_moveit_msgs__msg__GenericTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__GenericTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, GenericTrajectory)();
size_t get_serialized_size_moveit_msgs__msg__RobotState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState)();
size_t get_serialized_size_moveit_msgs__msg__TrajectoryConstraints(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__TrajectoryConstraints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, TrajectoryConstraints)();
size_t get_serialized_size_moveit_msgs__msg__WorkspaceParameters(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__WorkspaceParameters(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, WorkspaceParameters)();


using _MotionPlanRequest__ros_msg_type = moveit_msgs__msg__MotionPlanRequest;

static bool _MotionPlanRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionPlanRequest__ros_msg_type * ros_message = static_cast<const _MotionPlanRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: workspace_parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, WorkspaceParameters
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->workspace_parameters, cdr))
    {
      return false;
    }
  }

  // Field name: start_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_state, cdr))
    {
      return false;
    }
  }

  // Field name: goal_constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints
      )()->data);
    size_t size = ros_message->goal_constraints.size;
    auto array_ptr = ros_message->goal_constraints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: path_constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path_constraints, cdr))
    {
      return false;
    }
  }

  // Field name: trajectory_constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, TrajectoryConstraints
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory_constraints, cdr))
    {
      return false;
    }
  }

  // Field name: reference_trajectories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, GenericTrajectory
      )()->data);
    size_t size = ros_message->reference_trajectories.size;
    auto array_ptr = ros_message->reference_trajectories.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: pipeline_id
  {
    const rosidl_runtime_c__String * str = &ros_message->pipeline_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: planner_id
  {
    const rosidl_runtime_c__String * str = &ros_message->planner_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: group_name
  {
    const rosidl_runtime_c__String * str = &ros_message->group_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: num_planning_attempts
  {
    cdr << ros_message->num_planning_attempts;
  }

  // Field name: allowed_planning_time
  {
    cdr << ros_message->allowed_planning_time;
  }

  // Field name: max_velocity_scaling_factor
  {
    cdr << ros_message->max_velocity_scaling_factor;
  }

  // Field name: max_acceleration_scaling_factor
  {
    cdr << ros_message->max_acceleration_scaling_factor;
  }

  // Field name: cartesian_speed_end_effector_link
  {
    const rosidl_runtime_c__String * str = &ros_message->cartesian_speed_end_effector_link;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: max_cartesian_speed
  {
    cdr << ros_message->max_cartesian_speed;
  }

  return true;
}

static bool _MotionPlanRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionPlanRequest__ros_msg_type * ros_message = static_cast<_MotionPlanRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: workspace_parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, WorkspaceParameters
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->workspace_parameters))
    {
      return false;
    }
  }

  // Field name: start_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_state))
    {
      return false;
    }
  }

  // Field name: goal_constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->goal_constraints.data) {
      moveit_msgs__msg__Constraints__Sequence__fini(&ros_message->goal_constraints);
    }
    if (!moveit_msgs__msg__Constraints__Sequence__init(&ros_message->goal_constraints, size)) {
      fprintf(stderr, "failed to create array for field 'goal_constraints'");
      return false;
    }
    auto array_ptr = ros_message->goal_constraints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: path_constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path_constraints))
    {
      return false;
    }
  }

  // Field name: trajectory_constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, TrajectoryConstraints
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory_constraints))
    {
      return false;
    }
  }

  // Field name: reference_trajectories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, GenericTrajectory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->reference_trajectories.data) {
      moveit_msgs__msg__GenericTrajectory__Sequence__fini(&ros_message->reference_trajectories);
    }
    if (!moveit_msgs__msg__GenericTrajectory__Sequence__init(&ros_message->reference_trajectories, size)) {
      fprintf(stderr, "failed to create array for field 'reference_trajectories'");
      return false;
    }
    auto array_ptr = ros_message->reference_trajectories.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: pipeline_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pipeline_id.data) {
      rosidl_runtime_c__String__init(&ros_message->pipeline_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pipeline_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pipeline_id'\n");
      return false;
    }
  }

  // Field name: planner_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->planner_id.data) {
      rosidl_runtime_c__String__init(&ros_message->planner_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->planner_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'planner_id'\n");
      return false;
    }
  }

  // Field name: group_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->group_name.data) {
      rosidl_runtime_c__String__init(&ros_message->group_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->group_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'group_name'\n");
      return false;
    }
  }

  // Field name: num_planning_attempts
  {
    cdr >> ros_message->num_planning_attempts;
  }

  // Field name: allowed_planning_time
  {
    cdr >> ros_message->allowed_planning_time;
  }

  // Field name: max_velocity_scaling_factor
  {
    cdr >> ros_message->max_velocity_scaling_factor;
  }

  // Field name: max_acceleration_scaling_factor
  {
    cdr >> ros_message->max_acceleration_scaling_factor;
  }

  // Field name: cartesian_speed_end_effector_link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cartesian_speed_end_effector_link.data) {
      rosidl_runtime_c__String__init(&ros_message->cartesian_speed_end_effector_link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cartesian_speed_end_effector_link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cartesian_speed_end_effector_link'\n");
      return false;
    }
  }

  // Field name: max_cartesian_speed
  {
    cdr >> ros_message->max_cartesian_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__MotionPlanRequest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionPlanRequest__ros_msg_type * ros_message = static_cast<const _MotionPlanRequest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name workspace_parameters

  current_alignment += get_serialized_size_moveit_msgs__msg__WorkspaceParameters(
    &(ros_message->workspace_parameters), current_alignment);
  // field.name start_state

  current_alignment += get_serialized_size_moveit_msgs__msg__RobotState(
    &(ros_message->start_state), current_alignment);
  // field.name goal_constraints
  {
    size_t array_size = ros_message->goal_constraints.size;
    auto array_ptr = ros_message->goal_constraints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__Constraints(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name path_constraints

  current_alignment += get_serialized_size_moveit_msgs__msg__Constraints(
    &(ros_message->path_constraints), current_alignment);
  // field.name trajectory_constraints

  current_alignment += get_serialized_size_moveit_msgs__msg__TrajectoryConstraints(
    &(ros_message->trajectory_constraints), current_alignment);
  // field.name reference_trajectories
  {
    size_t array_size = ros_message->reference_trajectories.size;
    auto array_ptr = ros_message->reference_trajectories.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__GenericTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name pipeline_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pipeline_id.size + 1);
  // field.name planner_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->planner_id.size + 1);
  // field.name group_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->group_name.size + 1);
  // field.name num_planning_attempts
  {
    size_t item_size = sizeof(ros_message->num_planning_attempts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name allowed_planning_time
  {
    size_t item_size = sizeof(ros_message->allowed_planning_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_velocity_scaling_factor
  {
    size_t item_size = sizeof(ros_message->max_velocity_scaling_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_acceleration_scaling_factor
  {
    size_t item_size = sizeof(ros_message->max_acceleration_scaling_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_speed_end_effector_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cartesian_speed_end_effector_link.size + 1);
  // field.name max_cartesian_speed
  {
    size_t item_size = sizeof(ros_message->max_cartesian_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionPlanRequest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__MotionPlanRequest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__MotionPlanRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: workspace_parameters
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__WorkspaceParameters(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: start_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__RobotState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: goal_constraints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__Constraints(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: path_constraints
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__Constraints(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trajectory_constraints
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__TrajectoryConstraints(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: reference_trajectories
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__GenericTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pipeline_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: planner_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: group_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: num_planning_attempts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: allowed_planning_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_velocity_scaling_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_acceleration_scaling_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cartesian_speed_end_effector_link
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: max_cartesian_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__msg__MotionPlanRequest;
    is_plain =
      (
      offsetof(DataType, max_cartesian_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotionPlanRequest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__msg__MotionPlanRequest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionPlanRequest = {
  "moveit_msgs::msg",
  "MotionPlanRequest",
  _MotionPlanRequest__cdr_serialize,
  _MotionPlanRequest__cdr_deserialize,
  _MotionPlanRequest__get_serialized_size,
  _MotionPlanRequest__max_serialized_size
};

static rosidl_message_type_support_t _MotionPlanRequest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionPlanRequest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionPlanRequest)() {
  return &_MotionPlanRequest__type_support;
}

#if defined(__cplusplus)
}
#endif
