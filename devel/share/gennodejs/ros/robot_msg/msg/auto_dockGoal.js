// Auto-generated. Do not edit!

// (in-package robot_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class auto_dockGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dock_ctrl = null;
    }
    else {
      if (initObj.hasOwnProperty('dock_ctrl')) {
        this.dock_ctrl = initObj.dock_ctrl
      }
      else {
        this.dock_ctrl = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type auto_dockGoal
    // Serialize message field [dock_ctrl]
    bufferOffset = _serializer.bool(obj.dock_ctrl, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type auto_dockGoal
    let len;
    let data = new auto_dockGoal(null);
    // Deserialize message field [dock_ctrl]
    data.dock_ctrl = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robot_msg/auto_dockGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '707c69bbc0bc4f40c0919c57f56fb522';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # 定义目标goal
    bool dock_ctrl  # 对接控制    true 去充电 false 取消充电
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new auto_dockGoal(null);
    if (msg.dock_ctrl !== undefined) {
      resolved.dock_ctrl = msg.dock_ctrl;
    }
    else {
      resolved.dock_ctrl = false
    }

    return resolved;
    }
};

module.exports = auto_dockGoal;
