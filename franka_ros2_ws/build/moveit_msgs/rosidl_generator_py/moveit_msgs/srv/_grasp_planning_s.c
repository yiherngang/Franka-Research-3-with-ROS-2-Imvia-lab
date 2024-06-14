// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:srv/GraspPlanning.idl
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
#include "moveit_msgs/srv/detail/grasp_planning__struct.h"
#include "moveit_msgs/srv/detail/grasp_planning__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "moveit_msgs/msg/detail/collision_object__functions.h"
#include "moveit_msgs/msg/detail/grasp__functions.h"
// end nested array functions include
bool moveit_msgs__msg__collision_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__collision_object__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__grasp__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__grasp__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__collision_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__collision_object__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__grasp_planning__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("moveit_msgs.srv._grasp_planning.GraspPlanning_Request", full_classname_dest, 53) == 0);
  }
  moveit_msgs__srv__GraspPlanning_Request * ros_message = _ros_message;
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
  {  // target
    PyObject * field = PyObject_GetAttrString(_pymsg, "target");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__collision_object__convert_from_py(field, &ros_message->target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // support_surfaces
    PyObject * field = PyObject_GetAttrString(_pymsg, "support_surfaces");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'support_surfaces'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->support_surfaces), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->support_surfaces.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // candidate_grasps
    PyObject * field = PyObject_GetAttrString(_pymsg, "candidate_grasps");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'candidate_grasps'");
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
    if (!moveit_msgs__msg__Grasp__Sequence__init(&(ros_message->candidate_grasps), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__Grasp__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__Grasp * dest = ros_message->candidate_grasps.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__grasp__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // movable_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "movable_obstacles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'movable_obstacles'");
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
    if (!moveit_msgs__msg__CollisionObject__Sequence__init(&(ros_message->movable_obstacles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__CollisionObject__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__CollisionObject * dest = ros_message->movable_obstacles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__collision_object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * moveit_msgs__srv__grasp_planning__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GraspPlanning_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._grasp_planning");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GraspPlanning_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__GraspPlanning_Request * ros_message = (moveit_msgs__srv__GraspPlanning_Request *)raw_ros_message;
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
  {  // target
    PyObject * field = NULL;
    field = moveit_msgs__msg__collision_object__convert_to_py(&ros_message->target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // support_surfaces
    PyObject * field = NULL;
    size_t size = ros_message->support_surfaces.size;
    rosidl_runtime_c__String * src = ros_message->support_surfaces.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "support_surfaces", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // candidate_grasps
    PyObject * field = NULL;
    size_t size = ros_message->candidate_grasps.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__Grasp * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->candidate_grasps.data[i]);
      PyObject * pyitem = moveit_msgs__msg__grasp__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "candidate_grasps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movable_obstacles
    PyObject * field = NULL;
    size_t size = ros_message->movable_obstacles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__CollisionObject * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->movable_obstacles.data[i]);
      PyObject * pyitem = moveit_msgs__msg__collision_object__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "movable_obstacles", field);
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
// #include "moveit_msgs/srv/detail/grasp_planning__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
// already included above
// #include "moveit_msgs/msg/detail/grasp__functions.h"
// end nested array functions include
bool moveit_msgs__msg__grasp__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__grasp__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__move_it_error_codes__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__move_it_error_codes__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__grasp_planning__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("moveit_msgs.srv._grasp_planning.GraspPlanning_Response", full_classname_dest, 54) == 0);
  }
  moveit_msgs__srv__GraspPlanning_Response * ros_message = _ros_message;
  {  // grasps
    PyObject * field = PyObject_GetAttrString(_pymsg, "grasps");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'grasps'");
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
    if (!moveit_msgs__msg__Grasp__Sequence__init(&(ros_message->grasps), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__Grasp__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__Grasp * dest = ros_message->grasps.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__grasp__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
PyObject * moveit_msgs__srv__grasp_planning__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GraspPlanning_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._grasp_planning");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GraspPlanning_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__GraspPlanning_Response * ros_message = (moveit_msgs__srv__GraspPlanning_Response *)raw_ros_message;
  {  // grasps
    PyObject * field = NULL;
    size_t size = ros_message->grasps.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__Grasp * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->grasps.data[i]);
      PyObject * pyitem = moveit_msgs__msg__grasp__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "grasps", field);
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
