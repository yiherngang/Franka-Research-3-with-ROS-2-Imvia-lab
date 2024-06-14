# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/MoveItErrorCodes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveItErrorCodes(type):
    """Metaclass of message 'MoveItErrorCodes'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 1,
        'FAILURE': 99999,
        'PLANNING_FAILED': -1,
        'INVALID_MOTION_PLAN': -2,
        'MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE': -3,
        'CONTROL_FAILED': -4,
        'UNABLE_TO_AQUIRE_SENSOR_DATA': -5,
        'TIMED_OUT': -6,
        'PREEMPTED': -7,
        'START_STATE_IN_COLLISION': -10,
        'START_STATE_VIOLATES_PATH_CONSTRAINTS': -11,
        'START_STATE_INVALID': -26,
        'GOAL_IN_COLLISION': -12,
        'GOAL_VIOLATES_PATH_CONSTRAINTS': -13,
        'GOAL_CONSTRAINTS_VIOLATED': -14,
        'GOAL_STATE_INVALID': -27,
        'UNRECOGNIZED_GOAL_TYPE': -28,
        'INVALID_GROUP_NAME': -15,
        'INVALID_GOAL_CONSTRAINTS': -16,
        'INVALID_ROBOT_STATE': -17,
        'INVALID_LINK_NAME': -18,
        'INVALID_OBJECT_NAME': -19,
        'FRAME_TRANSFORM_FAILURE': -21,
        'COLLISION_CHECKING_UNAVAILABLE': -22,
        'ROBOT_STATE_STALE': -23,
        'SENSOR_INFO_STALE': -24,
        'COMMUNICATION_FAILURE': -25,
        'CRASH': -29,
        'ABORT': -30,
        'NO_IK_SOLUTION': -31,
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
                'moveit_msgs.msg.MoveItErrorCodes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__move_it_error_codes
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__move_it_error_codes
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__move_it_error_codes
            cls._TYPE_SUPPORT = module.type_support_msg__msg__move_it_error_codes
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__move_it_error_codes

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILURE': cls.__constants['FAILURE'],
            'PLANNING_FAILED': cls.__constants['PLANNING_FAILED'],
            'INVALID_MOTION_PLAN': cls.__constants['INVALID_MOTION_PLAN'],
            'MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE': cls.__constants['MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE'],
            'CONTROL_FAILED': cls.__constants['CONTROL_FAILED'],
            'UNABLE_TO_AQUIRE_SENSOR_DATA': cls.__constants['UNABLE_TO_AQUIRE_SENSOR_DATA'],
            'TIMED_OUT': cls.__constants['TIMED_OUT'],
            'PREEMPTED': cls.__constants['PREEMPTED'],
            'START_STATE_IN_COLLISION': cls.__constants['START_STATE_IN_COLLISION'],
            'START_STATE_VIOLATES_PATH_CONSTRAINTS': cls.__constants['START_STATE_VIOLATES_PATH_CONSTRAINTS'],
            'START_STATE_INVALID': cls.__constants['START_STATE_INVALID'],
            'GOAL_IN_COLLISION': cls.__constants['GOAL_IN_COLLISION'],
            'GOAL_VIOLATES_PATH_CONSTRAINTS': cls.__constants['GOAL_VIOLATES_PATH_CONSTRAINTS'],
            'GOAL_CONSTRAINTS_VIOLATED': cls.__constants['GOAL_CONSTRAINTS_VIOLATED'],
            'GOAL_STATE_INVALID': cls.__constants['GOAL_STATE_INVALID'],
            'UNRECOGNIZED_GOAL_TYPE': cls.__constants['UNRECOGNIZED_GOAL_TYPE'],
            'INVALID_GROUP_NAME': cls.__constants['INVALID_GROUP_NAME'],
            'INVALID_GOAL_CONSTRAINTS': cls.__constants['INVALID_GOAL_CONSTRAINTS'],
            'INVALID_ROBOT_STATE': cls.__constants['INVALID_ROBOT_STATE'],
            'INVALID_LINK_NAME': cls.__constants['INVALID_LINK_NAME'],
            'INVALID_OBJECT_NAME': cls.__constants['INVALID_OBJECT_NAME'],
            'FRAME_TRANSFORM_FAILURE': cls.__constants['FRAME_TRANSFORM_FAILURE'],
            'COLLISION_CHECKING_UNAVAILABLE': cls.__constants['COLLISION_CHECKING_UNAVAILABLE'],
            'ROBOT_STATE_STALE': cls.__constants['ROBOT_STATE_STALE'],
            'SENSOR_INFO_STALE': cls.__constants['SENSOR_INFO_STALE'],
            'COMMUNICATION_FAILURE': cls.__constants['COMMUNICATION_FAILURE'],
            'CRASH': cls.__constants['CRASH'],
            'ABORT': cls.__constants['ABORT'],
            'NO_IK_SOLUTION': cls.__constants['NO_IK_SOLUTION'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_MoveItErrorCodes.__constants['SUCCESS']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_MoveItErrorCodes.__constants['FAILURE']

    @property
    def PLANNING_FAILED(self):
        """Message constant 'PLANNING_FAILED'."""
        return Metaclass_MoveItErrorCodes.__constants['PLANNING_FAILED']

    @property
    def INVALID_MOTION_PLAN(self):
        """Message constant 'INVALID_MOTION_PLAN'."""
        return Metaclass_MoveItErrorCodes.__constants['INVALID_MOTION_PLAN']

    @property
    def MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE(self):
        """Message constant 'MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE'."""
        return Metaclass_MoveItErrorCodes.__constants['MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE']

    @property
    def CONTROL_FAILED(self):
        """Message constant 'CONTROL_FAILED'."""
        return Metaclass_MoveItErrorCodes.__constants['CONTROL_FAILED']

    @property
    def UNABLE_TO_AQUIRE_SENSOR_DATA(self):
        """Message constant 'UNABLE_TO_AQUIRE_SENSOR_DATA'."""
        return Metaclass_MoveItErrorCodes.__constants['UNABLE_TO_AQUIRE_SENSOR_DATA']

    @property
    def TIMED_OUT(self):
        """Message constant 'TIMED_OUT'."""
        return Metaclass_MoveItErrorCodes.__constants['TIMED_OUT']

    @property
    def PREEMPTED(self):
        """Message constant 'PREEMPTED'."""
        return Metaclass_MoveItErrorCodes.__constants['PREEMPTED']

    @property
    def START_STATE_IN_COLLISION(self):
        """Message constant 'START_STATE_IN_COLLISION'."""
        return Metaclass_MoveItErrorCodes.__constants['START_STATE_IN_COLLISION']

    @property
    def START_STATE_VIOLATES_PATH_CONSTRAINTS(self):
        """Message constant 'START_STATE_VIOLATES_PATH_CONSTRAINTS'."""
        return Metaclass_MoveItErrorCodes.__constants['START_STATE_VIOLATES_PATH_CONSTRAINTS']

    @property
    def START_STATE_INVALID(self):
        """Message constant 'START_STATE_INVALID'."""
        return Metaclass_MoveItErrorCodes.__constants['START_STATE_INVALID']

    @property
    def GOAL_IN_COLLISION(self):
        """Message constant 'GOAL_IN_COLLISION'."""
        return Metaclass_MoveItErrorCodes.__constants['GOAL_IN_COLLISION']

    @property
    def GOAL_VIOLATES_PATH_CONSTRAINTS(self):
        """Message constant 'GOAL_VIOLATES_PATH_CONSTRAINTS'."""
        return Metaclass_MoveItErrorCodes.__constants['GOAL_VIOLATES_PATH_CONSTRAINTS']

    @property
    def GOAL_CONSTRAINTS_VIOLATED(self):
        """Message constant 'GOAL_CONSTRAINTS_VIOLATED'."""
        return Metaclass_MoveItErrorCodes.__constants['GOAL_CONSTRAINTS_VIOLATED']

    @property
    def GOAL_STATE_INVALID(self):
        """Message constant 'GOAL_STATE_INVALID'."""
        return Metaclass_MoveItErrorCodes.__constants['GOAL_STATE_INVALID']

    @property
    def UNRECOGNIZED_GOAL_TYPE(self):
        """Message constant 'UNRECOGNIZED_GOAL_TYPE'."""
        return Metaclass_MoveItErrorCodes.__constants['UNRECOGNIZED_GOAL_TYPE']

    @property
    def INVALID_GROUP_NAME(self):
        """Message constant 'INVALID_GROUP_NAME'."""
        return Metaclass_MoveItErrorCodes.__constants['INVALID_GROUP_NAME']

    @property
    def INVALID_GOAL_CONSTRAINTS(self):
        """Message constant 'INVALID_GOAL_CONSTRAINTS'."""
        return Metaclass_MoveItErrorCodes.__constants['INVALID_GOAL_CONSTRAINTS']

    @property
    def INVALID_ROBOT_STATE(self):
        """Message constant 'INVALID_ROBOT_STATE'."""
        return Metaclass_MoveItErrorCodes.__constants['INVALID_ROBOT_STATE']

    @property
    def INVALID_LINK_NAME(self):
        """Message constant 'INVALID_LINK_NAME'."""
        return Metaclass_MoveItErrorCodes.__constants['INVALID_LINK_NAME']

    @property
    def INVALID_OBJECT_NAME(self):
        """Message constant 'INVALID_OBJECT_NAME'."""
        return Metaclass_MoveItErrorCodes.__constants['INVALID_OBJECT_NAME']

    @property
    def FRAME_TRANSFORM_FAILURE(self):
        """Message constant 'FRAME_TRANSFORM_FAILURE'."""
        return Metaclass_MoveItErrorCodes.__constants['FRAME_TRANSFORM_FAILURE']

    @property
    def COLLISION_CHECKING_UNAVAILABLE(self):
        """Message constant 'COLLISION_CHECKING_UNAVAILABLE'."""
        return Metaclass_MoveItErrorCodes.__constants['COLLISION_CHECKING_UNAVAILABLE']

    @property
    def ROBOT_STATE_STALE(self):
        """Message constant 'ROBOT_STATE_STALE'."""
        return Metaclass_MoveItErrorCodes.__constants['ROBOT_STATE_STALE']

    @property
    def SENSOR_INFO_STALE(self):
        """Message constant 'SENSOR_INFO_STALE'."""
        return Metaclass_MoveItErrorCodes.__constants['SENSOR_INFO_STALE']

    @property
    def COMMUNICATION_FAILURE(self):
        """Message constant 'COMMUNICATION_FAILURE'."""
        return Metaclass_MoveItErrorCodes.__constants['COMMUNICATION_FAILURE']

    @property
    def CRASH(self):
        """Message constant 'CRASH'."""
        return Metaclass_MoveItErrorCodes.__constants['CRASH']

    @property
    def ABORT(self):
        """Message constant 'ABORT'."""
        return Metaclass_MoveItErrorCodes.__constants['ABORT']

    @property
    def NO_IK_SOLUTION(self):
        """Message constant 'NO_IK_SOLUTION'."""
        return Metaclass_MoveItErrorCodes.__constants['NO_IK_SOLUTION']


class MoveItErrorCodes(metaclass=Metaclass_MoveItErrorCodes):
    """
    Message class 'MoveItErrorCodes'.

    Constants:
      SUCCESS
      FAILURE
      PLANNING_FAILED
      INVALID_MOTION_PLAN
      MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE
      CONTROL_FAILED
      UNABLE_TO_AQUIRE_SENSOR_DATA
      TIMED_OUT
      PREEMPTED
      START_STATE_IN_COLLISION
      START_STATE_VIOLATES_PATH_CONSTRAINTS
      START_STATE_INVALID
      GOAL_IN_COLLISION
      GOAL_VIOLATES_PATH_CONSTRAINTS
      GOAL_CONSTRAINTS_VIOLATED
      GOAL_STATE_INVALID
      UNRECOGNIZED_GOAL_TYPE
      INVALID_GROUP_NAME
      INVALID_GOAL_CONSTRAINTS
      INVALID_ROBOT_STATE
      INVALID_LINK_NAME
      INVALID_OBJECT_NAME
      FRAME_TRANSFORM_FAILURE
      COLLISION_CHECKING_UNAVAILABLE
      ROBOT_STATE_STALE
      SENSOR_INFO_STALE
      COMMUNICATION_FAILURE
      CRASH
      ABORT
      NO_IK_SOLUTION
    """

    __slots__ = [
        '_val',
    ]

    _fields_and_field_types = {
        'val': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.val = kwargs.get('val', int())

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
        if self.val != other.val:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def val(self):
        """Message field 'val'."""
        return self._val

    @val.setter
    def val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'val' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'val' field must be an integer in [-2147483648, 2147483647]"
        self._val = value
