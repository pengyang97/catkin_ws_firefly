
(cl:in-package :asdf)

(defsystem "robot_msg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "MapLoading" :depends-on ("_package_MapLoading"))
    (:file "_package_MapLoading" :depends-on ("_package"))
    (:file "MapSaving" :depends-on ("_package_MapSaving"))
    (:file "_package_MapSaving" :depends-on ("_package"))
    (:file "SetAction" :depends-on ("_package_SetAction"))
    (:file "_package_SetAction" :depends-on ("_package"))
    (:file "SetDevice" :depends-on ("_package_SetDevice"))
    (:file "_package_SetDevice" :depends-on ("_package"))
    (:file "SetMap" :depends-on ("_package_SetMap"))
    (:file "_package_SetMap" :depends-on ("_package"))
    (:file "SetSlam" :depends-on ("_package_SetSlam"))
    (:file "_package_SetSlam" :depends-on ("_package"))
    (:file "TrainScan" :depends-on ("_package_TrainScan"))
    (:file "_package_TrainScan" :depends-on ("_package"))
  ))