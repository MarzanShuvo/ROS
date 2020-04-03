// Auto-generated. Do not edit!

// (in-package hrwros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let sensor_msgs = _finder('sensor_msgs');

//-----------------------------------------------------------

class BoxHeigthInformation {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sensor_data = null;
      this.box_height = null;
    }
    else {
      if (initObj.hasOwnProperty('sensor_data')) {
        this.sensor_data = initObj.sensor_data
      }
      else {
        this.sensor_data = new sensor_msgs.msg.Range();
      }
      if (initObj.hasOwnProperty('box_height')) {
        this.box_height = initObj.box_height
      }
      else {
        this.box_height = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type BoxHeigthInformation
    // Serialize message field [sensor_data]
    bufferOffset = sensor_msgs.msg.Range.serialize(obj.sensor_data, buffer, bufferOffset);
    // Serialize message field [box_height]
    bufferOffset = _serializer.float32(obj.box_height, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type BoxHeigthInformation
    let len;
    let data = new BoxHeigthInformation(null);
    // Deserialize message field [sensor_data]
    data.sensor_data = sensor_msgs.msg.Range.deserialize(buffer, bufferOffset);
    // Deserialize message field [box_height]
    data.box_height = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += sensor_msgs.msg.Range.getMessageSize(object.sensor_data);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'hrwros_msgs/BoxHeigthInformation';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '647d4215c72e4d75e13eeb705285c3bf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    sensor_msgs/Range sensor_data
    float32 box_height
    
    
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new BoxHeigthInformation(null);
    if (msg.sensor_data !== undefined) {
      resolved.sensor_data = sensor_msgs.msg.Range.Resolve(msg.sensor_data)
    }
    else {
      resolved.sensor_data = new sensor_msgs.msg.Range()
    }

    if (msg.box_height !== undefined) {
      resolved.box_height = msg.box_height;
    }
    else {
      resolved.box_height = 0.0
    }

    return resolved;
    }
};

module.exports = BoxHeigthInformation;
