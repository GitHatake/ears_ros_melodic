// Auto-generated. Do not edit!

// (in-package torobo_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class MoveHomePositionGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.transitionTime = null;
    }
    else {
      if (initObj.hasOwnProperty('transitionTime')) {
        this.transitionTime = initObj.transitionTime
      }
      else {
        this.transitionTime = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MoveHomePositionGoal
    // Serialize message field [transitionTime]
    bufferOffset = _serializer.float64(obj.transitionTime, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MoveHomePositionGoal
    let len;
    let data = new MoveHomePositionGoal(null);
    // Deserialize message field [transitionTime]
    data.transitionTime = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'torobo_msgs/MoveHomePositionGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '71fd40116858649790e007be0d81d186';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Goal
    float64 transitionTime
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MoveHomePositionGoal(null);
    if (msg.transitionTime !== undefined) {
      resolved.transitionTime = msg.transitionTime;
    }
    else {
      resolved.transitionTime = 0.0
    }

    return resolved;
    }
};

module.exports = MoveHomePositionGoal;
