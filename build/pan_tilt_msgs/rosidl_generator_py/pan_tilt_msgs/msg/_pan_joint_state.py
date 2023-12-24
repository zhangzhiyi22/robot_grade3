# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pan_tilt_msgs:msg/PanJointState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PanJointState(type):
    """Metaclass of message 'PanJointState'."""

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
                'pan_tilt_msgs.msg.PanJointState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pan_joint_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pan_joint_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pan_joint_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pan_joint_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pan_joint_state

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


class PanJointState(metaclass=Metaclass_PanJointState):
    """Message class 'PanJointState'."""

    __slots__ = [
        '_header',
        '_name1',
        '_position1',
        '_velocity1',
        '_effort1',
        '_name2',
        '_position2',
        '_velocity2',
        '_effort2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'name1': 'string',
        'position1': 'double',
        'velocity1': 'double',
        'effort1': 'double',
        'name2': 'string',
        'position2': 'double',
        'velocity2': 'double',
        'effort2': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.name1 = kwargs.get('name1', str())
        self.position1 = kwargs.get('position1', float())
        self.velocity1 = kwargs.get('velocity1', float())
        self.effort1 = kwargs.get('effort1', float())
        self.name2 = kwargs.get('name2', str())
        self.position2 = kwargs.get('position2', float())
        self.velocity2 = kwargs.get('velocity2', float())
        self.effort2 = kwargs.get('effort2', float())

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
        if self.name1 != other.name1:
            return False
        if self.position1 != other.position1:
            return False
        if self.velocity1 != other.velocity1:
            return False
        if self.effort1 != other.effort1:
            return False
        if self.name2 != other.name2:
            return False
        if self.position2 != other.position2:
            return False
        if self.velocity2 != other.velocity2:
            return False
        if self.effort2 != other.effort2:
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

    @builtins.property
    def name1(self):
        """Message field 'name1'."""
        return self._name1

    @name1.setter
    def name1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name1' field must be of type 'str'"
        self._name1 = value

    @builtins.property
    def position1(self):
        """Message field 'position1'."""
        return self._position1

    @position1.setter
    def position1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position1 = value

    @builtins.property
    def velocity1(self):
        """Message field 'velocity1'."""
        return self._velocity1

    @velocity1.setter
    def velocity1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity1 = value

    @builtins.property
    def effort1(self):
        """Message field 'effort1'."""
        return self._effort1

    @effort1.setter
    def effort1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'effort1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'effort1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._effort1 = value

    @builtins.property
    def name2(self):
        """Message field 'name2'."""
        return self._name2

    @name2.setter
    def name2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name2' field must be of type 'str'"
        self._name2 = value

    @builtins.property
    def position2(self):
        """Message field 'position2'."""
        return self._position2

    @position2.setter
    def position2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position2 = value

    @builtins.property
    def velocity2(self):
        """Message field 'velocity2'."""
        return self._velocity2

    @velocity2.setter
    def velocity2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity2 = value

    @builtins.property
    def effort2(self):
        """Message field 'effort2'."""
        return self._effort2

    @effort2.setter
    def effort2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'effort2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'effort2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._effort2 = value
