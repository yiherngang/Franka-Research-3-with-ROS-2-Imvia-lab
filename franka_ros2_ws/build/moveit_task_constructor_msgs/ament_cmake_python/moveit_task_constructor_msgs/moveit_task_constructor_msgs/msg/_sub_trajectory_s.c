// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_task_constructor_msgs:msg/SubTrajectory.idl
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
#include "moveit_task_constructor_msgs/msg/detail/sub_trajectory__struct.h"
#include "moveit_task_constructor_msgs/msg/detail/sub_trajectory__functions.h"

bool moveit_task_constructor_msgs__msg__solution_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_task_constructor_msgs__msg__solution_info__convert_to_py(void * raw_ros_message);
bool moveit_task_constructor_msgs__msg__trajectory_execution_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_task_constructor_msgs__msg__trajectory_execution_info__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool moveit_msgs__msg__robot_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_msgs__msg__robot_trajectory__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool moveit_msgs__msg__planning_scene__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_msgs__msg__planning_scene__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_task_constructor_msgs__msg__sub_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("moveit_task_constructor_msgs.msg._sub_trajectory.SubTrajectory", full_classname_dest, 62) == 0);
  }
  moveit_task_constructor_msgs__msg__SubTrajectory * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!moveit_task_constructor_msgs__msg__solution_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // execution_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "execution_info");
    if (!field) {
      return false;
    }
    if (!moveit_task_constructor_msgs__msg__trajectory_execution_info__convert_from_py(field, &ros_message->execution_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__robot_trajectory__convert_from_py(field, &ros_message->trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scene_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "scene_diff");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__planning_scene__convert_from_py(field, &ros_message->scene_diff)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_task_constructor_msgs__msg__sub_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SubTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_task_constructor_msgs.msg._sub_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SubTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_task_constructor_msgs__msg__SubTrajectory * ros_message = (moveit_task_constructor_msgs__msg__SubTrajectory *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = moveit_task_constructor_msgs__msg__solution_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // execution_info
    PyObject * field = NULL;
    field = moveit_task_constructor_msgs__msg__trajectory_execution_info__convert_to_py(&ros_message->execution_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "execution_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory
    PyObject * field = NULL;
    field = moveit_msgs__msg__robot_trajectory__convert_to_py(&ros_message->trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scene_diff
    PyObject * field = NULL;
    field = moveit_msgs__msg__planning_scene__convert_to_py(&ros_message->scene_diff);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scene_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
