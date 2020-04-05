// Generated by gencpp from file hrwros_msgs/ConvertMetresToFeetResponse.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETRESPONSE_H
#define HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_msgs
{
template <class ContainerAllocator>
struct ConvertMetresToFeetResponse_
{
  typedef ConvertMetresToFeetResponse_<ContainerAllocator> Type;

  ConvertMetresToFeetResponse_()
    : distance_feet(0.0)
    , success(false)  {
    }
  ConvertMetresToFeetResponse_(const ContainerAllocator& _alloc)
    : distance_feet(0.0)
    , success(false)  {
  (void)_alloc;
    }



   typedef double _distance_feet_type;
  _distance_feet_type distance_feet;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ConvertMetresToFeetResponse_

typedef ::hrwros_msgs::ConvertMetresToFeetResponse_<std::allocator<void> > ConvertMetresToFeetResponse;

typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetResponse > ConvertMetresToFeetResponsePtr;
typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetResponse const> ConvertMetresToFeetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator1> & lhs, const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.distance_feet == rhs.distance_feet &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator1> & lhs, const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1e3afbb19bd7a378a88d85bbef815e6";
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1e3afbb19bd7a37ULL;
  static const uint64_t static_value2 = 0x8a88d85bbef815e6ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/ConvertMetresToFeetResponse";
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 distance_feet\n"
"bool success\n"
"\n"
;
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance_feet);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConvertMetresToFeetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::ConvertMetresToFeetResponse_<ContainerAllocator>& v)
  {
    s << indent << "distance_feet: ";
    Printer<double>::stream(s, indent + "  ", v.distance_feet);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETRESPONSE_H
