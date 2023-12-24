// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pan_tilt_msgs:msg/PanJointState.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__STRUCT_H_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name1'
// Member 'name2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PanJointState in the package pan_tilt_msgs.
typedef struct pan_tilt_msgs__msg__PanJointState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String name1;
  double position1;
  double velocity1;
  double effort1;
  rosidl_runtime_c__String name2;
  double position2;
  double velocity2;
  double effort2;
} pan_tilt_msgs__msg__PanJointState;

// Struct for a sequence of pan_tilt_msgs__msg__PanJointState.
typedef struct pan_tilt_msgs__msg__PanJointState__Sequence
{
  pan_tilt_msgs__msg__PanJointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pan_tilt_msgs__msg__PanJointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__STRUCT_H_
