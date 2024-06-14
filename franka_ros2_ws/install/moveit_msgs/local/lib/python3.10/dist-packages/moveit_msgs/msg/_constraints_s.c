// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/Constraints.idl
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
#include "moveit_msgs/msg/detail/constraints__struct.h"
#include "moveit_msgs/msg/detail/constraints__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "moveit_msgs/msg/detail/joint_constraint__functions.h"
#include "moveit_msgs/msg/detail/orientation_constraint__functions.h"
#include "moveit_msgs/msg/detail/position_constraint__functions.h"
#include "moveit_msgs/msg/detail/visibility_constraint__functions.h"
// end nested array functions include
bool moveit_msgs__msg__joint_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__joint_constraint__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__position_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__position_constraint__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__orientation_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__orientation_constraint__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__visibility_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__visibility_constraint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__constraints__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("moveit_msgs.msg._constraints.Constraints", full_classname_dest, 40) == 0);
  }
  moveit_msgs__msg__Constraints * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // joint_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'joint_constraints'");
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
    if (!moveit_msgs__msg__JointConstraint__Sequence__init(&(ros_message->joint_constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__JointConstraint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__JointConstraint * dest = ros_message->joint_constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__joint_constraint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // position_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'position_constraints'");
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
    if (!moveit_msgs__msg__PositionConstraint__Sequence__init(&(ros_message->position_constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__PositionConstraint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__PositionConstraint * dest = ros_message->position_constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__position_constraint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // orientation_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'orientation_constraints'");
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
    if (!moveit_msgs__msg__OrientationConstraint__Sequence__init(&(ros_message->orientation_constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__OrientationConstraint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__OrientationConstraint * dest = ros_message->orientation_constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__orientation_constraint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // visibility_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "visibility_constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'visibility_constraints'");
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
    if (!moveit_msgs__msg__VisibilityConstraint__Sequence__init(&(ros_message->visibility_constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__VisibilityConstraint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__VisibilityConstraint * dest = ros_message->visibility_constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__visibility_constraint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * moveit_msgs__msg__constraints__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Constraints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._constraints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Constraints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__Constraints * ros_message = (moveit_msgs__msg__Constraints *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_constraints
    PyObject * field = NULL;
    size_t size = ros_message->joint_constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__JointConstraint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->joint_constraints.data[i]);
      PyObject * pyitem = moveit_msgs__msg__joint_constraint__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "joint_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_constraints
    PyObject * field = NULL;
    size_t size = ros_message->position_constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__PositionConstraint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->position_constraints.data[i]);
      PyObject * pyitem = moveit_msgs__msg__position_constraint__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "position_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_constraints
    PyObject * field = NULL;
    size_t size = ros_message->orientation_constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__OrientationConstraint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->orientation_constraints.data[i]);
      PyObject * pyitem = moveit_msgs__msg__orientation_constraint__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "orientation_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visibility_constraints
    PyObject * field = NULL;
    size_t size = ros_message->visibility_constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__VisibilityConstraint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->visibility_constraints.data[i]);
      PyObject * pyitem = moveit_msgs__msg__visibility_constraint__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "visibility_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
