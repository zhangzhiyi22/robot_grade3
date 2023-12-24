// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pan_tilt_msgs:msg/PanTiltStatus.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__STRUCT_H_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__STRUCT_H_

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
// Member 'serial_num'
// Member 'hw_version'
// Member 'bd_version'
// Member 'sw_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PanTiltStatus in the package pan_tilt_msgs.
/**
  * pan tilt ststus msg
 */
typedef struct pan_tilt_msgs__msg__PanTiltStatus
{
  std_msgs__msg__Header header;
  uint8_t id;
  rosidl_runtime_c__String serial_num;
  rosidl_runtime_c__String hw_version;
  rosidl_runtime_c__String bd_version;
  rosidl_runtime_c__String sw_version;
  uint8_t set_zero;
  int16_t speed;
  float yaw_goal;
  float pitch_goal;
  uint16_t reserved;
  uint16_t driver_ec;
  uint16_t encoder_ec;
  float yaw_now;
  float pitch_now;
  float yaw_temp;
  float pitch_temp;
  int16_t yaw_raw;
  int16_t pitch_raw;
  uint16_t loop_ec;
  uint16_t loop_time;
} pan_tilt_msgs__msg__PanTiltStatus;

// Struct for a sequence of pan_tilt_msgs__msg__PanTiltStatus.
typedef struct pan_tilt_msgs__msg__PanTiltStatus__Sequence
{
  pan_tilt_msgs__msg__PanTiltStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pan_tilt_msgs__msg__PanTiltStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__STRUCT_H_
