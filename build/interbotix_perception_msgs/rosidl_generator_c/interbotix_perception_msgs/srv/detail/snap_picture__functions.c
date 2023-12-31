// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_perception_msgs:srv/SnapPicture.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/srv/detail/snap_picture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

bool
interbotix_perception_msgs__srv__SnapPicture_Request__init(interbotix_perception_msgs__srv__SnapPicture_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    interbotix_perception_msgs__srv__SnapPicture_Request__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_perception_msgs__srv__SnapPicture_Request__fini(interbotix_perception_msgs__srv__SnapPicture_Request * msg)
{
  if (!msg) {
    return;
  }
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
}

bool
interbotix_perception_msgs__srv__SnapPicture_Request__are_equal(const interbotix_perception_msgs__srv__SnapPicture_Request * lhs, const interbotix_perception_msgs__srv__SnapPicture_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filename), &(rhs->filename)))
  {
    return false;
  }
  return true;
}

bool
interbotix_perception_msgs__srv__SnapPicture_Request__copy(
  const interbotix_perception_msgs__srv__SnapPicture_Request * input,
  interbotix_perception_msgs__srv__SnapPicture_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__copy(
      &(input->filename), &(output->filename)))
  {
    return false;
  }
  return true;
}

interbotix_perception_msgs__srv__SnapPicture_Request *
interbotix_perception_msgs__srv__SnapPicture_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__SnapPicture_Request * msg = (interbotix_perception_msgs__srv__SnapPicture_Request *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__SnapPicture_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_perception_msgs__srv__SnapPicture_Request));
  bool success = interbotix_perception_msgs__srv__SnapPicture_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_perception_msgs__srv__SnapPicture_Request__destroy(interbotix_perception_msgs__srv__SnapPicture_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_perception_msgs__srv__SnapPicture_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__init(interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__SnapPicture_Request * data = NULL;

  if (size) {
    data = (interbotix_perception_msgs__srv__SnapPicture_Request *)allocator.zero_allocate(size, sizeof(interbotix_perception_msgs__srv__SnapPicture_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_perception_msgs__srv__SnapPicture_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_perception_msgs__srv__SnapPicture_Request__fini(&data[i - 1]);
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
interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__fini(interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * array)
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
      interbotix_perception_msgs__srv__SnapPicture_Request__fini(&array->data[i]);
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

interbotix_perception_msgs__srv__SnapPicture_Request__Sequence *
interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * array = (interbotix_perception_msgs__srv__SnapPicture_Request__Sequence *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__SnapPicture_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__destroy(interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__are_equal(const interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * lhs, const interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_perception_msgs__srv__SnapPicture_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_perception_msgs__srv__SnapPicture_Request__Sequence__copy(
  const interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * input,
  interbotix_perception_msgs__srv__SnapPicture_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_perception_msgs__srv__SnapPicture_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_perception_msgs__srv__SnapPicture_Request * data =
      (interbotix_perception_msgs__srv__SnapPicture_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_perception_msgs__srv__SnapPicture_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_perception_msgs__srv__SnapPicture_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_perception_msgs__srv__SnapPicture_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `filepath`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
interbotix_perception_msgs__srv__SnapPicture_Response__init(interbotix_perception_msgs__srv__SnapPicture_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // filepath
  if (!rosidl_runtime_c__String__init(&msg->filepath)) {
    interbotix_perception_msgs__srv__SnapPicture_Response__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_perception_msgs__srv__SnapPicture_Response__fini(interbotix_perception_msgs__srv__SnapPicture_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // filepath
  rosidl_runtime_c__String__fini(&msg->filepath);
}

bool
interbotix_perception_msgs__srv__SnapPicture_Response__are_equal(const interbotix_perception_msgs__srv__SnapPicture_Response * lhs, const interbotix_perception_msgs__srv__SnapPicture_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // filepath
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filepath), &(rhs->filepath)))
  {
    return false;
  }
  return true;
}

bool
interbotix_perception_msgs__srv__SnapPicture_Response__copy(
  const interbotix_perception_msgs__srv__SnapPicture_Response * input,
  interbotix_perception_msgs__srv__SnapPicture_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // filepath
  if (!rosidl_runtime_c__String__copy(
      &(input->filepath), &(output->filepath)))
  {
    return false;
  }
  return true;
}

interbotix_perception_msgs__srv__SnapPicture_Response *
interbotix_perception_msgs__srv__SnapPicture_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__SnapPicture_Response * msg = (interbotix_perception_msgs__srv__SnapPicture_Response *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__SnapPicture_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_perception_msgs__srv__SnapPicture_Response));
  bool success = interbotix_perception_msgs__srv__SnapPicture_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_perception_msgs__srv__SnapPicture_Response__destroy(interbotix_perception_msgs__srv__SnapPicture_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_perception_msgs__srv__SnapPicture_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__init(interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__SnapPicture_Response * data = NULL;

  if (size) {
    data = (interbotix_perception_msgs__srv__SnapPicture_Response *)allocator.zero_allocate(size, sizeof(interbotix_perception_msgs__srv__SnapPicture_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_perception_msgs__srv__SnapPicture_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_perception_msgs__srv__SnapPicture_Response__fini(&data[i - 1]);
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
interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__fini(interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * array)
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
      interbotix_perception_msgs__srv__SnapPicture_Response__fini(&array->data[i]);
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

interbotix_perception_msgs__srv__SnapPicture_Response__Sequence *
interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * array = (interbotix_perception_msgs__srv__SnapPicture_Response__Sequence *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__SnapPicture_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__destroy(interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__are_equal(const interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * lhs, const interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_perception_msgs__srv__SnapPicture_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_perception_msgs__srv__SnapPicture_Response__Sequence__copy(
  const interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * input,
  interbotix_perception_msgs__srv__SnapPicture_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_perception_msgs__srv__SnapPicture_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_perception_msgs__srv__SnapPicture_Response * data =
      (interbotix_perception_msgs__srv__SnapPicture_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_perception_msgs__srv__SnapPicture_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_perception_msgs__srv__SnapPicture_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_perception_msgs__srv__SnapPicture_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
