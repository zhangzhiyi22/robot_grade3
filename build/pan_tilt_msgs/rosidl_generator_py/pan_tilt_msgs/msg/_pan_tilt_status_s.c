// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pan_tilt_msgs:msg/PanTiltStatus.idl
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
#include "pan_tilt_msgs/msg/detail/pan_tilt_status__struct.h"
#include "pan_tilt_msgs/msg/detail/pan_tilt_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pan_tilt_msgs__msg__pan_tilt_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("pan_tilt_msgs.msg._pan_tilt_status.PanTiltStatus", full_classname_dest, 48) == 0);
  }
  pan_tilt_msgs__msg__PanTiltStatus * ros_message = _ros_message;
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
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // serial_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_num");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->serial_num, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hw_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hw_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bd_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bd_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bd_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sw_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sw_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // set_zero
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_zero");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_zero = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // yaw_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_goal = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_goal = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // driver_ec
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_ec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driver_ec = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // encoder_ec
    PyObject * field = PyObject_GetAttrString(_pymsg, "encoder_ec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->encoder_ec = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yaw_now
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_now");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_now = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_now
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_now");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_now = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yaw_raw = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pitch_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pitch_raw = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // loop_ec
    PyObject * field = PyObject_GetAttrString(_pymsg, "loop_ec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->loop_ec = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // loop_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "loop_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->loop_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pan_tilt_msgs__msg__pan_tilt_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PanTiltStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pan_tilt_msgs.msg._pan_tilt_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PanTiltStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pan_tilt_msgs__msg__PanTiltStatus * ros_message = (pan_tilt_msgs__msg__PanTiltStatus *)raw_ros_message;
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
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_num
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->serial_num.data,
      strlen(ros_message->serial_num.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hw_version.data,
      strlen(ros_message->hw_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bd_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bd_version.data,
      strlen(ros_message->bd_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bd_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sw_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sw_version.data,
      strlen(ros_message->sw_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_zero
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_zero);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_zero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_ec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->driver_ec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_ec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encoder_ec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->encoder_ec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encoder_ec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_now
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_now);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_now", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_now
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_now);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_now", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_raw
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->yaw_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_raw
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pitch_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loop_ec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->loop_ec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loop_ec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loop_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->loop_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loop_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
