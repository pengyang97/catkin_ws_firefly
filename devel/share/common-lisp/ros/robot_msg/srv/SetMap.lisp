; Auto-generated. Do not edit!


(cl:in-package robot_msg-srv)


;//! \htmlinclude SetMap-request.msg.html

(cl:defclass <SetMap-request> (roslisp-msg-protocol:ros-message)
  ((cmd
    :reader cmd
    :initarg :cmd
    :type cl:string
    :initform "")
   (name
    :reader name
    :initarg :name
    :type cl:string
    :initform ""))
)

(cl:defclass SetMap-request (<SetMap-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetMap-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetMap-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msg-srv:<SetMap-request> is deprecated: use robot_msg-srv:SetMap-request instead.")))

(cl:ensure-generic-function 'cmd-val :lambda-list '(m))
(cl:defmethod cmd-val ((m <SetMap-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msg-srv:cmd-val is deprecated.  Use robot_msg-srv:cmd instead.")
  (cmd m))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <SetMap-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msg-srv:name-val is deprecated.  Use robot_msg-srv:name instead.")
  (name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetMap-request>) ostream)
  "Serializes a message object of type '<SetMap-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'cmd))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'cmd))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetMap-request>) istream)
  "Deserializes a message object of type '<SetMap-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'cmd) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'cmd) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetMap-request>)))
  "Returns string type for a service object of type '<SetMap-request>"
  "robot_msg/SetMapRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetMap-request)))
  "Returns string type for a service object of type 'SetMap-request"
  "robot_msg/SetMapRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetMap-request>)))
  "Returns md5sum for a message object of type '<SetMap-request>"
  "99f106b6b38badff4d7e1109231959bc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetMap-request)))
  "Returns md5sum for a message object of type 'SetMap-request"
  "99f106b6b38badff4d7e1109231959bc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetMap-request>)))
  "Returns full string definition for message of type '<SetMap-request>"
  (cl:format cl:nil "# srv definition~%~%#request constants~%~%#   \"building_map\",     构建地图~%#   \"save_map\",         保存地图~%#   \"loading_map\",      加载地图~%~%#request fields~%string  cmd     # 地图操作命令~%string  name    # 地图名称~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetMap-request)))
  "Returns full string definition for message of type 'SetMap-request"
  (cl:format cl:nil "# srv definition~%~%#request constants~%~%#   \"building_map\",     构建地图~%#   \"save_map\",         保存地图~%#   \"loading_map\",      加载地图~%~%#request fields~%string  cmd     # 地图操作命令~%string  name    # 地图名称~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetMap-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'cmd))
     4 (cl:length (cl:slot-value msg 'name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetMap-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetMap-request
    (cl:cons ':cmd (cmd msg))
    (cl:cons ':name (name msg))
))
;//! \htmlinclude SetMap-response.msg.html

(cl:defclass <SetMap-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil)
   (message_code
    :reader message_code
    :initarg :message_code
    :type cl:integer
    :initform 0)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass SetMap-response (<SetMap-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetMap-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetMap-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msg-srv:<SetMap-response> is deprecated: use robot_msg-srv:SetMap-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <SetMap-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msg-srv:result-val is deprecated.  Use robot_msg-srv:result instead.")
  (result m))

(cl:ensure-generic-function 'message_code-val :lambda-list '(m))
(cl:defmethod message_code-val ((m <SetMap-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msg-srv:message_code-val is deprecated.  Use robot_msg-srv:message_code instead.")
  (message_code m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <SetMap-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msg-srv:message-val is deprecated.  Use robot_msg-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetMap-response>) ostream)
  "Serializes a message object of type '<SetMap-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'message_code)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetMap-response>) istream)
  "Deserializes a message object of type '<SetMap-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message_code) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetMap-response>)))
  "Returns string type for a service object of type '<SetMap-response>"
  "robot_msg/SetMapResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetMap-response)))
  "Returns string type for a service object of type 'SetMap-response"
  "robot_msg/SetMapResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetMap-response>)))
  "Returns md5sum for a message object of type '<SetMap-response>"
  "99f106b6b38badff4d7e1109231959bc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetMap-response)))
  "Returns md5sum for a message object of type 'SetMap-response"
  "99f106b6b38badff4d7e1109231959bc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetMap-response>)))
  "Returns full string definition for message of type '<SetMap-response>"
  (cl:format cl:nil "~%#response constants~%#response fields~%bool    result          #   执行结果，成功或者失败~%int32   message_code    #   额外信息代码~%string  message         #   额外信息，e.g. for error messages~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetMap-response)))
  "Returns full string definition for message of type 'SetMap-response"
  (cl:format cl:nil "~%#response constants~%#response fields~%bool    result          #   执行结果，成功或者失败~%int32   message_code    #   额外信息代码~%string  message         #   额外信息，e.g. for error messages~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetMap-response>))
  (cl:+ 0
     1
     4
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetMap-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetMap-response
    (cl:cons ':result (result msg))
    (cl:cons ':message_code (message_code msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetMap)))
  'SetMap-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetMap)))
  'SetMap-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetMap)))
  "Returns string type for a service object of type '<SetMap>"
  "robot_msg/SetMap")