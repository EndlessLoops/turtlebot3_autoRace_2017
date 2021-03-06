// Generated by gencpp from file robit_master/driving_msg.msg
// DO NOT EDIT!


#ifndef ROBIT_MASTER_MESSAGE_DRIVING_MSG_H
#define ROBIT_MASTER_MESSAGE_DRIVING_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robit_master
{
template <class ContainerAllocator>
struct driving_msg_
{
  typedef driving_msg_<ContainerAllocator> Type;

  driving_msg_()
    : is_in_tunnel(0)  {
    }
  driving_msg_(const ContainerAllocator& _alloc)
    : is_in_tunnel(0)  {
  (void)_alloc;
    }



   typedef int64_t _is_in_tunnel_type;
  _is_in_tunnel_type is_in_tunnel;




  typedef boost::shared_ptr< ::robit_master::driving_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robit_master::driving_msg_<ContainerAllocator> const> ConstPtr;

}; // struct driving_msg_

typedef ::robit_master::driving_msg_<std::allocator<void> > driving_msg;

typedef boost::shared_ptr< ::robit_master::driving_msg > driving_msgPtr;
typedef boost::shared_ptr< ::robit_master::driving_msg const> driving_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robit_master::driving_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robit_master::driving_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robit_master

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'robit_master': ['/home/turtle1/catkin_ws/src/robit_master/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robit_master::driving_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robit_master::driving_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robit_master::driving_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robit_master::driving_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robit_master::driving_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robit_master::driving_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robit_master::driving_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b9f7cabb3f24ad48b166c460b51ec00";
  }

  static const char* value(const ::robit_master::driving_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b9f7cabb3f24ad4ULL;
  static const uint64_t static_value2 = 0x8b166c460b51ec00ULL;
};

template<class ContainerAllocator>
struct DataType< ::robit_master::driving_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robit_master/driving_msg";
  }

  static const char* value(const ::robit_master::driving_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robit_master::driving_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 is_in_tunnel\n\
";
  }

  static const char* value(const ::robit_master::driving_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robit_master::driving_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_in_tunnel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct driving_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robit_master::driving_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robit_master::driving_msg_<ContainerAllocator>& v)
  {
    s << indent << "is_in_tunnel: ";
    Printer<int64_t>::stream(s, indent + "  ", v.is_in_tunnel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBIT_MASTER_MESSAGE_DRIVING_MSG_H
