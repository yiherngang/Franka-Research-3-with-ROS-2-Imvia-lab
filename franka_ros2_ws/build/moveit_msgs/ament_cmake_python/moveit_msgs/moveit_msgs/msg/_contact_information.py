# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/ContactInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContactInformation(type):
    """Metaclass of message 'ContactInformation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROBOT_LINK': 0,
        'WORLD_OBJECT': 1,
        'ROBOT_ATTACHED': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.msg.ContactInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contact_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contact_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contact_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contact_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contact_information

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROBOT_LINK': cls.__constants['ROBOT_LINK'],
            'WORLD_OBJECT': cls.__constants['WORLD_OBJECT'],
            'ROBOT_ATTACHED': cls.__constants['ROBOT_ATTACHED'],
        }

    @property
    def ROBOT_LINK(self):
        """Message constant 'ROBOT_LINK'."""
        return Metaclass_ContactInformation.__constants['ROBOT_LINK']

    @property
    def WORLD_OBJECT(self):
        """Message constant 'WORLD_OBJECT'."""
        return Metaclass_ContactInformation.__constants['WORLD_OBJECT']

    @property
    def ROBOT_ATTACHED(self):
        """Message constant 'ROBOT_ATTACHED'."""
        return Metaclass_ContactInformation.__constants['ROBOT_ATTACHED']


class ContactInformation(metaclass=Metaclass_ContactInformation):
    """
    Message class 'ContactInformation'.

    Constants:
      ROBOT_LINK
      WORLD_OBJECT
      ROBOT_ATTACHED
    """

    __slots__ = [
        '_header',
        '_position',
        '_normal',
        '_depth',
        '_contact_body_1',
        '_body_type_1',
        '_contact_body_2',
        '_body_type_2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'position': 'geometry_msgs/Point',
        'normal': 'geometry_msgs/Vector3',
        'depth': 'double',
        'contact_body_1': 'string',
        'body_type_1': 'uint32',
        'contact_body_2': 'string',
        'body_type_2': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Vector3
        self.normal = kwargs.get('normal', Vector3())
        self.depth = kwargs.get('depth', float())
        self.contact_body_1 = kwargs.get('contact_body_1', str())
        self.body_type_1 = kwargs.get('body_type_1', int())
        self.contact_body_2 = kwargs.get('contact_body_2', str())
        self.body_type_2 = kwargs.get('body_type_2', int())

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
        if self.position != other.position:
            return False
        if self.normal != other.normal:
            return False
        if self.depth != other.depth:
            return False
        if self.contact_body_1 != other.contact_body_1:
            return False
        if self.body_type_1 != other.body_type_1:
            return False
        if self.contact_body_2 != other.contact_body_2:
            return False
        if self.body_type_2 != other.body_type_2:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def normal(self):
        """Message field 'normal'."""
        return self._normal

    @normal.setter
    def normal(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'normal' field must be a sub message of type 'Vector3'"
        self._normal = value

    @builtins.property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'depth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._depth = value

    @builtins.property
    def contact_body_1(self):
        """Message field 'contact_body_1'."""
        return self._contact_body_1

    @contact_body_1.setter
    def contact_body_1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'contact_body_1' field must be of type 'str'"
        self._contact_body_1 = value

    @builtins.property
    def body_type_1(self):
        """Message field 'body_type_1'."""
        return self._body_type_1

    @body_type_1.setter
    def body_type_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'body_type_1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'body_type_1' field must be an unsigned integer in [0, 4294967295]"
        self._body_type_1 = value

    @builtins.property
    def contact_body_2(self):
        """Message field 'contact_body_2'."""
        return self._contact_body_2

    @contact_body_2.setter
    def contact_body_2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'contact_body_2' field must be of type 'str'"
        self._contact_body_2 = value

    @builtins.property
    def body_type_2(self):
        """Message field 'body_type_2'."""
        return self._body_type_2

    @body_type_2.setter
    def body_type_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'body_type_2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'body_type_2' field must be an unsigned integer in [0, 4294967295]"
        self._body_type_2 = value
