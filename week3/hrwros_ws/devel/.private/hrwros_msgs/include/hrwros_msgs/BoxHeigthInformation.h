// Generated by gencpp from file hrwros_msgs/BoxHeigthInformation.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_BOXHEIGTHINFORMATION_H
#define HRWROS_MSGS_MESSAGE_BOXHEIGTHINFORMATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/Range.h>

namespace hrwros_msgs
{
template <class ContainerAllocator>
struct BoxHeigthInformation_
{
  typedef BoxHeigthInformation_<ContainerAllocator> Type;

  BoxHeigthInformation_()
    : sensor_data()
    , box_height(0.0)  {
    }
  BoxHeigthInformation_(const ContainerAllocator& _alloc)
    : sensor_data(_alloc)
    , box_height(0.0)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::Range_<ContainerAllocator>  _sensor_data_type;
  _sensor_data_type sensor_data;

   typedef float _box_height_type;
  _box_height_type box_height;





  typedef boost::shared_ptr< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> const> ConstPtr;

}; // struct BoxHeigthInformation_

typedef ::hrwros_msgs::BoxHeigthInformation_<std::allocator<void> > BoxHeigthInformation;

typedef boost::shared_ptr< ::hrwros_msgs::BoxHeigthInformation > BoxHeigthInformationPtr;
typedef boost::shared_ptr< ::hrwros_msgs::BoxHeigthInformation const> BoxHeigthInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/melodic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'hrwros_msgs': ['/home/marzan/hrwros_ws/src/hrwros/hrwros_msgs/msg', '/home/marzan/hrwros_ws/devel/.private/hrwros_msgs/share/hrwros_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "647d4215c72e4d75e13eeb705285c3bf";
  }

  static const char* value(const ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x647d4215c72e4d75ULL;
  static const uint64_t static_value2 = 0xe13eeb705285c3bfULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/BoxHeigthInformation";
  }

  static const char* value(const ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/Range sensor_data\n"
"float32 box_height\n"
"\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Range\n"
"# Single range reading from an active ranger that emits energy and reports\n"
"# one range reading that is valid along an arc at the distance measured. \n"
"# This message is  not appropriate for laser scanners. See the LaserScan\n"
"# message if you are working with a laser scanner.\n"
"\n"
"# This message also can represent a fixed-distance (binary) ranger.  This\n"
"# sensor will have min_range===max_range===distance of detection.\n"
"# These sensors follow REP 117 and will output -Inf if the object is detected\n"
"# and +Inf if the object is outside of the detection range.\n"
"\n"
"Header header           # timestamp in the header is the time the ranger\n"
"                        # returned the distance reading\n"
"\n"
"# Radiation type enums\n"
"# If you want a value added to this list, send an email to the ros-users list\n"
"uint8 ULTRASOUND=0\n"
"uint8 INFRARED=1\n"
"\n"
"uint8 radiation_type    # the type of radiation used by the sensor\n"
"                        # (sound, IR, etc) [enum]\n"
"\n"
"float32 field_of_view   # the size of the arc that the distance reading is\n"
"                        # valid for [rad]\n"
"                        # the object causing the range reading may have\n"
"                        # been anywhere within -field_of_view/2 and\n"
"                        # field_of_view/2 at the measured range. \n"
"                        # 0 angle corresponds to the x-axis of the sensor.\n"
"\n"
"float32 min_range       # minimum range value [m]\n"
"float32 max_range       # maximum range value [m]\n"
"                        # Fixed distance rangers require min_range==max_range\n"
"\n"
"float32 range           # range data [m]\n"
"                        # (Note: values < range_min or > range_max\n"
"                        # should be discarded)\n"
"                        # Fixed distance rangers only output -Inf or +Inf.\n"
"                        # -Inf represents a detection within fixed distance.\n"
"                        # (Detection too close to the sensor to quantify)\n"
"                        # +Inf represents no detection within the fixed distance.\n"
"                        # (Object out of range)\n"
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
;
  }

  static const char* value(const ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensor_data);
      stream.next(m.box_height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoxHeigthInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::BoxHeigthInformation_<ContainerAllocator>& v)
  {
    s << indent << "sensor_data: ";
    s << std::endl;
    Printer< ::sensor_msgs::Range_<ContainerAllocator> >::stream(s, indent + "  ", v.sensor_data);
    s << indent << "box_height: ";
    Printer<float>::stream(s, indent + "  ", v.box_height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_BOXHEIGTHINFORMATION_H
