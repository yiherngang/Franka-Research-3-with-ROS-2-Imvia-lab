// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/detail/motion_plan_request__struct.h"
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "moveit_msgs/msg/detail/constraints__functions.h"
#include "moveit_msgs/msg/detail/generic_trajectory__functions.h"
// end nested array functions include
bool moveit_msgs__msg__workspace_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__workspace_parameters__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__robot_state__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__constraints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__constraints__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__constraints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__constraints__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__trajectory_constraints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__trajectory_constraints__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__generic_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__generic_trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__motion_plan_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("moveit_msgs.msg._motion_plan_request.MotionPlanRequest", full_classname_dest, 54) == 0);
  }
  moveit_msgs__msg__MotionPlanRequest * ros_message = _ros_message;
  {  // workspace_parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "workspace_parameters");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__workspace_parameters__convert_from_py(field, &ros_message->workspace_parameters)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // start_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_state");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__robot_state__convert_from_py(field, &ros_message->start_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'goal_constraints'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!moveit_msgs__msg__Constraints__Sequence__init(&(ros_message->goal_constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__Constraints__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__Constraints * dest = ros_message->goal_constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__constraints__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // path_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_constraints");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__constraints__convert_from_py(field, &ros_message->path_constraints)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trajectory_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_constraints");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__trajectory_constraints__convert_from_py(field, &ros_message->trajectory_constraints)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reference_trajectories
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_trajectories");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'reference_trajectories'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!moveit_msgs__msg__GenericTrajectory__Sequence__init(&(ros_message->reference_trajectories), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__GenericTrajectory__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__GenericTrajectory * dest = ros_message->reference_trajectories.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__generic_trajectory__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // pipeline_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "pipeline_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pipeline_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // planner_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "planner_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->planner_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // group_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->group_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // num_planning_attempts
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_planning_attempts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_planning_attempts = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // allowed_planning_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "allowed_planning_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->allowed_planning_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_velocity_scaling_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_velocity_scaling_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_velocity_scaling_factor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_acceleration_scaling_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration_scaling_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration_scaling_factor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cartesian_speed_end_effector_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_speed_end_effector_link");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->cartesian_speed_end_effector_link, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // max_cartesian_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_cartesian_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_cartesian_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__motion_plan_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotionPlanRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._motion_plan_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotionPlanRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__MotionPlanRequest * ros_message = (moveit_msgs__msg__MotionPlanRequest *)raw_ros_message;
  {  // workspace_parameters
    PyObject * field = NULL;
    field = moveit_msgs__msg__workspace_parameters__convert_to_py(&ros_message->workspace_parameters);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "workspace_parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_state
    PyObject * field = NULL;
    field = moveit_msgs__msg__robot_state__convert_to_py(&ros_message->start_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_constraints
    PyObject * field = NULL;
    size_t size = ros_message->goal_constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__Constraints * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->goal_constraints.data[i]);
      PyObject * pyitem = moveit_msgs__msg__constraints__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_constraints
    PyObject * field = NULL;
    field = moveit_msgs__msg__constraints__convert_to_py(&ros_message->path_constraints);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_constraints
    PyObject * field = NULL;
    field = moveit_msgs__msg__trajectory_constraints__convert_to_py(&ros_message->trajectory_constraints);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_trajectories
    PyObject * field = NULL;
    size_t size = ros_message->reference_trajectories.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__GenericTrajectory * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->reference_trajectories.data[i]);
      PyObject * pyitem = moveit_msgs__msg__generic_trajectory__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_trajectories", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pipeline_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pipeline_id.data,
      strlen(ros_message->pipeline_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pipeline_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planner_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->planner_id.data,
      strlen(ros_message->planner_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planner_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->group_name.data,
      strlen(ros_message->group_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_planning_attempts
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_planning_attempts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_planning_attempts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // allowed_planning_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->allowed_planning_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "allowed_planning_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_velocity_scaling_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_velocity_scaling_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_velocity_scaling_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration_scaling_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration_scaling_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration_scaling_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_speed_end_effector_link
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->cartesian_speed_end_effector_link.data,
      strlen(ros_message->cartesian_speed_end_effector_link.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_speed_end_effector_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_cartesian_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_cartesian_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_cartesian_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
