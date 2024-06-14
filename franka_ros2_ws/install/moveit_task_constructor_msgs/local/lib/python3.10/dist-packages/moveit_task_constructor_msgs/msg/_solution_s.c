// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_task_constructor_msgs:msg/Solution.idl
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
#include "moveit_task_constructor_msgs/msg/detail/solution__struct.h"
#include "moveit_task_constructor_msgs/msg/detail/solution__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "moveit_task_constructor_msgs/msg/detail/sub_solution__functions.h"
#include "moveit_task_constructor_msgs/msg/detail/sub_trajectory__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool moveit_msgs__msg__planning_scene__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_msgs__msg__planning_scene__convert_to_py(void * raw_ros_message);
bool moveit_task_constructor_msgs__msg__sub_solution__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_task_constructor_msgs__msg__sub_solution__convert_to_py(void * raw_ros_message);
bool moveit_task_constructor_msgs__msg__sub_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_task_constructor_msgs__msg__sub_trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_task_constructor_msgs__msg__solution__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("moveit_task_constructor_msgs.msg._solution.Solution", full_classname_dest, 51) == 0);
  }
  moveit_task_constructor_msgs__msg__Solution * ros_message = _ros_message;
  {  // task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // start_scene
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_scene");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__planning_scene__convert_from_py(field, &ros_message->start_scene)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sub_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "sub_solution");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sub_solution'");
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
    if (!moveit_task_constructor_msgs__msg__SubSolution__Sequence__init(&(ros_message->sub_solution), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_task_constructor_msgs__msg__SubSolution__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_task_constructor_msgs__msg__SubSolution * dest = ros_message->sub_solution.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_task_constructor_msgs__msg__sub_solution__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // sub_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "sub_trajectory");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sub_trajectory'");
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
    if (!moveit_task_constructor_msgs__msg__SubTrajectory__Sequence__init(&(ros_message->sub_trajectory), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_task_constructor_msgs__msg__SubTrajectory__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_task_constructor_msgs__msg__SubTrajectory * dest = ros_message->sub_trajectory.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_task_constructor_msgs__msg__sub_trajectory__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_task_constructor_msgs__msg__solution__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Solution */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_task_constructor_msgs.msg._solution");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Solution");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_task_constructor_msgs__msg__Solution * ros_message = (moveit_task_constructor_msgs__msg__Solution *)raw_ros_message;
  {  // task_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_id.data,
      strlen(ros_message->task_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_scene
    PyObject * field = NULL;
    field = moveit_msgs__msg__planning_scene__convert_to_py(&ros_message->start_scene);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_scene", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sub_solution
    PyObject * field = NULL;
    size_t size = ros_message->sub_solution.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_task_constructor_msgs__msg__SubSolution * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sub_solution.data[i]);
      PyObject * pyitem = moveit_task_constructor_msgs__msg__sub_solution__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sub_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sub_trajectory
    PyObject * field = NULL;
    size_t size = ros_message->sub_trajectory.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_task_constructor_msgs__msg__SubTrajectory * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sub_trajectory.data[i]);
      PyObject * pyitem = moveit_task_constructor_msgs__msg__sub_trajectory__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sub_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
