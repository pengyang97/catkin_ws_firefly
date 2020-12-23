// Generated by gencpp from file robot_msg/LocalizationState.msg
// DO NOT EDIT!


#ifndef ROBOT_MSG_MESSAGE_LOCALIZATIONSTATE_H
#define ROBOT_MSG_MESSAGE_LOCALIZATIONSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace robot_msg
{
template <class ContainerAllocator>
struct LocalizationState_
{
  typedef LocalizationState_<ContainerAllocator> Type;

  LocalizationState_()
    : localization_state(0)
    , floor(0)
    , global_pose()
    , score(0.0)
    , progress(0.0)  {
    }
  LocalizationState_(const ContainerAllocator& _alloc)
    : localization_state(0)
    , floor(0)
    , global_pose(_alloc)
    , score(0.0)
    , progress(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _localization_state_type;
  _localization_state_type localization_state;

   typedef int32_t _floor_type;
  _floor_type floor;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _global_pose_type;
  _global_pose_type global_pose;

   typedef float _score_type;
  _score_type score;

   typedef float _progress_type;
  _progress_type progress;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(MAP_BUILDING)
  #undef MAP_BUILDING
#endif
#if defined(_WIN32) && defined(LOCATING)
  #undef LOCATING
#endif
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(FAILURE)
  #undef FAILURE
#endif
#if defined(_WIN32) && defined(MAP_SAVING)
  #undef MAP_SAVING
#endif

  enum {
    NONE = 0,
    MAP_BUILDING = 1,
    LOCATING = 2,
    SUCCESS = 3,
    FAILURE = 4,
    MAP_SAVING = 5,
  };


  typedef boost::shared_ptr< ::robot_msg::LocalizationState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msg::LocalizationState_<ContainerAllocator> const> ConstPtr;

}; // struct LocalizationState_

typedef ::robot_msg::LocalizationState_<std::allocator<void> > LocalizationState;

typedef boost::shared_ptr< ::robot_msg::LocalizationState > LocalizationStatePtr;
typedef boost::shared_ptr< ::robot_msg::LocalizationState const> LocalizationStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msg::LocalizationState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msg::LocalizationState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msg::LocalizationState_<ContainerAllocator1> & lhs, const ::robot_msg::LocalizationState_<ContainerAllocator2> & rhs)
{
  return lhs.localization_state == rhs.localization_state &&
    lhs.floor == rhs.floor &&
    lhs.global_pose == rhs.global_pose &&
    lhs.score == rhs.score &&
    lhs.progress == rhs.progress;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msg::LocalizationState_<ContainerAllocator1> & lhs, const ::robot_msg::LocalizationState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::LocalizationState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msg::LocalizationState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::LocalizationState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msg::LocalizationState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::LocalizationState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msg::LocalizationState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msg::LocalizationState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ce43e83728f9fa44734aa425fdc622d";
  }

  static const char* value(const ::robot_msg::LocalizationState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ce43e83728f9fa4ULL;
  static const uint64_t static_value2 = 0x4734aa425fdc622dULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msg::LocalizationState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msg/LocalizationState";
  }

  static const char* value(const ::robot_msg::LocalizationState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msg::LocalizationState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# msg definition 对Android\n"
"\n"
"# localization state enum\n"
"int32 NONE         = 0 # 初始化\n"
"int32 MAP_BUILDING = 1 # 建图中\n"
"int32 LOCATING     = 2 # 定位中\n"
"int32 SUCCESS      = 3 # 定位成功\n"
"int32 FAILURE      = 4 # 定位失败\n"
"int32 MAP_SAVING   = 5 # 地图保存中\n"
"\n"
"int32 		        localization_state      # 机器人定位状态\n"
"int32                   floor                   # 机器人当前所处楼层\n"
"geometry_msgs/Vector3 	global_pose             # 机器人全局位置坐标，(x，y，thete)\n"
"float32                 score                   # 得分\n"
"float32                 progress                # 地图保存进度，100%为已保存状态\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::robot_msg::LocalizationState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msg::LocalizationState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.localization_state);
      stream.next(m.floor);
      stream.next(m.global_pose);
      stream.next(m.score);
      stream.next(m.progress);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocalizationState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msg::LocalizationState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msg::LocalizationState_<ContainerAllocator>& v)
  {
    s << indent << "localization_state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.localization_state);
    s << indent << "floor: ";
    Printer<int32_t>::stream(s, indent + "  ", v.floor);
    s << indent << "global_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.global_pose);
    s << indent << "score: ";
    Printer<float>::stream(s, indent + "  ", v.score);
    s << indent << "progress: ";
    Printer<float>::stream(s, indent + "  ", v.progress);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSG_MESSAGE_LOCALIZATIONSTATE_H