;; Auto-generated. Do not edit!


(when (boundp 'robot_msg::SetMap)
  (if (not (find-package "ROBOT_MSG"))
    (make-package "ROBOT_MSG"))
  (shadow 'SetMap (find-package "ROBOT_MSG")))
(unless (find-package "ROBOT_MSG::SETMAP")
  (make-package "ROBOT_MSG::SETMAP"))
(unless (find-package "ROBOT_MSG::SETMAPREQUEST")
  (make-package "ROBOT_MSG::SETMAPREQUEST"))
(unless (find-package "ROBOT_MSG::SETMAPRESPONSE")
  (make-package "ROBOT_MSG::SETMAPRESPONSE"))

(in-package "ROS")





(defclass robot_msg::SetMapRequest
  :super ros::object
  :slots (_cmd _name ))

(defmethod robot_msg::SetMapRequest
  (:init
   (&key
    ((:cmd __cmd) "")
    ((:name __name) "")
    )
   (send-super :init)
   (setq _cmd (string __cmd))
   (setq _name (string __name))
   self)
  (:cmd
   (&optional __cmd)
   (if __cmd (setq _cmd __cmd)) _cmd)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:serialization-length
   ()
   (+
    ;; string _cmd
    4 (length _cmd)
    ;; string _name
    4 (length _name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _cmd
       (write-long (length _cmd) s) (princ _cmd s)
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _cmd
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _cmd (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass robot_msg::SetMapResponse
  :super ros::object
  :slots (_result _message_code _message ))

(defmethod robot_msg::SetMapResponse
  (:init
   (&key
    ((:result __result) nil)
    ((:message_code __message_code) 0)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _result __result)
   (setq _message_code (round __message_code))
   (setq _message (string __message))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:message_code
   (&optional __message_code)
   (if __message_code (setq _message_code __message_code)) _message_code)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ;; int32 _message_code
    4
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;; int32 _message_code
       (write-long _message_code s)
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int32 _message_code
     (setq _message_code (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass robot_msg::SetMap
  :super ros::object
  :slots ())

(setf (get robot_msg::SetMap :md5sum-) "99f106b6b38badff4d7e1109231959bc")
(setf (get robot_msg::SetMap :datatype-) "robot_msg/SetMap")
(setf (get robot_msg::SetMap :request) robot_msg::SetMapRequest)
(setf (get robot_msg::SetMap :response) robot_msg::SetMapResponse)

(defmethod robot_msg::SetMapRequest
  (:response () (instance robot_msg::SetMapResponse :init)))

(setf (get robot_msg::SetMapRequest :md5sum-) "99f106b6b38badff4d7e1109231959bc")
(setf (get robot_msg::SetMapRequest :datatype-) "robot_msg/SetMapRequest")
(setf (get robot_msg::SetMapRequest :definition-)
      "# srv definition

#request constants

#   \"building_map\",     构建地图
#   \"save_map\",         保存地图
#   \"loading_map\",      加载地图

#request fields
string  cmd     # 地图操作命令
string  name    # 地图名称
---

#response constants
#response fields
bool    result          #   执行结果，成功或者失败
int32   message_code    #   额外信息代码
string  message         #   额外信息，e.g. for error messages

")

(setf (get robot_msg::SetMapResponse :md5sum-) "99f106b6b38badff4d7e1109231959bc")
(setf (get robot_msg::SetMapResponse :datatype-) "robot_msg/SetMapResponse")
(setf (get robot_msg::SetMapResponse :definition-)
      "# srv definition

#request constants

#   \"building_map\",     构建地图
#   \"save_map\",         保存地图
#   \"loading_map\",      加载地图

#request fields
string  cmd     # 地图操作命令
string  name    # 地图名称
---

#response constants
#response fields
bool    result          #   执行结果，成功或者失败
int32   message_code    #   额外信息代码
string  message         #   额外信息，e.g. for error messages

")



(provide :robot_msg/SetMap "99f106b6b38badff4d7e1109231959bc")


