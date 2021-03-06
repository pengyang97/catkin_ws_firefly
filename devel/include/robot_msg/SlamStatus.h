// Generated by gencpp from file robot_msg/SlamStatus.msg
// DO NOT EDIT!


#ifndef ROBOT_MSG_MESSAGE_SLAMSTATUS_H
#define ROBOT_MSG_MESSAGE_SLAMSTATUS_H


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
struct SlamStatus_
{
  typedef SlamStatus_<ContainerAllocator> Type;

  SlamStatus_()
    : header()
    , pose()
    , status()
    , score(0.0)
    , reloc_used_time(0.0)
    , opt_works_remain(0)  {
    }
  SlamStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)
    , status(_alloc)
    , score(0.0)
    , reloc_used_time(0.0)
    , opt_works_remain(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;

   typedef float _score_type;
  _score_type score;

   typedef float _reloc_used_time_type;
  _reloc_used_time_type reloc_used_time;

   typedef int16_t _opt_works_remain_type;
  _opt_works_remain_type opt_works_remain;





  typedef boost::shared_ptr< ::robot_msg::SlamStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msg::SlamStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SlamStatus_

typedef ::robot_msg::SlamStatus_<std::allocator<void> > SlamStatus;

typedef boost::shared_ptr< ::robot_msg::SlamStatus > SlamStatusPtr;
typedef boost::shared_ptr< ::robot_msg::SlamStatus const> SlamStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msg::SlamStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msg::SlamStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msg::SlamStatus_<ContainerAllocator1> & lhs, const ::robot_msg::SlamStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pose == rhs.pose &&
    lhs.status == rhs.status &&
    lhs.score == rhs.score &&
    lhs.reloc_used_time == rhs.reloc_used_time &&
    lhs.opt_works_remain == rhs.opt_works_remain;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msg::SlamStatus_<ContainerAllocator1> & lhs, const ::robot_msg::SlamStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::SlamStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::SlamStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::SlamStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::SlamStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::SlamStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::SlamStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msg::SlamStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0dbeead22fbfc305fb4af4eaa3875df1";
  }

  static const char* value(const ::robot_msg::SlamStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0dbeead22fbfc305ULL;
  static const uint64_t static_value2 = 0xfb4af4eaa3875df1ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msg::SlamStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msg/SlamStatus";
  }

  static const char* value(const ::robot_msg::SlamStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msg::SlamStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"geometry_msgs/Pose pose  #全局位姿\n"
"string status            #状态\n"
"float32 score            #得分\n"
"float32 reloc_used_time  #上次重定位耗费时间\n"
"int16 opt_works_remain   #当前位姿图优化剩余数量\n"
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

  static const char* value(const ::robot_msg::SlamStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msg::SlamStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
      stream.next(m.status);
      stream.next(m.score);
      stream.next(m.reloc_used_time);
      stream.next(m.opt_works_remain);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SlamStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msg::SlamStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msg::SlamStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "score: ";
    Printer<float>::stream(s, indent + "  ", v.score);
    s << indent << "reloc_used_time: ";
    Printer<float>::stream(s, indent + "  ", v.reloc_used_time);
    s << indent << "opt_works_remain: ";
    Printer<int16_t>::stream(s, indent + "  ", v.opt_works_remain);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSG_MESSAGE_SLAMSTATUS_H
