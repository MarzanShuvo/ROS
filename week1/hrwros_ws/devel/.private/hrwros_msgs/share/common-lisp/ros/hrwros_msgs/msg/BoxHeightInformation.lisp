; Auto-generated. Do not edit!


(cl:in-package hrwros_msgs-msg)


;//! \htmlinclude BoxHeightInformation.msg.html

(cl:defclass <BoxHeightInformation> (roslisp-msg-protocol:ros-message)
  ((sensor_data
    :reader sensor_data
    :initarg :sensor_data
    :type sensor_msgs-msg:Range
    :initform (cl:make-instance 'sensor_msgs-msg:Range))
   (box_height
    :reader box_height
    :initarg :box_height
    :type cl:float
    :initform 0.0))
)

(cl:defclass BoxHeightInformation (<BoxHeightInformation>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BoxHeightInformation>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BoxHeightInformation)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hrwros_msgs-msg:<BoxHeightInformation> is deprecated: use hrwros_msgs-msg:BoxHeightInformation instead.")))

(cl:ensure-generic-function 'sensor_data-val :lambda-list '(m))
(cl:defmethod sensor_data-val ((m <BoxHeightInformation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hrwros_msgs-msg:sensor_data-val is deprecated.  Use hrwros_msgs-msg:sensor_data instead.")
  (sensor_data m))

(cl:ensure-generic-function 'box_height-val :lambda-list '(m))
(cl:defmethod box_height-val ((m <BoxHeightInformation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hrwros_msgs-msg:box_height-val is deprecated.  Use hrwros_msgs-msg:box_height instead.")
  (box_height m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BoxHeightInformation>) ostream)
  "Serializes a message object of type '<BoxHeightInformation>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'sensor_data) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'box_height))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BoxHeightInformation>) istream)
  "Deserializes a message object of type '<BoxHeightInformation>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'sensor_data) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'box_height) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BoxHeightInformation>)))
  "Returns string type for a message object of type '<BoxHeightInformation>"
  "hrwros_msgs/BoxHeightInformation")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BoxHeightInformation)))
  "Returns string type for a message object of type 'BoxHeightInformation"
  "hrwros_msgs/BoxHeightInformation")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BoxHeightInformation>)))
  "Returns md5sum for a message object of type '<BoxHeightInformation>"
  "647d4215c72e4d75e13eeb705285c3bf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BoxHeightInformation)))
  "Returns md5sum for a message object of type 'BoxHeightInformation"
  "647d4215c72e4d75e13eeb705285c3bf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BoxHeightInformation>)))
  "Returns full string definition for message of type '<BoxHeightInformation>"
  (cl:format cl:nil "sensor_msgs/Range sensor_data~%float32 box_height~%~%~%================================================================================~%MSG: sensor_msgs/Range~%# Single range reading from an active ranger that emits energy and reports~%# one range reading that is valid along an arc at the distance measured. ~%# This message is  not appropriate for laser scanners. See the LaserScan~%# message if you are working with a laser scanner.~%~%# This message also can represent a fixed-distance (binary) ranger.  This~%# sensor will have min_range===max_range===distance of detection.~%# These sensors follow REP 117 and will output -Inf if the object is detected~%# and +Inf if the object is outside of the detection range.~%~%Header header           # timestamp in the header is the time the ranger~%                        # returned the distance reading~%~%# Radiation type enums~%# If you want a value added to this list, send an email to the ros-users list~%uint8 ULTRASOUND=0~%uint8 INFRARED=1~%~%uint8 radiation_type    # the type of radiation used by the sensor~%                        # (sound, IR, etc) [enum]~%~%float32 field_of_view   # the size of the arc that the distance reading is~%                        # valid for [rad]~%                        # the object causing the range reading may have~%                        # been anywhere within -field_of_view/2 and~%                        # field_of_view/2 at the measured range. ~%                        # 0 angle corresponds to the x-axis of the sensor.~%~%float32 min_range       # minimum range value [m]~%float32 max_range       # maximum range value [m]~%                        # Fixed distance rangers require min_range==max_range~%~%float32 range           # range data [m]~%                        # (Note: values < range_min or > range_max~%                        # should be discarded)~%                        # Fixed distance rangers only output -Inf or +Inf.~%                        # -Inf represents a detection within fixed distance.~%                        # (Detection too close to the sensor to quantify)~%                        # +Inf represents no detection within the fixed distance.~%                        # (Object out of range)~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BoxHeightInformation)))
  "Returns full string definition for message of type 'BoxHeightInformation"
  (cl:format cl:nil "sensor_msgs/Range sensor_data~%float32 box_height~%~%~%================================================================================~%MSG: sensor_msgs/Range~%# Single range reading from an active ranger that emits energy and reports~%# one range reading that is valid along an arc at the distance measured. ~%# This message is  not appropriate for laser scanners. See the LaserScan~%# message if you are working with a laser scanner.~%~%# This message also can represent a fixed-distance (binary) ranger.  This~%# sensor will have min_range===max_range===distance of detection.~%# These sensors follow REP 117 and will output -Inf if the object is detected~%# and +Inf if the object is outside of the detection range.~%~%Header header           # timestamp in the header is the time the ranger~%                        # returned the distance reading~%~%# Radiation type enums~%# If you want a value added to this list, send an email to the ros-users list~%uint8 ULTRASOUND=0~%uint8 INFRARED=1~%~%uint8 radiation_type    # the type of radiation used by the sensor~%                        # (sound, IR, etc) [enum]~%~%float32 field_of_view   # the size of the arc that the distance reading is~%                        # valid for [rad]~%                        # the object causing the range reading may have~%                        # been anywhere within -field_of_view/2 and~%                        # field_of_view/2 at the measured range. ~%                        # 0 angle corresponds to the x-axis of the sensor.~%~%float32 min_range       # minimum range value [m]~%float32 max_range       # maximum range value [m]~%                        # Fixed distance rangers require min_range==max_range~%~%float32 range           # range data [m]~%                        # (Note: values < range_min or > range_max~%                        # should be discarded)~%                        # Fixed distance rangers only output -Inf or +Inf.~%                        # -Inf represents a detection within fixed distance.~%                        # (Detection too close to the sensor to quantify)~%                        # +Inf represents no detection within the fixed distance.~%                        # (Object out of range)~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BoxHeightInformation>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'sensor_data))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BoxHeightInformation>))
  "Converts a ROS message object to a list"
  (cl:list 'BoxHeightInformation
    (cl:cons ':sensor_data (sensor_data msg))
    (cl:cons ':box_height (box_height msg))
))
