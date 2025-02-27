// Generated by gencpp from file planning_msgs/LatencyStats.msg
// DO NOT EDIT!


#ifndef PLANNING_MSGS_MESSAGE_LATENCYSTATS_H
#define PLANNING_MSGS_MESSAGE_LATENCYSTATS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planning_msgs
{
template <class ContainerAllocator>
struct LatencyStats_
{
  typedef LatencyStats_<ContainerAllocator> Type;

  LatencyStats_()
    : total_time_ms(0.0)
    , init_frame_time_ms(0.0)  {
    }
  LatencyStats_(const ContainerAllocator& _alloc)
    : total_time_ms(0.0)
    , init_frame_time_ms(0.0)  {
  (void)_alloc;
    }



   typedef double _total_time_ms_type;
  _total_time_ms_type total_time_ms;

   typedef double _init_frame_time_ms_type;
  _init_frame_time_ms_type init_frame_time_ms;





  typedef boost::shared_ptr< ::planning_msgs::LatencyStats_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planning_msgs::LatencyStats_<ContainerAllocator> const> ConstPtr;

}; // struct LatencyStats_

typedef ::planning_msgs::LatencyStats_<std::allocator<void> > LatencyStats;

typedef boost::shared_ptr< ::planning_msgs::LatencyStats > LatencyStatsPtr;
typedef boost::shared_ptr< ::planning_msgs::LatencyStats const> LatencyStatsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planning_msgs::LatencyStats_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planning_msgs::LatencyStats_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace planning_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'planning_msgs': ['/home/xiaotongfeng/Desktop/ROS_HDmap_Decision_L4/ros_system/src/planning/planning_msgs/./'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::planning_msgs::LatencyStats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planning_msgs::LatencyStats_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_msgs::LatencyStats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_msgs::LatencyStats_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_msgs::LatencyStats_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_msgs::LatencyStats_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planning_msgs::LatencyStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "355dc3828983803a4a3b53991fcab533";
  }

  static const char* value(const ::planning_msgs::LatencyStats_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x355dc3828983803aULL;
  static const uint64_t static_value2 = 0x4a3b53991fcab533ULL;
};

template<class ContainerAllocator>
struct DataType< ::planning_msgs::LatencyStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planning_msgs/LatencyStats";
  }

  static const char* value(const ::planning_msgs::LatencyStats_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planning_msgs::LatencyStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 total_time_ms\n\
float64 init_frame_time_ms\n\
";
  }

  static const char* value(const ::planning_msgs::LatencyStats_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planning_msgs::LatencyStats_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.total_time_ms);
      stream.next(m.init_frame_time_ms);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LatencyStats_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planning_msgs::LatencyStats_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planning_msgs::LatencyStats_<ContainerAllocator>& v)
  {
    s << indent << "total_time_ms: ";
    Printer<double>::stream(s, indent + "  ", v.total_time_ms);
    s << indent << "init_frame_time_ms: ";
    Printer<double>::stream(s, indent + "  ", v.init_frame_time_ms);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNING_MSGS_MESSAGE_LATENCYSTATS_H
