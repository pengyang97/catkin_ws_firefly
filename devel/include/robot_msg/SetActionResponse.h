// Generated by gencpp from file robot_msg/SetActionResponse.msg
// DO NOT EDIT!


#ifndef ROBOT_MSG_MESSAGE_SETACTIONRESPONSE_H
#define ROBOT_MSG_MESSAGE_SETACTIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_msg
{
template <class ContainerAllocator>
struct SetActionResponse_
{
  typedef SetActionResponse_<ContainerAllocator> Type;

  SetActionResponse_()
    : action_response_id()  {
    }
  SetActionResponse_(const ContainerAllocator& _alloc)
    : action_response_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _action_response_id_type;
  _action_response_id_type action_response_id;





  typedef boost::shared_ptr< ::robot_msg::SetActionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msg::SetActionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetActionResponse_

typedef ::robot_msg::SetActionResponse_<std::allocator<void> > SetActionResponse;

typedef boost::shared_ptr< ::robot_msg::SetActionResponse > SetActionResponsePtr;
typedef boost::shared_ptr< ::robot_msg::SetActionResponse const> SetActionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msg::SetActionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msg::SetActionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msg::SetActionResponse_<ContainerAllocator1> & lhs, const ::robot_msg::SetActionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.action_response_id == rhs.action_response_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msg::SetActionResponse_<ContainerAllocator1> & lhs, const ::robot_msg::SetActionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::SetActionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::SetActionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::SetActionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::SetActionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::SetActionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::SetActionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msg::SetActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef3646447bef9a96de81e432787716ff";
  }

  static const char* value(const ::robot_msg::SetActionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef3646447bef9a96ULL;
  static const uint64_t static_value2 = 0xde81e432787716ffULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msg::SetActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msg/SetActionResponse";
  }

  static const char* value(const ::robot_msg::SetActionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msg::SetActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"#response constants\n"
"\n"
"#response fields\n"
"string      action_response_id 	        # 回复id，与当前action_request_id值相同，表明ros收到命令\n"
;
  }

  static const char* value(const ::robot_msg::SetActionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msg::SetActionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_response_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetActionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msg::SetActionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msg::SetActionResponse_<ContainerAllocator>& v)
  {
    s << indent << "action_response_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.action_response_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSG_MESSAGE_SETACTIONRESPONSE_H