# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/DisplayRobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DisplayRobotState(type):
    """Metaclass of message 'DisplayRobotState'."""

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
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.msg.DisplayRobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__display_robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__display_robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__display_robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__display_robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__display_robot_state

            from moveit_msgs.msg import ObjectColor
            if ObjectColor.__class__._TYPE_SUPPORT is None:
                ObjectColor.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DisplayRobotState(metaclass=Metaclass_DisplayRobotState):
    """Message class 'DisplayRobotState'."""

    __slots__ = [
        '_state',
        '_highlight_links',
        '_hide',
    ]

    _fields_and_field_types = {
        'state': 'moveit_msgs/RobotState',
        'highlight_links': 'sequence<moveit_msgs/ObjectColor>',
        'hide': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'ObjectColor')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import RobotState
        self.state = kwargs.get('state', RobotState())
        self.highlight_links = kwargs.get('highlight_links', [])
        self.hide = kwargs.get('hide', bool())

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
        if self.state != other.state:
            return False
        if self.highlight_links != other.highlight_links:
            return False
        if self.hide != other.hide:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'state' field must be a sub message of type 'RobotState'"
        self._state = value

    @builtins.property
    def highlight_links(self):
        """Message field 'highlight_links'."""
        return self._highlight_links

    @highlight_links.setter
    def highlight_links(self, value):
        if __debug__:
            from moveit_msgs.msg import ObjectColor
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ObjectColor) for v in value) and
                 True), \
                "The 'highlight_links' field must be a set or sequence and each value of type 'ObjectColor'"
        self._highlight_links = value

    @builtins.property
    def hide(self):
        """Message field 'hide'."""
        return self._hide

    @hide.setter
    def hide(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hide' field must be of type 'bool'"
        self._hide = value
