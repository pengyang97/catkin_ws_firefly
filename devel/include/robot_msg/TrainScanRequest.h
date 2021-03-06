// Generated by gencpp from file robot_msg/TrainScanRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_MSG_MESSAGE_TRAINSCANREQUEST_H
#define ROBOT_MSG_MESSAGE_TRAINSCANREQUEST_H


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
struct TrainScanRequest_
{
  typedef TrainScanRequest_<ContainerAllocator> Type;

  TrainScanRequest_()
    : path()
    , filename()  {
    }
  TrainScanRequest_(const ContainerAllocator& _alloc)
    : path(_alloc)
    , filename(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _path_type;
  _path_type path;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;





  typedef boost::shared_ptr< ::robot_msg::TrainScanRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msg::TrainScanRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TrainScanRequest_

typedef ::robot_msg::TrainScanRequest_<std::allocator<void> > TrainScanRequest;

typedef boost::shared_ptr< ::robot_msg::TrainScanRequest > TrainScanRequestPtr;
typedef boost::shared_ptr< ::robot_msg::TrainScanRequest const> TrainScanRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msg::TrainScanRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msg::TrainScanRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msg::TrainScanRequest_<ContainerAllocator1> & lhs, const ::robot_msg::TrainScanRequest_<ContainerAllocator2> & rhs)
{
  return lhs.path == rhs.path &&
    lhs.filename == rhs.filename;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msg::TrainScanRequest_<ContainerAllocator1> & lhs, const ::robot_msg::TrainScanRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::TrainScanRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::TrainScanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::TrainScanRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd5e27cd5baa2e921bc73e0d0abbe138";
  }

  static const char* value(const ::robot_msg::TrainScanRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd5e27cd5baa2e92ULL;
  static const uint64_t static_value2 = 0x1bc73e0d0abbe138ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msg/TrainScanRequest";
  }

  static const char* value(const ::robot_msg::TrainScanRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string path # path to store files for {scan, voc, bow};\n"
"string filename # string for prefix of the files\n"
;
  }

  static const char* value(const ::robot_msg::TrainScanRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
      stream.next(m.filename);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrainScanRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msg::TrainScanRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msg::TrainScanRequest_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.path);
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSG_MESSAGE_TRAINSCANREQUEST_H
