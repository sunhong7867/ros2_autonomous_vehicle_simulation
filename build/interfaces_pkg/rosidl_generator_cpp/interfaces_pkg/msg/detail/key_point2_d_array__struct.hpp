// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "interfaces_pkg/msg/detail/key_point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__KeyPoint2DArray __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__KeyPoint2DArray __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyPoint2DArray_
{
  using Type = KeyPoint2DArray_<ContainerAllocator>;

  explicit KeyPoint2DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit KeyPoint2DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<interfaces_pkg::msg::KeyPoint2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::KeyPoint2D_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<interfaces_pkg::msg::KeyPoint2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::KeyPoint2D_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__KeyPoint2DArray
    std::shared_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__KeyPoint2DArray
    std::shared_ptr<interfaces_pkg::msg::KeyPoint2DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyPoint2DArray_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyPoint2DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyPoint2DArray_

// alias to use template instance with default allocator
using KeyPoint2DArray =
  interfaces_pkg::msg::KeyPoint2DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_HPP_
