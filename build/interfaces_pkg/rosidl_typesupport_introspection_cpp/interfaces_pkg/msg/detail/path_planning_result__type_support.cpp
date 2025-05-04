// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_pkg:msg/PathPlanningResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_pkg/msg/detail/path_planning_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanningResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_pkg::msg::PathPlanningResult(_init);
}

void PathPlanningResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_pkg::msg::PathPlanningResult *>(message_memory);
  typed_message->~PathPlanningResult();
}

size_t size_function__PathPlanningResult__x_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathPlanningResult__x_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PathPlanningResult__x_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PathPlanningResult__x_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PathPlanningResult__x_points(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PathPlanningResult__x_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PathPlanningResult__x_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PathPlanningResult__x_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PathPlanningResult__y_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathPlanningResult__y_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PathPlanningResult__y_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PathPlanningResult__y_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PathPlanningResult__y_points(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PathPlanningResult__y_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PathPlanningResult__y_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PathPlanningResult__y_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanningResult_message_member_array[2] = {
  {
    "x_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg::msg::PathPlanningResult, x_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathPlanningResult__x_points,  // size() function pointer
    get_const_function__PathPlanningResult__x_points,  // get_const(index) function pointer
    get_function__PathPlanningResult__x_points,  // get(index) function pointer
    fetch_function__PathPlanningResult__x_points,  // fetch(index, &value) function pointer
    assign_function__PathPlanningResult__x_points,  // assign(index, value) function pointer
    resize_function__PathPlanningResult__x_points  // resize(index) function pointer
  },
  {
    "y_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg::msg::PathPlanningResult, y_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathPlanningResult__y_points,  // size() function pointer
    get_const_function__PathPlanningResult__y_points,  // get_const(index) function pointer
    get_function__PathPlanningResult__y_points,  // get(index) function pointer
    fetch_function__PathPlanningResult__y_points,  // fetch(index, &value) function pointer
    assign_function__PathPlanningResult__y_points,  // assign(index, value) function pointer
    resize_function__PathPlanningResult__y_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanningResult_message_members = {
  "interfaces_pkg::msg",  // message namespace
  "PathPlanningResult",  // message name
  2,  // number of fields
  sizeof(interfaces_pkg::msg::PathPlanningResult),
  PathPlanningResult_message_member_array,  // message members
  PathPlanningResult_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanningResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanningResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanningResult_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_pkg::msg::PathPlanningResult>()
{
  return &::interfaces_pkg::msg::rosidl_typesupport_introspection_cpp::PathPlanningResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_pkg, msg, PathPlanningResult)() {
  return &::interfaces_pkg::msg::rosidl_typesupport_introspection_cpp::PathPlanningResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
