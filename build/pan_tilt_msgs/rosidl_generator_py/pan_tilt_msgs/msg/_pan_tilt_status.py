# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pan_tilt_msgs:msg/PanTiltStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PanTiltStatus(type):
    """Metaclass of message 'PanTiltStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pan_tilt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pan_tilt_msgs.msg.PanTiltStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pan_tilt_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pan_tilt_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pan_tilt_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pan_tilt_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pan_tilt_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PanTiltStatus(metaclass=Metaclass_PanTiltStatus):
    """Message class 'PanTiltStatus'."""

    __slots__ = [
        '_header',
        '_id',
        '_serial_num',
        '_hw_version',
        '_bd_version',
        '_sw_version',
        '_set_zero',
        '_speed',
        '_yaw_goal',
        '_pitch_goal',
        '_reserved',
        '_driver_ec',
        '_encoder_ec',
        '_yaw_now',
        '_pitch_now',
        '_yaw_temp',
        '_pitch_temp',
        '_yaw_raw',
        '_pitch_raw',
        '_loop_ec',
        '_loop_time',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint8',
        'serial_num': 'string',
        'hw_version': 'string',
        'bd_version': 'string',
        'sw_version': 'string',
        'set_zero': 'uint8',
        'speed': 'int16',
        'yaw_goal': 'float',
        'pitch_goal': 'float',
        'reserved': 'uint16',
        'driver_ec': 'uint16',
        'encoder_ec': 'uint16',
        'yaw_now': 'float',
        'pitch_now': 'float',
        'yaw_temp': 'float',
        'pitch_temp': 'float',
        'yaw_raw': 'int16',
        'pitch_raw': 'int16',
        'loop_ec': 'uint16',
        'loop_time': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        self.serial_num = kwargs.get('serial_num', str())
        self.hw_version = kwargs.get('hw_version', str())
        self.bd_version = kwargs.get('bd_version', str())
        self.sw_version = kwargs.get('sw_version', str())
        self.set_zero = kwargs.get('set_zero', int())
        self.speed = kwargs.get('speed', int())
        self.yaw_goal = kwargs.get('yaw_goal', float())
        self.pitch_goal = kwargs.get('pitch_goal', float())
        self.reserved = kwargs.get('reserved', int())
        self.driver_ec = kwargs.get('driver_ec', int())
        self.encoder_ec = kwargs.get('encoder_ec', int())
        self.yaw_now = kwargs.get('yaw_now', float())
        self.pitch_now = kwargs.get('pitch_now', float())
        self.yaw_temp = kwargs.get('yaw_temp', float())
        self.pitch_temp = kwargs.get('pitch_temp', float())
        self.yaw_raw = kwargs.get('yaw_raw', int())
        self.pitch_raw = kwargs.get('pitch_raw', int())
        self.loop_ec = kwargs.get('loop_ec', int())
        self.loop_time = kwargs.get('loop_time', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.id != other.id:
            return False
        if self.serial_num != other.serial_num:
            return False
        if self.hw_version != other.hw_version:
            return False
        if self.bd_version != other.bd_version:
            return False
        if self.sw_version != other.sw_version:
            return False
        if self.set_zero != other.set_zero:
            return False
        if self.speed != other.speed:
            return False
        if self.yaw_goal != other.yaw_goal:
            return False
        if self.pitch_goal != other.pitch_goal:
            return False
        if self.reserved != other.reserved:
            return False
        if self.driver_ec != other.driver_ec:
            return False
        if self.encoder_ec != other.encoder_ec:
            return False
        if self.yaw_now != other.yaw_now:
            return False
        if self.pitch_now != other.pitch_now:
            return False
        if self.yaw_temp != other.yaw_temp:
            return False
        if self.pitch_temp != other.pitch_temp:
            return False
        if self.yaw_raw != other.yaw_raw:
            return False
        if self.pitch_raw != other.pitch_raw:
            return False
        if self.loop_ec != other.loop_ec:
            return False
        if self.loop_time != other.loop_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def serial_num(self):
        """Message field 'serial_num'."""
        return self._serial_num

    @serial_num.setter
    def serial_num(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'serial_num' field must be of type 'str'"
        self._serial_num = value

    @builtins.property
    def hw_version(self):
        """Message field 'hw_version'."""
        return self._hw_version

    @hw_version.setter
    def hw_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hw_version' field must be of type 'str'"
        self._hw_version = value

    @builtins.property
    def bd_version(self):
        """Message field 'bd_version'."""
        return self._bd_version

    @bd_version.setter
    def bd_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bd_version' field must be of type 'str'"
        self._bd_version = value

    @builtins.property
    def sw_version(self):
        """Message field 'sw_version'."""
        return self._sw_version

    @sw_version.setter
    def sw_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sw_version' field must be of type 'str'"
        self._sw_version = value

    @builtins.property
    def set_zero(self):
        """Message field 'set_zero'."""
        return self._set_zero

    @set_zero.setter
    def set_zero(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_zero' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set_zero' field must be an unsigned integer in [0, 255]"
        self._set_zero = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'speed' field must be an integer in [-32768, 32767]"
        self._speed = value

    @builtins.property
    def yaw_goal(self):
        """Message field 'yaw_goal'."""
        return self._yaw_goal

    @yaw_goal.setter
    def yaw_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_goal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_goal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_goal = value

    @builtins.property
    def pitch_goal(self):
        """Message field 'pitch_goal'."""
        return self._pitch_goal

    @pitch_goal.setter
    def pitch_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_goal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_goal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_goal = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved' field must be an unsigned integer in [0, 65535]"
        self._reserved = value

    @builtins.property
    def driver_ec(self):
        """Message field 'driver_ec'."""
        return self._driver_ec

    @driver_ec.setter
    def driver_ec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driver_ec' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'driver_ec' field must be an unsigned integer in [0, 65535]"
        self._driver_ec = value

    @builtins.property
    def encoder_ec(self):
        """Message field 'encoder_ec'."""
        return self._encoder_ec

    @encoder_ec.setter
    def encoder_ec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'encoder_ec' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'encoder_ec' field must be an unsigned integer in [0, 65535]"
        self._encoder_ec = value

    @builtins.property
    def yaw_now(self):
        """Message field 'yaw_now'."""
        return self._yaw_now

    @yaw_now.setter
    def yaw_now(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_now' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_now' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_now = value

    @builtins.property
    def pitch_now(self):
        """Message field 'pitch_now'."""
        return self._pitch_now

    @pitch_now.setter
    def pitch_now(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_now' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_now' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_now = value

    @builtins.property
    def yaw_temp(self):
        """Message field 'yaw_temp'."""
        return self._yaw_temp

    @yaw_temp.setter
    def yaw_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_temp = value

    @builtins.property
    def pitch_temp(self):
        """Message field 'pitch_temp'."""
        return self._pitch_temp

    @pitch_temp.setter
    def pitch_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_temp = value

    @builtins.property
    def yaw_raw(self):
        """Message field 'yaw_raw'."""
        return self._yaw_raw

    @yaw_raw.setter
    def yaw_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_raw' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'yaw_raw' field must be an integer in [-32768, 32767]"
        self._yaw_raw = value

    @builtins.property
    def pitch_raw(self):
        """Message field 'pitch_raw'."""
        return self._pitch_raw

    @pitch_raw.setter
    def pitch_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch_raw' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pitch_raw' field must be an integer in [-32768, 32767]"
        self._pitch_raw = value

    @builtins.property
    def loop_ec(self):
        """Message field 'loop_ec'."""
        return self._loop_ec

    @loop_ec.setter
    def loop_ec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_ec' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'loop_ec' field must be an unsigned integer in [0, 65535]"
        self._loop_ec = value

    @builtins.property
    def loop_time(self):
        """Message field 'loop_time'."""
        return self._loop_time

    @loop_time.setter
    def loop_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'loop_time' field must be an unsigned integer in [0, 65535]"
        self._loop_time = value
