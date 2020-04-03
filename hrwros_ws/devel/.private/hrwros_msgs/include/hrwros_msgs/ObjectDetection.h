// Generated by gencpp from file hrwros_msgs/ObjectDetection.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_OBJECTDETECTION_H
#define HRWROS_MSGS_MESSAGE_OBJECTDETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace hrwros_msgs
{
template <class ContainerAllocator>
struct ObjectDetection_
{
  typedef ObjectDetection_<ContainerAllocator> Type;

  ObjectDetection_()
    : header()
    , name()
    , detection_time()
    , pose()  {
    }
  ObjectDetection_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , detection_time()
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef ros::Time _detection_time_type;
  _detection_time_type detection_time;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectDetection_

typedef ::hrwros_msgs::ObjectDetection_<std::allocator<void> > ObjectDetection;

typedef boost::shared_ptr< ::hrwros_msgs::ObjectDetection > ObjectDetectionPtr;
typedef boost::shared_ptr< ::hrwros_msgs::ObjectDetection const> ObjectDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::ObjectDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hrwros_msgs::ObjectDetection_<ContainerAllocator1> & lhs, const ::hrwros_msgs::ObjectDetection_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.name == rhs.name &&
    lhs.detection_time == rhs.detection_time &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hrwros_msgs::ObjectDetection_<ContainerAllocator1> & lhs, const ::hrwros_msgs::ObjectDetection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef65ec4cbce1d0f9485816723aaa95bb";
  }

  static const char* value(const ::hrwros_msgs::ObjectDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef65ec4cbce1d0f9ULL;
  static const uint64_t static_value2 = 0x485816723aaa95bbULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/ObjectDetection";
  }

  static const char* value(const ::hrwros_msgs::ObjectDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header    # Message Header\n"
"string name               # Object name in a database\n"
"time detection_time       # The time when the object was detected      \n"
"geometry_msgs/Pose pose   # Pose of the object observed at the detection time\n"
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

  static const char* value(const ::hrwros_msgs::ObjectDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.detection_time);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::ObjectDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::ObjectDetection_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "detection_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.detection_time);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_OBJECTDETECTION_H
