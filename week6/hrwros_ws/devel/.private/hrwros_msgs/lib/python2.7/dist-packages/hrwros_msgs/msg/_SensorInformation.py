# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from hrwros_msgs/SensorInformation.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg
import sensor_msgs.msg

class SensorInformation(genpy.Message):
  _md5sum = "d963bb325e7c9c7478db23eeb529f1eb"
  _type = "hrwros_msgs/SensorInformation"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """sensor_msgs/Range sensor_data
string maker_name
uint32 part_number

================================================================================
MSG: sensor_msgs/Range
# Single range reading from an active ranger that emits energy and reports
# one range reading that is valid along an arc at the distance measured. 
# This message is  not appropriate for laser scanners. See the LaserScan
# message if you are working with a laser scanner.

# This message also can represent a fixed-distance (binary) ranger.  This
# sensor will have min_range===max_range===distance of detection.
# These sensors follow REP 117 and will output -Inf if the object is detected
# and +Inf if the object is outside of the detection range.

Header header           # timestamp in the header is the time the ranger
                        # returned the distance reading

# Radiation type enums
# If you want a value added to this list, send an email to the ros-users list
uint8 ULTRASOUND=0
uint8 INFRARED=1

uint8 radiation_type    # the type of radiation used by the sensor
                        # (sound, IR, etc) [enum]

float32 field_of_view   # the size of the arc that the distance reading is
                        # valid for [rad]
                        # the object causing the range reading may have
                        # been anywhere within -field_of_view/2 and
                        # field_of_view/2 at the measured range. 
                        # 0 angle corresponds to the x-axis of the sensor.

float32 min_range       # minimum range value [m]
float32 max_range       # maximum range value [m]
                        # Fixed distance rangers require min_range==max_range

float32 range           # range data [m]
                        # (Note: values < range_min or > range_max
                        # should be discarded)
                        # Fixed distance rangers only output -Inf or +Inf.
                        # -Inf represents a detection within fixed distance.
                        # (Detection too close to the sensor to quantify)
                        # +Inf represents no detection within the fixed distance.
                        # (Object out of range)
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['sensor_data','maker_name','part_number']
  _slot_types = ['sensor_msgs/Range','string','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sensor_data,maker_name,part_number

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SensorInformation, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.sensor_data is None:
        self.sensor_data = sensor_msgs.msg.Range()
      if self.maker_name is None:
        self.maker_name = ''
      if self.part_number is None:
        self.part_number = 0
    else:
      self.sensor_data = sensor_msgs.msg.Range()
      self.maker_name = ''
      self.part_number = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.sensor_data.header.seq, _x.sensor_data.header.stamp.secs, _x.sensor_data.header.stamp.nsecs))
      _x = self.sensor_data.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_B4f().pack(_x.sensor_data.radiation_type, _x.sensor_data.field_of_view, _x.sensor_data.min_range, _x.sensor_data.max_range, _x.sensor_data.range))
      _x = self.maker_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_I().pack(self.part_number))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.sensor_data is None:
        self.sensor_data = sensor_msgs.msg.Range()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.sensor_data.header.seq, _x.sensor_data.header.stamp.secs, _x.sensor_data.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sensor_data.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.sensor_data.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.sensor_data.radiation_type, _x.sensor_data.field_of_view, _x.sensor_data.min_range, _x.sensor_data.max_range, _x.sensor_data.range,) = _get_struct_B4f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.maker_name = str[start:end].decode('utf-8')
      else:
        self.maker_name = str[start:end]
      start = end
      end += 4
      (self.part_number,) = _get_struct_I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.sensor_data.header.seq, _x.sensor_data.header.stamp.secs, _x.sensor_data.header.stamp.nsecs))
      _x = self.sensor_data.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_B4f().pack(_x.sensor_data.radiation_type, _x.sensor_data.field_of_view, _x.sensor_data.min_range, _x.sensor_data.max_range, _x.sensor_data.range))
      _x = self.maker_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_I().pack(self.part_number))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.sensor_data is None:
        self.sensor_data = sensor_msgs.msg.Range()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.sensor_data.header.seq, _x.sensor_data.header.stamp.secs, _x.sensor_data.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sensor_data.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.sensor_data.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.sensor_data.radiation_type, _x.sensor_data.field_of_view, _x.sensor_data.min_range, _x.sensor_data.max_range, _x.sensor_data.range,) = _get_struct_B4f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.maker_name = str[start:end].decode('utf-8')
      else:
        self.maker_name = str[start:end]
      start = end
      end += 4
      (self.part_number,) = _get_struct_I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_B4f = None
def _get_struct_B4f():
    global _struct_B4f
    if _struct_B4f is None:
        _struct_B4f = struct.Struct("<B4f")
    return _struct_B4f
