// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pan_tilt_msgs:msg/PanTiltCmdRad.idl
// generated code does not contain a copyright notice
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_rad__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pan_tilt_msgs__msg__PanTiltCmdRad__init(pan_tilt_msgs__msg__PanTiltCmdRad * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // pitch
  // speed
  return true;
}

void
pan_tilt_msgs__msg__PanTiltCmdRad__fini(pan_tilt_msgs__msg__PanTiltCmdRad * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // pitch
  // speed
}

bool
pan_tilt_msgs__msg__PanTiltCmdRad__are_equal(const pan_tilt_msgs__msg__PanTiltCmdRad * lhs, const pan_tilt_msgs__msg__PanTiltCmdRad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
pan_tilt_msgs__msg__PanTiltCmdRad__copy(
  const pan_tilt_msgs__msg__PanTiltCmdRad * input,
  pan_tilt_msgs__msg__PanTiltCmdRad * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // speed
  output->speed = input->speed;
  return true;
}

pan_tilt_msgs__msg__PanTiltCmdRad *
pan_tilt_msgs__msg__PanTiltCmdRad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanTiltCmdRad * msg = (pan_tilt_msgs__msg__PanTiltCmdRad *)allocator.allocate(sizeof(pan_tilt_msgs__msg__PanTiltCmdRad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pan_tilt_msgs__msg__PanTiltCmdRad));
  bool success = pan_tilt_msgs__msg__PanTiltCmdRad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pan_tilt_msgs__msg__PanTiltCmdRad__destroy(pan_tilt_msgs__msg__PanTiltCmdRad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pan_tilt_msgs__msg__PanTiltCmdRad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__init(pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanTiltCmdRad * data = NULL;

  if (size) {
    data = (pan_tilt_msgs__msg__PanTiltCmdRad *)allocator.zero_allocate(size, sizeof(pan_tilt_msgs__msg__PanTiltCmdRad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pan_tilt_msgs__msg__PanTiltCmdRad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pan_tilt_msgs__msg__PanTiltCmdRad__fini(&data[i - 1]);
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
pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__fini(pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * array)
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
      pan_tilt_msgs__msg__PanTiltCmdRad__fini(&array->data[i]);
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

pan_tilt_msgs__msg__PanTiltCmdRad__Sequence *
pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * array = (pan_tilt_msgs__msg__PanTiltCmdRad__Sequence *)allocator.allocate(sizeof(pan_tilt_msgs__msg__PanTiltCmdRad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__destroy(pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__are_equal(const pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * lhs, const pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pan_tilt_msgs__msg__PanTiltCmdRad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pan_tilt_msgs__msg__PanTiltCmdRad__Sequence__copy(
  const pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * input,
  pan_tilt_msgs__msg__PanTiltCmdRad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pan_tilt_msgs__msg__PanTiltCmdRad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pan_tilt_msgs__msg__PanTiltCmdRad * data =
      (pan_tilt_msgs__msg__PanTiltCmdRad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pan_tilt_msgs__msg__PanTiltCmdRad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pan_tilt_msgs__msg__PanTiltCmdRad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pan_tilt_msgs__msg__PanTiltCmdRad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
