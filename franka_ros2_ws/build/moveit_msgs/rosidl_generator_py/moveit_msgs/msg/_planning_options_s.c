// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/PlanningOptions.idl
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
#include "moveit_msgs/msg/detail/planning_options__struct.h"
#include "moveit_msgs/msg/detail/planning_options__functions.h"

bool moveit_msgs__msg__planning_scene__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__planning_scene__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__planning_options__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("moveit_msgs.msg._planning_options.PlanningOptions", full_classname_dest, 49) == 0);
  }
  moveit_msgs__msg__PlanningOptions * ros_message = _ros_message;
  {  // planning_scene_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "planning_scene_diff");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__planning_scene__convert_from_py(field, &ros_message->planning_scene_diff)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // plan_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_only");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->plan_only = (Py_True == field);
    Py_DECREF(field);
  }
  {  // look_around
    PyObject * field = PyObject_GetAttrString(_pymsg, "look_around");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->look_around = (Py_True == field);
    Py_DECREF(field);
  }
  {  // look_around_attempts
    PyObject * field = PyObject_GetAttrString(_pymsg, "look_around_attempts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->look_around_attempts = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // max_safe_execution_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_safe_execution_cost");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_safe_execution_cost = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // replan
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->replan = (Py_True == field);
    Py_DECREF(field);
  }
  {  // replan_attempts
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_attempts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replan_attempts = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // replan_delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_delay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->replan_delay = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__planning_options__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanningOptions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._planning_options");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanningOptions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__PlanningOptions * ros_message = (moveit_msgs__msg__PlanningOptions *)raw_ros_message;
  {  // planning_scene_diff
    PyObject * field = NULL;
    field = moveit_msgs__msg__planning_scene__convert_to_py(&ros_message->planning_scene_diff);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planning_scene_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_only
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->plan_only ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // look_around
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->look_around ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "look_around", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // look_around_attempts
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->look_around_attempts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "look_around_attempts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_safe_execution_cost
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_safe_execution_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_safe_execution_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->replan ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_attempts
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->replan_attempts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_attempts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_delay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->replan_delay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
