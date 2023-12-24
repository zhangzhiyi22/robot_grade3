// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pan_tilt_msgs:msg/PanTiltCmdDeg.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__STRUCT_H_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PanTiltCmdDeg in the package pan_tilt_msgs.
/**
  * pan tilt control msg
  * pan tilt yaw angle :deg
 */
typedef struct pan_tilt_msgs__msg__PanTiltCmdDeg
{
  float yaw;
  /// pan tilt pitch angle :deg
  float pitch;
  /// pan tilt speed :deg/s
  int16_t speed;
} pan_tilt_msgs__msg__PanTiltCmdDeg;

// Struct for a sequence of pan_tilt_msgs__msg__PanTiltCmdDeg.
typedef struct pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence
{
  pan_tilt_msgs__msg__PanTiltCmdDeg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__STRUCT_H_
