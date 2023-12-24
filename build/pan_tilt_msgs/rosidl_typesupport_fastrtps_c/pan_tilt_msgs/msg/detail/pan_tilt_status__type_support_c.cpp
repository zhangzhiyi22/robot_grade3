// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pan_tilt_msgs:msg/PanTiltStatus.idl
// generated code does not contain a copyright notice
#include "pan_tilt_msgs/msg/detail/pan_tilt_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pan_tilt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pan_tilt_msgs/msg/detail/pan_tilt_status__struct.h"
#include "pan_tilt_msgs/msg/detail/pan_tilt_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // bd_version, hw_version, serial_num, sw_version
#include "rosidl_runtime_c/string_functions.h"  // bd_version, hw_version, serial_num, sw_version
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pan_tilt_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pan_tilt_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pan_tilt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PanTiltStatus__ros_msg_type = pan_tilt_msgs__msg__PanTiltStatus;

static bool _PanTiltStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PanTiltStatus__ros_msg_type * ros_message = static_cast<const _PanTiltStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: serial_num
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_num;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: hw_version
  {
    const rosidl_runtime_c__String * str = &ros_message->hw_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bd_version
  {
    const rosidl_runtime_c__String * str = &ros_message->bd_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sw_version
  {
    const rosidl_runtime_c__String * str = &ros_message->sw_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: set_zero
  {
    cdr << ros_message->set_zero;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: yaw_goal
  {
    cdr << ros_message->yaw_goal;
  }

  // Field name: pitch_goal
  {
    cdr << ros_message->pitch_goal;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: driver_ec
  {
    cdr << ros_message->driver_ec;
  }

  // Field name: encoder_ec
  {
    cdr << ros_message->encoder_ec;
  }

  // Field name: yaw_now
  {
    cdr << ros_message->yaw_now;
  }

  // Field name: pitch_now
  {
    cdr << ros_message->pitch_now;
  }

  // Field name: yaw_temp
  {
    cdr << ros_message->yaw_temp;
  }

  // Field name: pitch_temp
  {
    cdr << ros_message->pitch_temp;
  }

  // Field name: yaw_raw
  {
    cdr << ros_message->yaw_raw;
  }

  // Field name: pitch_raw
  {
    cdr << ros_message->pitch_raw;
  }

  // Field name: loop_ec
  {
    cdr << ros_message->loop_ec;
  }

  // Field name: loop_time
  {
    cdr << ros_message->loop_time;
  }

  return true;
}

static bool _PanTiltStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PanTiltStatus__ros_msg_type * ros_message = static_cast<_PanTiltStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: serial_num
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_num.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_num);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_num,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_num'\n");
      return false;
    }
  }

  // Field name: hw_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hw_version.data) {
      rosidl_runtime_c__String__init(&ros_message->hw_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hw_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hw_version'\n");
      return false;
    }
  }

  // Field name: bd_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bd_version.data) {
      rosidl_runtime_c__String__init(&ros_message->bd_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bd_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bd_version'\n");
      return false;
    }
  }

  // Field name: sw_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sw_version.data) {
      rosidl_runtime_c__String__init(&ros_message->sw_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sw_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sw_version'\n");
      return false;
    }
  }

  // Field name: set_zero
  {
    cdr >> ros_message->set_zero;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: yaw_goal
  {
    cdr >> ros_message->yaw_goal;
  }

  // Field name: pitch_goal
  {
    cdr >> ros_message->pitch_goal;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: driver_ec
  {
    cdr >> ros_message->driver_ec;
  }

  // Field name: encoder_ec
  {
    cdr >> ros_message->encoder_ec;
  }

  // Field name: yaw_now
  {
    cdr >> ros_message->yaw_now;
  }

  // Field name: pitch_now
  {
    cdr >> ros_message->pitch_now;
  }

  // Field name: yaw_temp
  {
    cdr >> ros_message->yaw_temp;
  }

  // Field name: pitch_temp
  {
    cdr >> ros_message->pitch_temp;
  }

  // Field name: yaw_raw
  {
    cdr >> ros_message->yaw_raw;
  }

  // Field name: pitch_raw
  {
    cdr >> ros_message->pitch_raw;
  }

  // Field name: loop_ec
  {
    cdr >> ros_message->loop_ec;
  }

  // Field name: loop_time
  {
    cdr >> ros_message->loop_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pan_tilt_msgs
size_t get_serialized_size_pan_tilt_msgs__msg__PanTiltStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PanTiltStatus__ros_msg_type * ros_message = static_cast<const _PanTiltStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serial_num
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_num.size + 1);
  // field.name hw_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hw_version.size + 1);
  // field.name bd_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bd_version.size + 1);
  // field.name sw_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sw_version.size + 1);
  // field.name set_zero
  {
    size_t item_size = sizeof(ros_message->set_zero);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_goal
  {
    size_t item_size = sizeof(ros_message->yaw_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_goal
  {
    size_t item_size = sizeof(ros_message->pitch_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_ec
  {
    size_t item_size = sizeof(ros_message->driver_ec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encoder_ec
  {
    size_t item_size = sizeof(ros_message->encoder_ec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_now
  {
    size_t item_size = sizeof(ros_message->yaw_now);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_now
  {
    size_t item_size = sizeof(ros_message->pitch_now);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_temp
  {
    size_t item_size = sizeof(ros_message->yaw_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_temp
  {
    size_t item_size = sizeof(ros_message->pitch_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_raw
  {
    size_t item_size = sizeof(ros_message->yaw_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_raw
  {
    size_t item_size = sizeof(ros_message->pitch_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_ec
  {
    size_t item_size = sizeof(ros_message->loop_ec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_time
  {
    size_t item_size = sizeof(ros_message->loop_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PanTiltStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pan_tilt_msgs__msg__PanTiltStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pan_tilt_msgs
size_t max_serialized_size_pan_tilt_msgs__msg__PanTiltStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: serial_num
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: hw_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bd_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sw_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: set_zero
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: yaw_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reserved
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: driver_ec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: encoder_ec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: yaw_now
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_now
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_raw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pitch_raw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: loop_ec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: loop_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PanTiltStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pan_tilt_msgs__msg__PanTiltStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PanTiltStatus = {
  "pan_tilt_msgs::msg",
  "PanTiltStatus",
  _PanTiltStatus__cdr_serialize,
  _PanTiltStatus__cdr_deserialize,
  _PanTiltStatus__get_serialized_size,
  _PanTiltStatus__max_serialized_size
};

static rosidl_message_type_support_t _PanTiltStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PanTiltStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pan_tilt_msgs, msg, PanTiltStatus)() {
  return &_PanTiltStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
