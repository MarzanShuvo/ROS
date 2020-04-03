;; Auto-generated. Do not edit!


(when (boundp 'hrwros_msgs::BoxHeightInformation)
  (if (not (find-package "HRWROS_MSGS"))
    (make-package "HRWROS_MSGS"))
  (shadow 'BoxHeightInformation (find-package "HRWROS_MSGS")))
(unless (find-package "HRWROS_MSGS::BOXHEIGHTINFORMATION")
  (make-package "HRWROS_MSGS::BOXHEIGHTINFORMATION"))

(in-package "ROS")
;;//! \htmlinclude BoxHeightInformation.msg.html
(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))


(defclass hrwros_msgs::BoxHeightInformation
  :super ros::object
  :slots (_sensor_data _box_height ))

(defmethod hrwros_msgs::BoxHeightInformation
  (:init
   (&key
    ((:sensor_data __sensor_data) (instance sensor_msgs::Range :init))
    ((:box_height __box_height) 0.0)
    )
   (send-super :init)
   (setq _sensor_data __sensor_data)
   (setq _box_height (float __box_height))
   self)
  (:sensor_data
   (&rest __sensor_data)
   (if (keywordp (car __sensor_data))
       (send* _sensor_data __sensor_data)
     (progn
       (if __sensor_data (setq _sensor_data (car __sensor_data)))
       _sensor_data)))
  (:box_height
   (&optional __box_height)
   (if __box_height (setq _box_height __box_height)) _box_height)
  (:serialization-length
   ()
   (+
    ;; sensor_msgs/Range _sensor_data
    (send _sensor_data :serialization-length)
    ;; float32 _box_height
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; sensor_msgs/Range _sensor_data
       (send _sensor_data :serialize s)
     ;; float32 _box_height
       (sys::poke _box_height (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; sensor_msgs/Range _sensor_data
     (send _sensor_data :deserialize buf ptr-) (incf ptr- (send _sensor_data :serialization-length))
   ;; float32 _box_height
     (setq _box_height (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get hrwros_msgs::BoxHeightInformation :md5sum-) "647d4215c72e4d75e13eeb705285c3bf")
(setf (get hrwros_msgs::BoxHeightInformation :datatype-) "hrwros_msgs/BoxHeightInformation")
(setf (get hrwros_msgs::BoxHeightInformation :definition-)
      "sensor_msgs/Range sensor_data
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

")



(provide :hrwros_msgs/BoxHeightInformation "647d4215c72e4d75e13eeb705285c3bf")


