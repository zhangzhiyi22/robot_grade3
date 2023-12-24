// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pan_tilt_msgs:msg/PanTiltStatus.idl
// generated code does not contain a copyright notice
#include "pan_tilt_msgs/msg/detail/pan_tilt_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `serial_num`
// Member `hw_version`
// Member `bd_version`
// Member `sw_version`
#include "rosidl_runtime_c/string_functions.h"

bool
pan_tilt_msgs__msg__PanTiltStatus__init(pan_tilt_msgs__msg__PanTiltStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pan_tilt_msgs__msg__PanTiltStatus__fini(msg);
    return false;
  }
  // id
  // serial_num
  if (!rosidl_runtime_c__String__init(&msg->serial_num)) {
    pan_tilt_msgs__msg__PanTiltStatus__fini(msg);
    return false;
  }
  // hw_version
  if (!rosidl_runtime_c__String__init(&msg->hw_version)) {
    pan_tilt_msgs__msg__PanTiltStatus__fini(msg);
    return false;
  }
  // bd_version
  if (!rosidl_runtime_c__String__init(&msg->bd_version)) {
    pan_tilt_msgs__msg__PanTiltStatus__fini(msg);
    return false;
  }
  // sw_version
  if (!rosidl_runtime_c__String__init(&msg->sw_version)) {
    pan_tilt_msgs__msg__PanTiltStatus__fini(msg);
    return false;
  }
  // set_zero
  // speed
  // yaw_goal
  // pitch_goal
  // reserved
  // driver_ec
  // encoder_ec
  // yaw_now
  // pitch_now
  // yaw_temp
  // pitch_temp
  // yaw_raw
  // pitch_raw
  // loop_ec
  // loop_time
  return true;
}

void
pan_tilt_msgs__msg__PanTiltStatus__fini(pan_tilt_msgs__msg__PanTiltStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // serial_num
  rosidl_runtime_c__String__fini(&msg->serial_num);
  // hw_version
  rosidl_runtime_c__String__fini(&msg->hw_version);
  // bd_version
  rosidl_runtime_c__String__fini(&msg->bd_version);
  // sw_version
  rosidl_runtime_c__String__fini(&msg->sw_version);
  // set_zero
  // speed
  // yaw_goal
  // pitch_goal
  // reserved
  // driver_ec
  // encoder_ec
  // yaw_now
  // pitch_now
  // yaw_temp
  // pitch_temp
  // yaw_raw
  // pitch_raw
  // loop_ec
  // loop_time
}

bool
pan_tilt_msgs__msg__PanTiltStatus__are_equal(const pan_tilt_msgs__msg__PanTiltStatus * lhs, const pan_tilt_msgs__msg__PanTiltStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // serial_num
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_num), &(rhs->serial_num)))
  {
    return false;
  }
  // hw_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hw_version), &(rhs->hw_version)))
  {
    return false;
  }
  // bd_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bd_version), &(rhs->bd_version)))
  {
    return false;
  }
  // sw_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sw_version), &(rhs->sw_version)))
  {
    return false;
  }
  // set_zero
  if (lhs->set_zero != rhs->set_zero) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // yaw_goal
  if (lhs->yaw_goal != rhs->yaw_goal) {
    return false;
  }
  // pitch_goal
  if (lhs->pitch_goal != rhs->pitch_goal) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // driver_ec
  if (lhs->driver_ec != rhs->driver_ec) {
    return false;
  }
  // encoder_ec
  if (lhs->encoder_ec != rhs->encoder_ec) {
    return false;
  }
  // yaw_now
  if (lhs->yaw_now != rhs->yaw_now) {
    return false;
  }
  // pitch_now
  if (lhs->pitch_now != rhs->pitch_now) {
    return false;
  }
  // yaw_temp
  if (lhs->yaw_temp != rhs->yaw_temp) {
    return false;
  }
  // pitch_temp
  if (lhs->pitch_temp != rhs->pitch_temp) {
    return false;
  }
  // yaw_raw
  if (lhs->yaw_raw != rhs->yaw_raw) {
    return false;
  }
  // pitch_raw
  if (lhs->pitch_raw != rhs->pitch_raw) {
    return false;
  }
  // loop_ec
  if (lhs->loop_ec != rhs->loop_ec) {
    return false;
  }
  // loop_time
  if (lhs->loop_time != rhs->loop_time) {
    return false;
  }
  return true;
}

bool
pan_tilt_msgs__msg__PanTiltStatus__copy(
  const pan_tilt_msgs__msg__PanTiltStatus * input,
  pan_tilt_msgs__msg__PanTiltStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // serial_num
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_num), &(output->serial_num)))
  {
    return false;
  }
  // hw_version
  if (!rosidl_runtime_c__String__copy(
      &(input->hw_version), &(output->hw_version)))
  {
    return false;
  }
  // bd_version
  if (!rosidl_runtime_c__String__copy(
      &(input->bd_version), &(output->bd_version)))
  {
    return false;
  }
  // sw_version
  if (!rosidl_runtime_c__String__copy(
      &(input->sw_version), &(output->sw_version)))
  {
    return false;
  }
  // set_zero
  output->set_zero = input->set_zero;
  // speed
  output->speed = input->speed;
  // yaw_goal
  output->yaw_goal = input->yaw_goal;
  // pitch_goal
  output->pitch_goal = input->pitch_goal;
  // reserved
  output->reserved = input->reserved;
  // driver_ec
  output->driver_ec = input->driver_ec;
  // encoder_ec
  output->encoder_ec = input->encoder_ec;
  // yaw_now
  output->yaw_now = input->yaw_now;
  // pitch_now
  output->pitch_now = input->pitch_now;
  // yaw_temp
  output->yaw_temp = input->yaw_temp;
  // pitch_temp
  output->pitch_temp = input->pitch_temp;
  // yaw_raw
  output->yaw_raw = input->yaw_raw;
  // pitch_raw
  output->pitch_raw = input->pitch_raw;
  // loop_ec
  output->loop_ec = input->loop_ec;
  // loop_time
  output->loop_time = input->loop_time;
  return true;
}

pan_tilt_msgs__msg__PanTiltStatus *
pan_tilt_msgs__msg__PanTiltStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanTiltStatus * msg = (pan_tilt_msgs__msg__PanTiltStatus *)allocator.allocate(sizeof(pan_tilt_msgs__msg__PanTiltStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pan_tilt_msgs__msg__PanTiltStatus));
  bool success = pan_tilt_msgs__msg__PanTiltStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pan_tilt_msgs__msg__PanTiltStatus__destroy(pan_tilt_msgs__msg__PanTiltStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pan_tilt_msgs__msg__PanTiltStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pan_tilt_msgs__msg__PanTiltStatus__Sequence__init(pan_tilt_msgs__msg__PanTiltStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanTiltStatus * data = NULL;

  if (size) {
    data = (pan_tilt_msgs__msg__PanTiltStatus *)allocator.zero_allocate(size, sizeof(pan_tilt_msgs__msg__PanTiltStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pan_tilt_msgs__msg__PanTiltStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pan_tilt_msgs__msg__PanTiltStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pan_tilt_msgs__msg__PanTiltStatus__Sequence__fini(pan_tilt_msgs__msg__PanTiltStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pan_tilt_msgs__msg__PanTiltStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pan_tilt_msgs__msg__PanTiltStatus__Sequence *
pan_tilt_msgs__msg__PanTiltStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanTiltStatus__Sequence * array = (pan_tilt_msgs__msg__PanTiltStatus__Sequence *)allocator.allocate(sizeof(pan_tilt_msgs__msg__PanTiltStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pan_tilt_msgs__msg__PanTiltStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pan_tilt_msgs__msg__PanTiltStatus__Sequence__destroy(pan_tilt_msgs__msg__PanTiltStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pan_tilt_msgs__msg__PanTiltStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pan_tilt_msgs__msg__PanTiltStatus__Sequence__are_equal(const pan_tilt_msgs__msg__PanTiltStatus__Sequence * lhs, const pan_tilt_msgs__msg__PanTiltStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pan_tilt_msgs__msg__PanTiltStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pan_tilt_msgs__msg__PanTiltStatus__Sequence__copy(
  const pan_tilt_msgs__msg__PanTiltStatus__Sequence * input,
  pan_tilt_msgs__msg__PanTiltStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pan_tilt_msgs__msg__PanTiltStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pan_tilt_msgs__msg__PanTiltStatus * data =
      (pan_tilt_msgs__msg__PanTiltStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pan_tilt_msgs__msg__PanTiltStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pan_tilt_msgs__msg__PanTiltStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pan_tilt_msgs__msg__PanTiltStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
