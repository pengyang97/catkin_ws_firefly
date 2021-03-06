# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robot_msg/RestrictArray.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import robot_msg.msg

class RestrictArray(genpy.Message):
  _md5sum = "d730ec60ad06fc558c39d4bf2bff233e"
  _type = "robot_msg/RestrictArray"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# msg definition

# virtual walls e.g.

robot_msg/Restrict[]  virtual_walls                # 虚拟墙描述



================================================================================
MSG: robot_msg/Restrict
# msg definition

# virtual walls e.g.

int32                   id          # id
geometry_msgs/Polygon   polygon       # Clockwise



================================================================================
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z"""
  __slots__ = ['virtual_walls']
  _slot_types = ['robot_msg/Restrict[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       virtual_walls

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RestrictArray, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.virtual_walls is None:
        self.virtual_walls = []
    else:
      self.virtual_walls = []

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
      length = len(self.virtual_walls)
      buff.write(_struct_I.pack(length))
      for val1 in self.virtual_walls:
        _x = val1.id
        buff.write(_get_struct_i().pack(_x))
        _v1 = val1.polygon
        length = len(_v1.points)
        buff.write(_struct_I.pack(length))
        for val3 in _v1.points:
          _x = val3
          buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.virtual_walls is None:
        self.virtual_walls = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.virtual_walls = []
      for i in range(0, length):
        val1 = robot_msg.msg.Restrict()
        start = end
        end += 4
        (val1.id,) = _get_struct_i().unpack(str[start:end])
        _v2 = val1.polygon
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v2.points = []
        for i in range(0, length):
          val3 = geometry_msgs.msg.Point32()
          _x = val3
          start = end
          end += 12
          (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
          _v2.points.append(val3)
        self.virtual_walls.append(val1)
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
      length = len(self.virtual_walls)
      buff.write(_struct_I.pack(length))
      for val1 in self.virtual_walls:
        _x = val1.id
        buff.write(_get_struct_i().pack(_x))
        _v3 = val1.polygon
        length = len(_v3.points)
        buff.write(_struct_I.pack(length))
        for val3 in _v3.points:
          _x = val3
          buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
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
      if self.virtual_walls is None:
        self.virtual_walls = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.virtual_walls = []
      for i in range(0, length):
        val1 = robot_msg.msg.Restrict()
        start = end
        end += 4
        (val1.id,) = _get_struct_i().unpack(str[start:end])
        _v4 = val1.polygon
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v4.points = []
        for i in range(0, length):
          val3 = geometry_msgs.msg.Point32()
          _x = val3
          start = end
          end += 12
          (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
          _v4.points.append(val3)
        self.virtual_walls.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
