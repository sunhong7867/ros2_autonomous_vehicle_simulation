// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_pkg:msg/PathPlanningResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_pkg/msg/detail/path_planning_result__rosidl_typesupport_introspection_c.h"
#include "interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_pkg/msg/detail/path_planning_result__functions.h"
#include "interfaces_pkg/msg/detail/path_planning_result__struct.h"


// Include directives for member types
// Member `x_points`
// Member `y_points`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_pkg__msg__PathPlanningResult__init(message_memory);
}

void interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_fini_function(void * message_memory)
{
  interfaces_pkg__msg__PathPlanningResult__fini(message_memory);
}

size_t interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__size_function__PathPlanningResult__x_points(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_const_function__PathPlanningResult__x_points(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_function__PathPlanningResult__x_points(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__fetch_function__PathPlanningResult__x_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_const_function__PathPlanningResult__x_points(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__assign_function__PathPlanningResult__x_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_function__PathPlanningResult__x_points(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__resize_function__PathPlanningResult__x_points(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__size_function__PathPlanningResult__y_points(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_const_function__PathPlanningResult__y_points(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_function__PathPlanningResult__y_points(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__fetch_function__PathPlanningResult__y_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_const_function__PathPlanningResult__y_points(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__assign_function__PathPlanningResult__y_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_function__PathPlanningResult__y_points(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__resize_function__PathPlanningResult__y_points(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_member_array[2] = {
  {
    "x_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__PathPlanningResult, x_points),  // bytes offset in struct
    NULL,  // default value
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__size_function__PathPlanningResult__x_points,  // size() function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_const_function__PathPlanningResult__x_points,  // get_const(index) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_function__PathPlanningResult__x_points,  // get(index) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__fetch_function__PathPlanningResult__x_points,  // fetch(index, &value) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__assign_function__PathPlanningResult__x_points,  // assign(index, value) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__resize_function__PathPlanningResult__x_points  // resize(index) function pointer
  },
  {
    "y_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__PathPlanningResult, y_points),  // bytes offset in struct
    NULL,  // default value
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__size_function__PathPlanningResult__y_points,  // size() function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_const_function__PathPlanningResult__y_points,  // get_const(index) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__get_function__PathPlanningResult__y_points,  // get(index) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__fetch_function__PathPlanningResult__y_points,  // fetch(index, &value) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__assign_function__PathPlanningResult__y_points,  // assign(index, value) function pointer
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__resize_function__PathPlanningResult__y_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_members = {
  "interfaces_pkg__msg",  // message namespace
  "PathPlanningResult",  // message name
  2,  // number of fields
  sizeof(interfaces_pkg__msg__PathPlanningResult),
  interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_member_array,  // message members
  interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_type_support_handle = {
  0,
  &interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, PathPlanningResult)() {
  if (!interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_type_support_handle.typesupport_identifier) {
    interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_pkg__msg__PathPlanningResult__rosidl_typesupport_introspection_c__PathPlanningResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
