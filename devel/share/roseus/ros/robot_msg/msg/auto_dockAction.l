;; Auto-generated. Do not edit!


(when (boundp 'robot_msg::auto_dockAction)
  (if (not (find-package "ROBOT_MSG"))
    (make-package "ROBOT_MSG"))
  (shadow 'auto_dockAction (find-package "ROBOT_MSG")))
(unless (find-package "ROBOT_MSG::AUTO_DOCKACTION")
  (make-package "ROBOT_MSG::AUTO_DOCKACTION"))

(in-package "ROS")
;;//! \htmlinclude auto_dockAction.msg.html


(defclass robot_msg::auto_dockAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod robot_msg::auto_dockAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance robot_msg::auto_dockActionGoal :init))
    ((:action_result __action_result) (instance robot_msg::auto_dockActionResult :init))
    ((:action_feedback __action_feedback) (instance robot_msg::auto_dockActionFeedback :init))
    )
   (send-super :init)
   (setq _action_goal __action_goal)
   (setq _action_result __action_result)
   (setq _action_feedback __action_feedback)
   self)
  (:action_goal
   (&rest __action_goal)
   (if (keywordp (car __action_goal))
       (send* _action_goal __action_goal)
     (progn
       (if __action_goal (setq _action_goal (car __action_goal)))
       _action_goal)))
  (:action_result
   (&rest __action_result)
   (if (keywordp (car __action_result))
       (send* _action_result __action_result)
     (progn
       (if __action_result (setq _action_result (car __action_result)))
       _action_result)))
  (:action_feedback
   (&rest __action_feedback)
   (if (keywordp (car __action_feedback))
       (send* _action_feedback __action_feedback)
     (progn
       (if __action_feedback (setq _action_feedback (car __action_feedback)))
       _action_feedback)))
  (:serialization-length
   ()
   (+
    ;; robot_msg/auto_dockActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; robot_msg/auto_dockActionResult _action_result
    (send _action_result :serialization-length)
    ;; robot_msg/auto_dockActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; robot_msg/auto_dockActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; robot_msg/auto_dockActionResult _action_result
       (send _action_result :serialize s)
     ;; robot_msg/auto_dockActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; robot_msg/auto_dockActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; robot_msg/auto_dockActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; robot_msg/auto_dockActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get robot_msg::auto_dockAction :md5sum-) "9e98f2058ad2cc4e7559f47f7c2c4b81")
(setf (get robot_msg::auto_dockAction :datatype-) "robot_msg/auto_dockAction")
(setf (get robot_msg::auto_dockAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

auto_dockActionGoal action_goal
auto_dockActionResult action_result
auto_dockActionFeedback action_feedback

================================================================================
MSG: robot_msg/auto_dockActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
auto_dockGoal goal

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

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: robot_msg/auto_dockGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# 定义目标goal
bool dock_ctrl  # 对接控制    true 去充电 false 取消充电


================================================================================
MSG: robot_msg/auto_dockActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
auto_dockResult result

================================================================================
MSG: actionlib_msgs/GoalStatus
GoalID goal_id
uint8 status
uint8 PENDING         = 0   # The goal has yet to be processed by the action server
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                            #   and has since completed its execution (Terminal State)
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                            #    to some failure (Terminal State)
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                            #    because the goal was unattainable or invalid (Terminal State)
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                            #    and has not yet completed execution
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                            #    but the action server has not yet confirmed that the goal is canceled
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                            #    and was successfully cancelled (Terminal State)
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                            #    sent over the wire by an action server

#Allow for the user to associate a string with GoalStatus for debugging
string text


================================================================================
MSG: robot_msg/auto_dockResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the result 回充结果
bool dock_result       # 成功１　失败０


================================================================================
MSG: robot_msg/auto_dockActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
auto_dockFeedback feedback

================================================================================
MSG: robot_msg/auto_dockFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message
# constants state enum
uint8 NONE              = 0 #初始化状态
uint8 SEARCHING_STATION = 1 # 1-寻找充电桩
uint8 DOCKING_STATION   = 2 # 2-对接中
uint8 DOCKING_SUCCESS   = 3 # 3-对接成功
uint8 SEPERATING        = 4 # 4-脱离中
uint8 SEPERATING_DONE   = 5 # 5-脱离成功
uint8 SEARCHING_FAILURE = 6 # 6-失败-未找到充电桩
uint8 DOCKING_FAILURE   = 7 # 7-失败-对接失败
uint8 SEPERAT_FAILURE   = 8 # 8-失败-脱离失败
uint8 CANCLED           = 9 # 9-成功-动作被取消

uint8 dock_feedback
string dock_feedback_text


")



(provide :robot_msg/auto_dockAction "9e98f2058ad2cc4e7559f47f7c2c4b81")

