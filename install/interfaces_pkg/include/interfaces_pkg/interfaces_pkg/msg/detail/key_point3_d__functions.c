// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/key_point3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
interfaces_pkg__msg__KeyPoint3D__init(interfaces_pkg__msg__KeyPoint3D * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // point
  if (!geometry_msgs__msg__Point__init(&msg->point)) {
    interfaces_pkg__msg__KeyPoint3D__fini(msg);
    return false;
  }
  // score
  return true;
}

void
interfaces_pkg__msg__KeyPoint3D__fini(interfaces_pkg__msg__KeyPoint3D * msg)
{
  if (!msg) {
    return;
  }
  // id
  // point
  geometry_msgs__msg__Point__fini(&msg->point);
  // score
}

bool
interfaces_pkg__msg__KeyPoint3D__are_equal(const interfaces_pkg__msg__KeyPoint3D * lhs, const interfaces_pkg__msg__KeyPoint3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__KeyPoint3D__copy(
  const interfaces_pkg__msg__KeyPoint3D * input,
  interfaces_pkg__msg__KeyPoint3D * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // point
  if (!geometry_msgs__msg__Point__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // score
  output->score = input->score;
  return true;
}

interfaces_pkg__msg__KeyPoint3D *
interfaces_pkg__msg__KeyPoint3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__KeyPoint3D * msg = (interfaces_pkg__msg__KeyPoint3D *)allocator.allocate(sizeof(interfaces_pkg__msg__KeyPoint3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__KeyPoint3D));
  bool success = interfaces_pkg__msg__KeyPoint3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__KeyPoint3D__destroy(interfaces_pkg__msg__KeyPoint3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_pkg__msg__KeyPoint3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_pkg__msg__KeyPoint3D__Sequence__init(interfaces_pkg__msg__KeyPoint3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__KeyPoint3D * data = NULL;

  if (size) {
    data = (interfaces_pkg__msg__KeyPoint3D *)allocator.zero_allocate(size, sizeof(interfaces_pkg__msg__KeyPoint3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__KeyPoint3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__KeyPoint3D__fini(&data[i - 1]);
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
interfaces_pkg__msg__KeyPoint3D__Sequence__fini(interfaces_pkg__msg__KeyPoint3D__Sequence * array)
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
      interfaces_pkg__msg__KeyPoint3D__fini(&array->data[i]);
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

interfaces_pkg__msg__KeyPoint3D__Sequence *
interfaces_pkg__msg__KeyPoint3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__KeyPoint3D__Sequence * array = (interfaces_pkg__msg__KeyPoint3D__Sequence *)allocator.allocate(sizeof(interfaces_pkg__msg__KeyPoint3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__KeyPoint3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__KeyPoint3D__Sequence__destroy(interfaces_pkg__msg__KeyPoint3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_pkg__msg__KeyPoint3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_pkg__msg__KeyPoint3D__Sequence__are_equal(const interfaces_pkg__msg__KeyPoint3D__Sequence * lhs, const interfaces_pkg__msg__KeyPoint3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__KeyPoint3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__KeyPoint3D__Sequence__copy(
  const interfaces_pkg__msg__KeyPoint3D__Sequence * input,
  interfaces_pkg__msg__KeyPoint3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__KeyPoint3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_pkg__msg__KeyPoint3D * data =
      (interfaces_pkg__msg__KeyPoint3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__KeyPoint3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__KeyPoint3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_pkg__msg__KeyPoint3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
