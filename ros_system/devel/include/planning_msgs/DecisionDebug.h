// Generated by gencpp from file planning_msgs/DecisionDebug.msg
// DO NOT EDIT!


#ifndef PLANNING_MSGS_MESSAGE_DECISIONDEBUG_H
#define PLANNING_MSGS_MESSAGE_DECISIONDEBUG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <planning_msgs/ObstacleIn.h>

namespace planning_msgs
{
template <class ContainerAllocator>
struct DecisionDebug_
{
  typedef DecisionDebug_<ContainerAllocator> Type;

  DecisionDebug_()
    : obstacle()
    , lanechange_id(0)
    , lane_id(0)
    , ego_cost()
    , onlane_obs_num()
    , lanechange_process(0)  {
      ego_cost.assign(0.0);

      onlane_obs_num.assign(0);
  }
  DecisionDebug_(const ContainerAllocator& _alloc)
    : obstacle()
    , lanechange_id(0)
    , lane_id(0)
    , ego_cost()
    , onlane_obs_num()
    , lanechange_process(0)  {
  (void)_alloc;
      obstacle.assign( ::planning_msgs::ObstacleIn_<ContainerAllocator> (_alloc));

      ego_cost.assign(0.0);

      onlane_obs_num.assign(0);
  }



   typedef boost::array< ::planning_msgs::ObstacleIn_<ContainerAllocator> , 50>  _obstacle_type;
  _obstacle_type obstacle;

   typedef int8_t _lanechange_id_type;
  _lanechange_id_type lanechange_id;

   typedef int8_t _lane_id_type;
  _lane_id_type lane_id;

   typedef boost::array<float, 3>  _ego_cost_type;
  _ego_cost_type ego_cost;

   typedef boost::array<int8_t, 3>  _onlane_obs_num_type;
  _onlane_obs_num_type onlane_obs_num;

   typedef int8_t _lanechange_process_type;
  _lanechange_process_type lanechange_process;





  typedef boost::shared_ptr< ::planning_msgs::DecisionDebug_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planning_msgs::DecisionDebug_<ContainerAllocator> const> ConstPtr;

}; // struct DecisionDebug_

typedef ::planning_msgs::DecisionDebug_<std::allocator<void> > DecisionDebug;

typedef boost::shared_ptr< ::planning_msgs::DecisionDebug > DecisionDebugPtr;
typedef boost::shared_ptr< ::planning_msgs::DecisionDebug const> DecisionDebugConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planning_msgs::DecisionDebug_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planning_msgs::DecisionDebug_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planning_msgs::DecisionDebug_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_msgs::DecisionDebug_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_msgs::DecisionDebug_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da2ec6dc8e24bc6e33c0fa04fe1dfa3b";
  }

  static const char* value(const ::planning_msgs::DecisionDebug_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda2ec6dc8e24bc6eULL;
  static const uint64_t static_value2 = 0x33c0fa04fe1dfa3bULL;
};

template<class ContainerAllocator>
struct DataType< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planning_msgs/DecisionDebug";
  }

  static const char* value(const ::planning_msgs::DecisionDebug_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
{
  static const char* value()
  {
    return "  ObstacleIn[50] obstacle\n\
  int8 lanechange_id\n\
  int8 lane_id\n\
  float32[3] ego_cost\n\
  int8[3] onlane_obs_num\n\
  int8 lanechange_process\n\
\n\
================================================================================\n\
MSG: planning_msgs/ObstacleIn\n\
int8 id\n\
float32 s\n\
float32 l\n\
float32 vs\n\
float32 as\n\
float32 vl\n\
float32 al\n\
int8 lane_no\n\
float32 time_cost\n\
float32 des_cost\n\
float32 decision_cost\n\
int8 decision_tag\n\
";
  }

  static const char* value(const ::planning_msgs::DecisionDebug_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.obstacle);
      stream.next(m.lanechange_id);
      stream.next(m.lane_id);
      stream.next(m.ego_cost);
      stream.next(m.onlane_obs_num);
      stream.next(m.lanechange_process);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DecisionDebug_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planning_msgs::DecisionDebug_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planning_msgs::DecisionDebug_<ContainerAllocator>& v)
  {
    s << indent << "obstacle[]" << std::endl;
    for (size_t i = 0; i < v.obstacle.size(); ++i)
    {
      s << indent << "  obstacle[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::planning_msgs::ObstacleIn_<ContainerAllocator> >::stream(s, indent + "    ", v.obstacle[i]);
    }
    s << indent << "lanechange_id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.lanechange_id);
    s << indent << "lane_id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.lane_id);
    s << indent << "ego_cost[]" << std::endl;
    for (size_t i = 0; i < v.ego_cost.size(); ++i)
    {
      s << indent << "  ego_cost[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ego_cost[i]);
    }
    s << indent << "onlane_obs_num[]" << std::endl;
    for (size_t i = 0; i < v.onlane_obs_num.size(); ++i)
    {
      s << indent << "  onlane_obs_num[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.onlane_obs_num[i]);
    }
    s << indent << "lanechange_process: ";
    Printer<int8_t>::stream(s, indent + "  ", v.lanechange_process);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNING_MSGS_MESSAGE_DECISIONDEBUG_H
