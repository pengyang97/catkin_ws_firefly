# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robot_msg/BaseInfo.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class BaseInfo(genpy.Message):
  _md5sum = "3067a4347f837a8395157fa5164b6588"
  _type = "robot_msg/BaseInfo"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# msg definition
# base_device_state enum
uint8   DEVICE_EMERGENCY    = 1 # 急停按下
uint8   ROS_NO_CMD          = 2 # 未收到ros指令
uint8   DRIVER_LOST         = 4 # 驱动器无响应
uint8   IMU_LOST            = 8 # imu无响应
uint8   RELEASE_MOTOR       = 16 # 电机下电失能
uint8   BMS_LOST            = 32 # bms无响应

# charging State enum
uint8   UNCHARGING          = 0 # 未充电
uint8   CHARGING            = 1 # 充电中
uint8   DOCK_IN             = 2 # 接触，未充电

bool        connected               #   底盘连接状态
uint8       base_device_state       #   底盘基本外设状态
bool        cliff_left              #   左跌落
bool        cliff_front_left        #   前左
bool        cliff_front_right       #   前右
bool        cliff_right             #   右跌落
bool        bump_state_left         #   左碰撞
bool        bump_state_right        #   右碰撞
uint16      chargingVol             #   充电电压  10mv
uint8       chargingState           #   充电状态
uint16      motor_left_err_code     #   电机错误码
uint16      motor_right_err_code    #
bool        bump_enable             #   碰撞传感器使能
bool        cliff_enable            #   跌落使能
#uint32[]    adc_channal             #   ADC传感器通道值，跌落传感器等
#uint32[]    range_sensors           #   超声 tof数据等
"""
  # Pseudo-constants
  DEVICE_EMERGENCY = 1
  ROS_NO_CMD = 2
  DRIVER_LOST = 4
  IMU_LOST = 8
  RELEASE_MOTOR = 16
  BMS_LOST = 32
  UNCHARGING = 0
  CHARGING = 1
  DOCK_IN = 2

  __slots__ = ['connected','base_device_state','cliff_left','cliff_front_left','cliff_front_right','cliff_right','bump_state_left','bump_state_right','chargingVol','chargingState','motor_left_err_code','motor_right_err_code','bump_enable','cliff_enable']
  _slot_types = ['bool','uint8','bool','bool','bool','bool','bool','bool','uint16','uint8','uint16','uint16','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       connected,base_device_state,cliff_left,cliff_front_left,cliff_front_right,cliff_right,bump_state_left,bump_state_right,chargingVol,chargingState,motor_left_err_code,motor_right_err_code,bump_enable,cliff_enable

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BaseInfo, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.connected is None:
        self.connected = False
      if self.base_device_state is None:
        self.base_device_state = 0
      if self.cliff_left is None:
        self.cliff_left = False
      if self.cliff_front_left is None:
        self.cliff_front_left = False
      if self.cliff_front_right is None:
        self.cliff_front_right = False
      if self.cliff_right is None:
        self.cliff_right = False
      if self.bump_state_left is None:
        self.bump_state_left = False
      if self.bump_state_right is None:
        self.bump_state_right = False
      if self.chargingVol is None:
        self.chargingVol = 0
      if self.chargingState is None:
        self.chargingState = 0
      if self.motor_left_err_code is None:
        self.motor_left_err_code = 0
      if self.motor_right_err_code is None:
        self.motor_right_err_code = 0
      if self.bump_enable is None:
        self.bump_enable = False
      if self.cliff_enable is None:
        self.cliff_enable = False
    else:
      self.connected = False
      self.base_device_state = 0
      self.cliff_left = False
      self.cliff_front_left = False
      self.cliff_front_right = False
      self.cliff_right = False
      self.bump_state_left = False
      self.bump_state_right = False
      self.chargingVol = 0
      self.chargingState = 0
      self.motor_left_err_code = 0
      self.motor_right_err_code = 0
      self.bump_enable = False
      self.cliff_enable = False

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
      buff.write(_get_struct_8BHB2H2B().pack(_x.connected, _x.base_device_state, _x.cliff_left, _x.cliff_front_left, _x.cliff_front_right, _x.cliff_right, _x.bump_state_left, _x.bump_state_right, _x.chargingVol, _x.chargingState, _x.motor_left_err_code, _x.motor_right_err_code, _x.bump_enable, _x.cliff_enable))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.connected, _x.base_device_state, _x.cliff_left, _x.cliff_front_left, _x.cliff_front_right, _x.cliff_right, _x.bump_state_left, _x.bump_state_right, _x.chargingVol, _x.chargingState, _x.motor_left_err_code, _x.motor_right_err_code, _x.bump_enable, _x.cliff_enable,) = _get_struct_8BHB2H2B().unpack(str[start:end])
      self.connected = bool(self.connected)
      self.cliff_left = bool(self.cliff_left)
      self.cliff_front_left = bool(self.cliff_front_left)
      self.cliff_front_right = bool(self.cliff_front_right)
      self.cliff_right = bool(self.cliff_right)
      self.bump_state_left = bool(self.bump_state_left)
      self.bump_state_right = bool(self.bump_state_right)
      self.bump_enable = bool(self.bump_enable)
      self.cliff_enable = bool(self.cliff_enable)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_8BHB2H2B().pack(_x.connected, _x.base_device_state, _x.cliff_left, _x.cliff_front_left, _x.cliff_front_right, _x.cliff_right, _x.bump_state_left, _x.bump_state_right, _x.chargingVol, _x.chargingState, _x.motor_left_err_code, _x.motor_right_err_code, _x.bump_enable, _x.cliff_enable))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.connected, _x.base_device_state, _x.cliff_left, _x.cliff_front_left, _x.cliff_front_right, _x.cliff_right, _x.bump_state_left, _x.bump_state_right, _x.chargingVol, _x.chargingState, _x.motor_left_err_code, _x.motor_right_err_code, _x.bump_enable, _x.cliff_enable,) = _get_struct_8BHB2H2B().unpack(str[start:end])
      self.connected = bool(self.connected)
      self.cliff_left = bool(self.cliff_left)
      self.cliff_front_left = bool(self.cliff_front_left)
      self.cliff_front_right = bool(self.cliff_front_right)
      self.cliff_right = bool(self.cliff_right)
      self.bump_state_left = bool(self.bump_state_left)
      self.bump_state_right = bool(self.bump_state_right)
      self.bump_enable = bool(self.bump_enable)
      self.cliff_enable = bool(self.cliff_enable)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8BHB2H2B = None
def _get_struct_8BHB2H2B():
    global _struct_8BHB2H2B
    if _struct_8BHB2H2B is None:
        _struct_8BHB2H2B = struct.Struct("<8BHB2H2B")
    return _struct_8BHB2H2B
