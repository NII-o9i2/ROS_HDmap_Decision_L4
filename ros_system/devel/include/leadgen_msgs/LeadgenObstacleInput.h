// Generated by gencpp from file leadgen_msgs/LeadgenObstacleInput.msg
// DO NOT EDIT!


#ifndef LEADGEN_MSGS_MESSAGE_LEADGENOBSTACLEINPUT_H
#define LEADGEN_MSGS_MESSAGE_LEADGENOBSTACLEINPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>

namespace leadgen_msgs
{
template <class ContainerAllocator>
struct LeadgenObstacleInput_
{
  typedef LeadgenObstacleInput_<ContainerAllocator> Type;

  LeadgenObstacleInput_()
    : header()
    , id(0)
    , source_sensor(0)
    , type(0)
    , status(0)
    , cutting(0)
    , length(0.0)
    , width(0.0)
    , height(0.0)
    , velocity_heading(0.0)
    , rlt_valid(false)
    , rlt_position()
    , rlt_theta(0.0)
    , rlt_velocity()
    , abs_valid(false)
    , abs_position()
    , abs_theta(0.0)
    , abs_velocity()  {
    }
  LeadgenObstacleInput_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , source_sensor(0)
    , type(0)
    , status(0)
    , cutting(0)
    , length(0.0)
    , width(0.0)
    , height(0.0)
    , velocity_heading(0.0)
    , rlt_valid(false)
    , rlt_position(_alloc)
    , rlt_theta(0.0)
    , rlt_velocity(_alloc)
    , abs_valid(false)
    , abs_position(_alloc)
    , abs_theta(0.0)
    , abs_velocity(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _id_type;
  _id_type id;

   typedef uint16_t _source_sensor_type;
  _source_sensor_type source_sensor;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint8_t _status_type;
  _status_type status;

   typedef uint8_t _cutting_type;
  _cutting_type cutting;

   typedef float _length_type;
  _length_type length;

   typedef float _width_type;
  _width_type width;

   typedef float _height_type;
  _height_type height;

   typedef float _velocity_heading_type;
  _velocity_heading_type velocity_heading;

   typedef uint8_t _rlt_valid_type;
  _rlt_valid_type rlt_valid;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _rlt_position_type;
  _rlt_position_type rlt_position;

   typedef float _rlt_theta_type;
  _rlt_theta_type rlt_theta;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _rlt_velocity_type;
  _rlt_velocity_type rlt_velocity;

   typedef uint8_t _abs_valid_type;
  _abs_valid_type abs_valid;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _abs_position_type;
  _abs_position_type abs_position;

   typedef float _abs_theta_type;
  _abs_theta_type abs_theta;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _abs_velocity_type;
  _abs_velocity_type abs_velocity;



  enum {
    SENSOR_LIDAR = 1u,
    SENSOR_VISION = 2u,
    SENSOR_RADAR = 4u,
    OBSTACLE_TYPE_UNKNOWN = 0u,
    OBSTACLE_TYPE_SMALL = 1u,
    OBSTACLE_TYPE_BIG = 2u,
    OBSTACLE_TYPE_CAR = 3u,
    OBSTACLE_TYPE_BUS = 4u,
    OBSTACLE_TYPE_TRUCK = 5u,
    OBSTACLE_TYPE_CYCLER = 6u,
    OBSTACLE_TYPE_PEDESTRIAN = 7u,
    OBSTACLE_TYPE_PLANT = 8u,
    OBSTACLE_TYPE_FENCE = 9u,
    OBSTACLE_STATUS_UNDEFINED = 0u,
    OBSTACLE_STATUS_STANDING = 1u,
    OBSTACLE_STATUS_STOPPED = 2u,
    OBSTACLE_STATUS_MOVING = 3u,
    OBSTACLE_STATUS_ONCOMING = 4u,
    OBSTACLE_STATUS_PARKED = 5u,
    OBSTACLE_STATUS_UNUSED = 6u,
    OBSTACLE_CUTTING_UNDEFINED = 0u,
    OBSTACLE_IN_HOST_LANE = 1u,
    OBSTACLE_OUT_HOST_LANE = 2u,
    OBSTACLE_CUTTING_IN = 3u,
    OBSTACLE_CUTTING_OUT = 4u,
  };


  typedef boost::shared_ptr< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> const> ConstPtr;

}; // struct LeadgenObstacleInput_

typedef ::leadgen_msgs::LeadgenObstacleInput_<std::allocator<void> > LeadgenObstacleInput;

typedef boost::shared_ptr< ::leadgen_msgs::LeadgenObstacleInput > LeadgenObstacleInputPtr;
typedef boost::shared_ptr< ::leadgen_msgs::LeadgenObstacleInput const> LeadgenObstacleInputConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace leadgen_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'leadgen_msgs': ['/home/xiaotongfeng/Desktop/ROS_HDmap_Decision_L4/ros_system/src/planning/leadgen_msgs/./'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f46fbbe4b1176a98fdda809f434653f1";
  }

  static const char* value(const ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf46fbbe4b1176a98ULL;
  static const uint64_t static_value2 = 0xfdda809f434653f1ULL;
};

template<class ContainerAllocator>
struct DataType< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "leadgen_msgs/LeadgenObstacleInput";
  }

  static const char* value(const ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is to describe the information of an obstacle\n\
\n\
# Header\n\
std_msgs/Header header\n\
\n\
# obstacle ID number\n\
int32 id\n\
\n\
# obstacle detection sources(optional)\n\
uint16 source_sensor\n\
\n\
# obstacle source sensor definition, using bit-wise operations\n\
# A single obstacle can be detected by multiple sensors, and use OR operation as the result\n\
uint16 SENSOR_LIDAR = 1\n\
uint16 SENSOR_VISION = 2\n\
uint16 SENSOR_RADAR = 4\n\
\n\
# obstacle type(optional)\n\
uint8 type\n\
\n\
# obstacle type definitions\n\
# subject to change\n\
\n\
uint8 OBSTACLE_TYPE_UNKNOWN = 0\n\
uint8 OBSTACLE_TYPE_SMALL = 1\n\
uint8 OBSTACLE_TYPE_BIG = 2\n\
uint8 OBSTACLE_TYPE_CAR = 3\n\
uint8 OBSTACLE_TYPE_BUS = 4\n\
uint8 OBSTACLE_TYPE_TRUCK = 5\n\
uint8 OBSTACLE_TYPE_CYCLER = 6\n\
uint8 OBSTACLE_TYPE_PEDESTRIAN = 7\n\
uint8 OBSTACLE_TYPE_PLANT = 8\n\
uint8 OBSTACLE_TYPE_FENCE = 9\n\
\n\
# obstacle status(optional)\n\
uint8 status\n\
\n\
# obstacle status definitions\n\
# according to Mobileye specs\n\
uint8 OBSTACLE_STATUS_UNDEFINED = 0\n\
uint8 OBSTACLE_STATUS_STANDING = 1\n\
uint8 OBSTACLE_STATUS_STOPPED = 2\n\
uint8 OBSTACLE_STATUS_MOVING = 3\n\
uint8 OBSTACLE_STATUS_ONCOMING = 4\n\
uint8 OBSTACLE_STATUS_PARKED = 5\n\
uint8 OBSTACLE_STATUS_UNUSED = 6\n\
\n\
# obstacle cutting(optional)\n\
uint8 cutting\n\
\n\
# obstacle cutting definitions\n\
# according to Mobileye specs\n\
uint8 OBSTACLE_CUTTING_UNDEFINED = 0\n\
uint8 OBSTACLE_IN_HOST_LANE = 1\n\
uint8 OBSTACLE_OUT_HOST_LANE = 2\n\
uint8 OBSTACLE_CUTTING_IN = 3\n\
uint8 OBSTACLE_CUTTING_OUT = 4\n\
\n\
# obstacle size\n\
float32 length  # along obstacle's +x direction, in [m] meter\n\
float32 width   # along obstacle's +y direction, in [m]\n\
float32 height  # along obstacle's +z direction, in [m]\n\
\n\
float32 velocity_heading # the velocity heading in the world frame\n\
\n\
# obstacle pose in body frame\n\
bool rlt_valid  # relative information valid\n\
geometry_msgs/Point rlt_position    # relative position to body frame\n\
float32 rlt_theta   # relative theta angle, to body frame along z axis\n\
\n\
# obstacle velocity in body frame\n\
geometry_msgs/Vector3 rlt_velocity  # relative velocity to body frame \n\
\n\
# obstacle pose in world frame\n\
bool abs_valid  # absolute information valid\n\
geometry_msgs/Point abs_position    # absolute position in world frame\n\
float32 abs_theta   # absolute yaw angle in world frame\n\
\n\
# obstacle velocity in world frame\n\
geometry_msgs/Vector3 abs_velocity  # absolute velocity in world frame\n\
\n\
\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.source_sensor);
      stream.next(m.type);
      stream.next(m.status);
      stream.next(m.cutting);
      stream.next(m.length);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.velocity_heading);
      stream.next(m.rlt_valid);
      stream.next(m.rlt_position);
      stream.next(m.rlt_theta);
      stream.next(m.rlt_velocity);
      stream.next(m.abs_valid);
      stream.next(m.abs_position);
      stream.next(m.abs_theta);
      stream.next(m.abs_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LeadgenObstacleInput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::leadgen_msgs::LeadgenObstacleInput_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "source_sensor: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.source_sensor);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "cutting: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cutting);
    s << indent << "length: ";
    Printer<float>::stream(s, indent + "  ", v.length);
    s << indent << "width: ";
    Printer<float>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<float>::stream(s, indent + "  ", v.height);
    s << indent << "velocity_heading: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_heading);
    s << indent << "rlt_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rlt_valid);
    s << indent << "rlt_position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.rlt_position);
    s << indent << "rlt_theta: ";
    Printer<float>::stream(s, indent + "  ", v.rlt_theta);
    s << indent << "rlt_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.rlt_velocity);
    s << indent << "abs_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.abs_valid);
    s << indent << "abs_position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.abs_position);
    s << indent << "abs_theta: ";
    Printer<float>::stream(s, indent + "  ", v.abs_theta);
    s << indent << "abs_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.abs_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEADGEN_MSGS_MESSAGE_LEADGENOBSTACLEINPUT_H
