// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/PlanningScene.idl
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
#include "moveit_msgs/msg/detail/planning_scene__struct.h"
#include "moveit_msgs/msg/detail/planning_scene__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
#include "moveit_msgs/msg/detail/link_padding__functions.h"
#include "moveit_msgs/msg/detail/link_scale__functions.h"
#include "moveit_msgs/msg/detail/object_color__functions.h"
// end nested array functions include
bool moveit_msgs__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__robot_state__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__transform_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__transform_stamped__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__allowed_collision_matrix__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__allowed_collision_matrix__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__link_padding__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__link_padding__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__link_scale__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__link_scale__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__object_color__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__object_color__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__planning_scene_world__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__planning_scene_world__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__planning_scene__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("moveit_msgs.msg._planning_scene.PlanningScene", full_classname_dest, 45) == 0);
  }
  moveit_msgs__msg__PlanningScene * ros_message = _ros_message;
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
  {  // robot_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_state");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__robot_state__convert_from_py(field, &ros_message->robot_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robot_model_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_model_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_model_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // fixed_frame_transforms
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_frame_transforms");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'fixed_frame_transforms'");
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
    if (!geometry_msgs__msg__TransformStamped__Sequence__init(&(ros_message->fixed_frame_transforms), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__TransformStamped__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__TransformStamped * dest = ros_message->fixed_frame_transforms.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__transform_stamped__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // allowed_collision_matrix
    PyObject * field = PyObject_GetAttrString(_pymsg, "allowed_collision_matrix");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__allowed_collision_matrix__convert_from_py(field, &ros_message->allowed_collision_matrix)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // link_padding
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_padding");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'link_padding'");
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
    if (!moveit_msgs__msg__LinkPadding__Sequence__init(&(ros_message->link_padding), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__LinkPadding__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__LinkPadding * dest = ros_message->link_padding.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__link_padding__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // link_scale
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_scale");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'link_scale'");
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
    if (!moveit_msgs__msg__LinkScale__Sequence__init(&(ros_message->link_scale), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__LinkScale__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__LinkScale * dest = ros_message->link_scale.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__link_scale__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // object_colors
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_colors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'object_colors'");
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
    if (!moveit_msgs__msg__ObjectColor__Sequence__init(&(ros_message->object_colors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__ObjectColor__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__ObjectColor * dest = ros_message->object_colors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__object_color__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // world
    PyObject * field = PyObject_GetAttrString(_pymsg, "world");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__planning_scene_world__convert_from_py(field, &ros_message->world)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_diff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_diff = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__planning_scene__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanningScene */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._planning_scene");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanningScene");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__PlanningScene * ros_message = (moveit_msgs__msg__PlanningScene *)raw_ros_message;
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
  {  // robot_state
    PyObject * field = NULL;
    field = moveit_msgs__msg__robot_state__convert_to_py(&ros_message->robot_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_model_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_model_name.data,
      strlen(ros_message->robot_model_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_model_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_frame_transforms
    PyObject * field = NULL;
    size_t size = ros_message->fixed_frame_transforms.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__TransformStamped * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->fixed_frame_transforms.data[i]);
      PyObject * pyitem = geometry_msgs__msg__transform_stamped__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "fixed_frame_transforms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // allowed_collision_matrix
    PyObject * field = NULL;
    field = moveit_msgs__msg__allowed_collision_matrix__convert_to_py(&ros_message->allowed_collision_matrix);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "allowed_collision_matrix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_padding
    PyObject * field = NULL;
    size_t size = ros_message->link_padding.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__LinkPadding * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->link_padding.data[i]);
      PyObject * pyitem = moveit_msgs__msg__link_padding__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "link_padding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_scale
    PyObject * field = NULL;
    size_t size = ros_message->link_scale.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__LinkScale * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->link_scale.data[i]);
      PyObject * pyitem = moveit_msgs__msg__link_scale__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "link_scale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_colors
    PyObject * field = NULL;
    size_t size = ros_message->object_colors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__ObjectColor * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->object_colors.data[i]);
      PyObject * pyitem = moveit_msgs__msg__object_color__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "object_colors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world
    PyObject * field = NULL;
    field = moveit_msgs__msg__planning_scene_world__convert_to_py(&ros_message->world);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "world", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_diff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_diff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
