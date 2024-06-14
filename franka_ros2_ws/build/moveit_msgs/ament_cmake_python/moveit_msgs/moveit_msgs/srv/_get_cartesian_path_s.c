// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
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
#include "moveit_msgs/srv/detail/get_cartesian_path__struct.h"
#include "moveit_msgs/srv/detail/get_cartesian_path__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/pose__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__robot_state__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__constraints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__constraints__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__get_cartesian_path__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("moveit_msgs.srv._get_cartesian_path.GetCartesianPath_Request", full_classname_dest, 60) == 0);
  }
  moveit_msgs__srv__GetCartesianPath_Request * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
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
  {  // link_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->link_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // waypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'waypoints'");
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
    if (!geometry_msgs__msg__Pose__Sequence__init(&(ros_message->waypoints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Pose__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Pose * dest = ros_message->waypoints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__pose__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // max_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_step");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_step = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // jump_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "jump_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->jump_threshold = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prismatic_jump_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "prismatic_jump_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prismatic_jump_threshold = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // revolute_jump_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "revolute_jump_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->revolute_jump_threshold = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // avoid_collisions
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoid_collisions");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoid_collisions = (Py_True == field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__get_cartesian_path__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetCartesianPath_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._get_cartesian_path");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetCartesianPath_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__GetCartesianPath_Request * ros_message = (moveit_msgs__srv__GetCartesianPath_Request *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
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
  {  // link_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->link_name.data,
      strlen(ros_message->link_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoints
    PyObject * field = NULL;
    size_t size = ros_message->waypoints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Pose * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->waypoints.data[i]);
      PyObject * pyitem = geometry_msgs__msg__pose__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "waypoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_step
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jump_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->jump_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "jump_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prismatic_jump_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prismatic_jump_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prismatic_jump_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // revolute_jump_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->revolute_jump_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "revolute_jump_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoid_collisions
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoid_collisions ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoid_collisions", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__functions.h"

bool moveit_msgs__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__robot_state__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__robot_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__robot_trajectory__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__move_it_error_codes__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__move_it_error_codes__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__get_cartesian_path__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("moveit_msgs.srv._get_cartesian_path.GetCartesianPath_Response", full_classname_dest, 61) == 0);
  }
  moveit_msgs__srv__GetCartesianPath_Response * ros_message = _ros_message;
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
  {  // solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__robot_trajectory__convert_from_py(field, &ros_message->solution)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fraction
    PyObject * field = PyObject_GetAttrString(_pymsg, "fraction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fraction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__move_it_error_codes__convert_from_py(field, &ros_message->error_code)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__get_cartesian_path__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetCartesianPath_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._get_cartesian_path");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetCartesianPath_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__GetCartesianPath_Response * ros_message = (moveit_msgs__srv__GetCartesianPath_Response *)raw_ros_message;
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
  {  // solution
    PyObject * field = NULL;
    field = moveit_msgs__msg__robot_trajectory__convert_to_py(&ros_message->solution);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fraction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fraction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fraction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = moveit_msgs__msg__move_it_error_codes__convert_to_py(&ros_message->error_code);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
