// Generated by gencpp from file robot_msg/SetSlamRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_MSG_MESSAGE_SETSLAMREQUEST_H
#define ROBOT_MSG_MESSAGE_SETSLAMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace robot_msg
{
template <class ContainerAllocator>
struct SetSlamRequest_
{
  typedef SetSlamRequest_<ContainerAllocator> Type;

  SetSlamRequest_()
    : header()
    , cmd()
    , mapdir()
    , filename()
    , initial_pose()  {
    }
  SetSlamRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cmd(_alloc)
    , mapdir(_alloc)
    , filename(_alloc)
    , initial_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type;
  _cmd_type cmd;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mapdir_type;
  _mapdir_type mapdir;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _initial_pose_type;
  _initial_pose_type initial_pose;





  typedef boost::shared_ptr< ::robot_msg::SetSlamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msg::SetSlamRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetSlamRequest_

typedef ::robot_msg::SetSlamRequest_<std::allocator<void> > SetSlamRequest;

typedef boost::shared_ptr< ::robot_msg::SetSlamRequest > SetSlamRequestPtr;
typedef boost::shared_ptr< ::robot_msg::SetSlamRequest const> SetSlamRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msg::SetSlamRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msg::SetSlamRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msg::SetSlamRequest_<ContainerAllocator1> & lhs, const ::robot_msg::SetSlamRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.cmd == rhs.cmd &&
    lhs.mapdir == rhs.mapdir &&
    lhs.filename == rhs.filename &&
    lhs.initial_pose == rhs.initial_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msg::SetSlamRequest_<ContainerAllocator1> & lhs, const ::robot_msg::SetSlamRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::SetSlamRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::SetSlamRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::SetSlamRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "713d9413fbbd25fbb02f535a7dd1d89c";
  }

  static const char* value(const ::robot_msg::SetSlamRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x713d9413fbbd25fbULL;
  static const uint64_t static_value2 = 0xb02f535a7dd1d89cULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msg/SetSlamRequest";
  }

  static const char* value(const ::robot_msg::SetSlamRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string cmd #build/save/switch/reloc, build cmd do not use others\n"
"string mapdir #absolute path with no end slash\n"
"string filename #map file name with no suffix (.pbstream and .pgm)\n"
"geometry_msgs/Pose initial_pose  #only switch cmd use this\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::robot_msg::SetSlamRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cmd);
      stream.next(m.mapdir);
      stream.next(m.filename);
      stream.next(m.initial_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSlamRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msg::SetSlamRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msg::SetSlamRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd);
    s << indent << "mapdir: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mapdir);
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
    s << indent << "initial_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.initial_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSG_MESSAGE_SETSLAMREQUEST_H