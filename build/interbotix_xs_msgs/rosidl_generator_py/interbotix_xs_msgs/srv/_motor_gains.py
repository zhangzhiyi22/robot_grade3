# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:srv/MotorGains.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorGains_Request(type):
    """Metaclass of message 'MotorGains_Request'."""

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
            module = import_type_support('interbotix_xs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_xs_msgs.srv.MotorGains_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_gains__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_gains__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_gains__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_gains__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_gains__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorGains_Request(metaclass=Metaclass_MotorGains_Request):
    """Message class 'MotorGains_Request'."""

    __slots__ = [
        '_cmd_type',
        '_name',
        '_kp_pos',
        '_ki_pos',
        '_kd_pos',
        '_k1',
        '_k2',
        '_kp_vel',
        '_ki_vel',
    ]

    _fields_and_field_types = {
        'cmd_type': 'string',
        'name': 'string',
        'kp_pos': 'int32',
        'ki_pos': 'int32',
        'kd_pos': 'int32',
        'k1': 'int32',
        'k2': 'int32',
        'kp_vel': 'int32',
        'ki_vel': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd_type = kwargs.get('cmd_type', str())
        self.name = kwargs.get('name', str())
        self.kp_pos = kwargs.get('kp_pos', int())
        self.ki_pos = kwargs.get('ki_pos', int())
        self.kd_pos = kwargs.get('kd_pos', int())
        self.k1 = kwargs.get('k1', int())
        self.k2 = kwargs.get('k2', int())
        self.kp_vel = kwargs.get('kp_vel', int())
        self.ki_vel = kwargs.get('ki_vel', int())

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
        if self.cmd_type != other.cmd_type:
            return False
        if self.name != other.name:
            return False
        if self.kp_pos != other.kp_pos:
            return False
        if self.ki_pos != other.ki_pos:
            return False
        if self.kd_pos != other.kd_pos:
            return False
        if self.k1 != other.k1:
            return False
        if self.k2 != other.k2:
            return False
        if self.kp_vel != other.kp_vel:
            return False
        if self.ki_vel != other.ki_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cmd_type' field must be of type 'str'"
        self._cmd_type = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def kp_pos(self):
        """Message field 'kp_pos'."""
        return self._kp_pos

    @kp_pos.setter
    def kp_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kp_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'kp_pos' field must be an integer in [-2147483648, 2147483647]"
        self._kp_pos = value

    @builtins.property
    def ki_pos(self):
        """Message field 'ki_pos'."""
        return self._ki_pos

    @ki_pos.setter
    def ki_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ki_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ki_pos' field must be an integer in [-2147483648, 2147483647]"
        self._ki_pos = value

    @builtins.property
    def kd_pos(self):
        """Message field 'kd_pos'."""
        return self._kd_pos

    @kd_pos.setter
    def kd_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kd_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'kd_pos' field must be an integer in [-2147483648, 2147483647]"
        self._kd_pos = value

    @builtins.property
    def k1(self):
        """Message field 'k1'."""
        return self._k1

    @k1.setter
    def k1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'k1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'k1' field must be an integer in [-2147483648, 2147483647]"
        self._k1 = value

    @builtins.property
    def k2(self):
        """Message field 'k2'."""
        return self._k2

    @k2.setter
    def k2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'k2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'k2' field must be an integer in [-2147483648, 2147483647]"
        self._k2 = value

    @builtins.property
    def kp_vel(self):
        """Message field 'kp_vel'."""
        return self._kp_vel

    @kp_vel.setter
    def kp_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kp_vel' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'kp_vel' field must be an integer in [-2147483648, 2147483647]"
        self._kp_vel = value

    @builtins.property
    def ki_vel(self):
        """Message field 'ki_vel'."""
        return self._ki_vel

    @ki_vel.setter
    def ki_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ki_vel' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ki_vel' field must be an integer in [-2147483648, 2147483647]"
        self._ki_vel = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorGains_Response(type):
    """Metaclass of message 'MotorGains_Response'."""

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
            module = import_type_support('interbotix_xs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_xs_msgs.srv.MotorGains_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_gains__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_gains__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_gains__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_gains__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_gains__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorGains_Response(metaclass=Metaclass_MotorGains_Response):
    """Message class 'MotorGains_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_MotorGains(type):
    """Metaclass of service 'MotorGains'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interbotix_xs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_xs_msgs.srv.MotorGains')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motor_gains

            from interbotix_xs_msgs.srv import _motor_gains
            if _motor_gains.Metaclass_MotorGains_Request._TYPE_SUPPORT is None:
                _motor_gains.Metaclass_MotorGains_Request.__import_type_support__()
            if _motor_gains.Metaclass_MotorGains_Response._TYPE_SUPPORT is None:
                _motor_gains.Metaclass_MotorGains_Response.__import_type_support__()


class MotorGains(metaclass=Metaclass_MotorGains):
    from interbotix_xs_msgs.srv._motor_gains import MotorGains_Request as Request
    from interbotix_xs_msgs.srv._motor_gains import MotorGains_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
