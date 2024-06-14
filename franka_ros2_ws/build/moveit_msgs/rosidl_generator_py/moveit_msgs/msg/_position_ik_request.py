# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/PositionIKRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionIKRequest(type):
    """Metaclass of message 'PositionIKRequest'."""

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
                'moveit_msgs.msg.PositionIKRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_ik_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_ik_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_ik_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_ik_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_ik_request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from moveit_msgs.msg import Constraints
            if Constraints.__class__._TYPE_SUPPORT is None:
                Constraints.__class__.__import_type_support__()

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


class PositionIKRequest(metaclass=Metaclass_PositionIKRequest):
    """Message class 'PositionIKRequest'."""

    __slots__ = [
        '_group_name',
        '_robot_state',
        '_constraints',
        '_avoid_collisions',
        '_ik_link_name',
        '_pose_stamped',
        '_ik_link_names',
        '_pose_stamped_vector',
        '_timeout',
    ]

    _fields_and_field_types = {
        'group_name': 'string',
        'robot_state': 'moveit_msgs/RobotState',
        'constraints': 'moveit_msgs/Constraints',
        'avoid_collisions': 'boolean',
        'ik_link_name': 'string',
        'pose_stamped': 'geometry_msgs/PoseStamped',
        'ik_link_names': 'sequence<string>',
        'pose_stamped_vector': 'sequence<geometry_msgs/PoseStamped>',
        'timeout': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Constraints'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group_name = kwargs.get('group_name', str())
        from moveit_msgs.msg import RobotState
        self.robot_state = kwargs.get('robot_state', RobotState())
        from moveit_msgs.msg import Constraints
        self.constraints = kwargs.get('constraints', Constraints())
        self.avoid_collisions = kwargs.get('avoid_collisions', bool())
        self.ik_link_name = kwargs.get('ik_link_name', str())
        from geometry_msgs.msg import PoseStamped
        self.pose_stamped = kwargs.get('pose_stamped', PoseStamped())
        self.ik_link_names = kwargs.get('ik_link_names', [])
        self.pose_stamped_vector = kwargs.get('pose_stamped_vector', [])
        from builtin_interfaces.msg import Duration
        self.timeout = kwargs.get('timeout', Duration())

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
        if self.group_name != other.group_name:
            return False
        if self.robot_state != other.robot_state:
            return False
        if self.constraints != other.constraints:
            return False
        if self.avoid_collisions != other.avoid_collisions:
            return False
        if self.ik_link_name != other.ik_link_name:
            return False
        if self.pose_stamped != other.pose_stamped:
            return False
        if self.ik_link_names != other.ik_link_names:
            return False
        if self.pose_stamped_vector != other.pose_stamped_vector:
            return False
        if self.timeout != other.timeout:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def group_name(self):
        """Message field 'group_name'."""
        return self._group_name

    @group_name.setter
    def group_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'group_name' field must be of type 'str'"
        self._group_name = value

    @builtins.property
    def robot_state(self):
        """Message field 'robot_state'."""
        return self._robot_state

    @robot_state.setter
    def robot_state(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'robot_state' field must be a sub message of type 'RobotState'"
        self._robot_state = value

    @builtins.property
    def constraints(self):
        """Message field 'constraints'."""
        return self._constraints

    @constraints.setter
    def constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import Constraints
            assert \
                isinstance(value, Constraints), \
                "The 'constraints' field must be a sub message of type 'Constraints'"
        self._constraints = value

    @builtins.property
    def avoid_collisions(self):
        """Message field 'avoid_collisions'."""
        return self._avoid_collisions

    @avoid_collisions.setter
    def avoid_collisions(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoid_collisions' field must be of type 'bool'"
        self._avoid_collisions = value

    @builtins.property
    def ik_link_name(self):
        """Message field 'ik_link_name'."""
        return self._ik_link_name

    @ik_link_name.setter
    def ik_link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ik_link_name' field must be of type 'str'"
        self._ik_link_name = value

    @builtins.property
    def pose_stamped(self):
        """Message field 'pose_stamped'."""
        return self._pose_stamped

    @pose_stamped.setter
    def pose_stamped(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose_stamped' field must be a sub message of type 'PoseStamped'"
        self._pose_stamped = value

    @builtins.property
    def ik_link_names(self):
        """Message field 'ik_link_names'."""
        return self._ik_link_names

    @ik_link_names.setter
    def ik_link_names(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'ik_link_names' field must be a set or sequence and each value of type 'str'"
        self._ik_link_names = value

    @builtins.property
    def pose_stamped_vector(self):
        """Message field 'pose_stamped_vector'."""
        return self._pose_stamped_vector

    @pose_stamped_vector.setter
    def pose_stamped_vector(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
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
                 all(isinstance(v, PoseStamped) for v in value) and
                 True), \
                "The 'pose_stamped_vector' field must be a set or sequence and each value of type 'PoseStamped'"
        self._pose_stamped_vector = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'timeout' field must be a sub message of type 'Duration'"
        self._timeout = value
