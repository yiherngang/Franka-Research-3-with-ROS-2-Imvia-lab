# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:msg/Errors.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Errors(type):
    """Metaclass of message 'Errors'."""

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
            module = import_type_support('franka_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_msgs.msg.Errors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__errors
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__errors
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__errors
            cls._TYPE_SUPPORT = module.type_support_msg__msg__errors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__errors

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Errors(metaclass=Metaclass_Errors):
    """Message class 'Errors'."""

    __slots__ = [
        '_joint_position_limits_violation',
        '_cartesian_position_limits_violation',
        '_self_collision_avoidance_violation',
        '_joint_velocity_violation',
        '_cartesian_velocity_violation',
        '_force_control_safety_violation',
        '_joint_reflex',
        '_cartesian_reflex',
        '_max_goal_pose_deviation_violation',
        '_max_path_pose_deviation_violation',
        '_cartesian_velocity_profile_safety_violation',
        '_joint_position_motion_generator_start_pose_invalid',
        '_joint_motion_generator_position_limits_violation',
        '_joint_motion_generator_velocity_limits_violation',
        '_joint_motion_generator_velocity_discontinuity',
        '_joint_motion_generator_acceleration_discontinuity',
        '_cartesian_position_motion_generator_start_pose_invalid',
        '_cartesian_motion_generator_elbow_limit_violation',
        '_cartesian_motion_generator_velocity_limits_violation',
        '_cartesian_motion_generator_velocity_discontinuity',
        '_cartesian_motion_generator_acceleration_discontinuity',
        '_cartesian_motion_generator_elbow_sign_inconsistent',
        '_cartesian_motion_generator_start_elbow_invalid',
        '_cartesian_motion_generator_joint_position_limits_violation',
        '_cartesian_motion_generator_joint_velocity_limits_violation',
        '_cartesian_motion_generator_joint_velocity_discontinuity',
        '_cartesian_motion_generator_joint_acceleration_discontinuity',
        '_cartesian_position_motion_generator_invalid_frame',
        '_force_controller_desired_force_tolerance_violation',
        '_controller_torque_discontinuity',
        '_start_elbow_sign_inconsistent',
        '_communication_constraints_violation',
        '_power_limit_violation',
        '_joint_p2p_insufficient_torque_for_planning',
        '_tau_j_range_violation',
        '_instability_detected',
    ]

    _fields_and_field_types = {
        'joint_position_limits_violation': 'boolean',
        'cartesian_position_limits_violation': 'boolean',
        'self_collision_avoidance_violation': 'boolean',
        'joint_velocity_violation': 'boolean',
        'cartesian_velocity_violation': 'boolean',
        'force_control_safety_violation': 'boolean',
        'joint_reflex': 'boolean',
        'cartesian_reflex': 'boolean',
        'max_goal_pose_deviation_violation': 'boolean',
        'max_path_pose_deviation_violation': 'boolean',
        'cartesian_velocity_profile_safety_violation': 'boolean',
        'joint_position_motion_generator_start_pose_invalid': 'boolean',
        'joint_motion_generator_position_limits_violation': 'boolean',
        'joint_motion_generator_velocity_limits_violation': 'boolean',
        'joint_motion_generator_velocity_discontinuity': 'boolean',
        'joint_motion_generator_acceleration_discontinuity': 'boolean',
        'cartesian_position_motion_generator_start_pose_invalid': 'boolean',
        'cartesian_motion_generator_elbow_limit_violation': 'boolean',
        'cartesian_motion_generator_velocity_limits_violation': 'boolean',
        'cartesian_motion_generator_velocity_discontinuity': 'boolean',
        'cartesian_motion_generator_acceleration_discontinuity': 'boolean',
        'cartesian_motion_generator_elbow_sign_inconsistent': 'boolean',
        'cartesian_motion_generator_start_elbow_invalid': 'boolean',
        'cartesian_motion_generator_joint_position_limits_violation': 'boolean',
        'cartesian_motion_generator_joint_velocity_limits_violation': 'boolean',
        'cartesian_motion_generator_joint_velocity_discontinuity': 'boolean',
        'cartesian_motion_generator_joint_acceleration_discontinuity': 'boolean',
        'cartesian_position_motion_generator_invalid_frame': 'boolean',
        'force_controller_desired_force_tolerance_violation': 'boolean',
        'controller_torque_discontinuity': 'boolean',
        'start_elbow_sign_inconsistent': 'boolean',
        'communication_constraints_violation': 'boolean',
        'power_limit_violation': 'boolean',
        'joint_p2p_insufficient_torque_for_planning': 'boolean',
        'tau_j_range_violation': 'boolean',
        'instability_detected': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_position_limits_violation = kwargs.get('joint_position_limits_violation', bool())
        self.cartesian_position_limits_violation = kwargs.get('cartesian_position_limits_violation', bool())
        self.self_collision_avoidance_violation = kwargs.get('self_collision_avoidance_violation', bool())
        self.joint_velocity_violation = kwargs.get('joint_velocity_violation', bool())
        self.cartesian_velocity_violation = kwargs.get('cartesian_velocity_violation', bool())
        self.force_control_safety_violation = kwargs.get('force_control_safety_violation', bool())
        self.joint_reflex = kwargs.get('joint_reflex', bool())
        self.cartesian_reflex = kwargs.get('cartesian_reflex', bool())
        self.max_goal_pose_deviation_violation = kwargs.get('max_goal_pose_deviation_violation', bool())
        self.max_path_pose_deviation_violation = kwargs.get('max_path_pose_deviation_violation', bool())
        self.cartesian_velocity_profile_safety_violation = kwargs.get('cartesian_velocity_profile_safety_violation', bool())
        self.joint_position_motion_generator_start_pose_invalid = kwargs.get('joint_position_motion_generator_start_pose_invalid', bool())
        self.joint_motion_generator_position_limits_violation = kwargs.get('joint_motion_generator_position_limits_violation', bool())
        self.joint_motion_generator_velocity_limits_violation = kwargs.get('joint_motion_generator_velocity_limits_violation', bool())
        self.joint_motion_generator_velocity_discontinuity = kwargs.get('joint_motion_generator_velocity_discontinuity', bool())
        self.joint_motion_generator_acceleration_discontinuity = kwargs.get('joint_motion_generator_acceleration_discontinuity', bool())
        self.cartesian_position_motion_generator_start_pose_invalid = kwargs.get('cartesian_position_motion_generator_start_pose_invalid', bool())
        self.cartesian_motion_generator_elbow_limit_violation = kwargs.get('cartesian_motion_generator_elbow_limit_violation', bool())
        self.cartesian_motion_generator_velocity_limits_violation = kwargs.get('cartesian_motion_generator_velocity_limits_violation', bool())
        self.cartesian_motion_generator_velocity_discontinuity = kwargs.get('cartesian_motion_generator_velocity_discontinuity', bool())
        self.cartesian_motion_generator_acceleration_discontinuity = kwargs.get('cartesian_motion_generator_acceleration_discontinuity', bool())
        self.cartesian_motion_generator_elbow_sign_inconsistent = kwargs.get('cartesian_motion_generator_elbow_sign_inconsistent', bool())
        self.cartesian_motion_generator_start_elbow_invalid = kwargs.get('cartesian_motion_generator_start_elbow_invalid', bool())
        self.cartesian_motion_generator_joint_position_limits_violation = kwargs.get('cartesian_motion_generator_joint_position_limits_violation', bool())
        self.cartesian_motion_generator_joint_velocity_limits_violation = kwargs.get('cartesian_motion_generator_joint_velocity_limits_violation', bool())
        self.cartesian_motion_generator_joint_velocity_discontinuity = kwargs.get('cartesian_motion_generator_joint_velocity_discontinuity', bool())
        self.cartesian_motion_generator_joint_acceleration_discontinuity = kwargs.get('cartesian_motion_generator_joint_acceleration_discontinuity', bool())
        self.cartesian_position_motion_generator_invalid_frame = kwargs.get('cartesian_position_motion_generator_invalid_frame', bool())
        self.force_controller_desired_force_tolerance_violation = kwargs.get('force_controller_desired_force_tolerance_violation', bool())
        self.controller_torque_discontinuity = kwargs.get('controller_torque_discontinuity', bool())
        self.start_elbow_sign_inconsistent = kwargs.get('start_elbow_sign_inconsistent', bool())
        self.communication_constraints_violation = kwargs.get('communication_constraints_violation', bool())
        self.power_limit_violation = kwargs.get('power_limit_violation', bool())
        self.joint_p2p_insufficient_torque_for_planning = kwargs.get('joint_p2p_insufficient_torque_for_planning', bool())
        self.tau_j_range_violation = kwargs.get('tau_j_range_violation', bool())
        self.instability_detected = kwargs.get('instability_detected', bool())

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
        if self.joint_position_limits_violation != other.joint_position_limits_violation:
            return False
        if self.cartesian_position_limits_violation != other.cartesian_position_limits_violation:
            return False
        if self.self_collision_avoidance_violation != other.self_collision_avoidance_violation:
            return False
        if self.joint_velocity_violation != other.joint_velocity_violation:
            return False
        if self.cartesian_velocity_violation != other.cartesian_velocity_violation:
            return False
        if self.force_control_safety_violation != other.force_control_safety_violation:
            return False
        if self.joint_reflex != other.joint_reflex:
            return False
        if self.cartesian_reflex != other.cartesian_reflex:
            return False
        if self.max_goal_pose_deviation_violation != other.max_goal_pose_deviation_violation:
            return False
        if self.max_path_pose_deviation_violation != other.max_path_pose_deviation_violation:
            return False
        if self.cartesian_velocity_profile_safety_violation != other.cartesian_velocity_profile_safety_violation:
            return False
        if self.joint_position_motion_generator_start_pose_invalid != other.joint_position_motion_generator_start_pose_invalid:
            return False
        if self.joint_motion_generator_position_limits_violation != other.joint_motion_generator_position_limits_violation:
            return False
        if self.joint_motion_generator_velocity_limits_violation != other.joint_motion_generator_velocity_limits_violation:
            return False
        if self.joint_motion_generator_velocity_discontinuity != other.joint_motion_generator_velocity_discontinuity:
            return False
        if self.joint_motion_generator_acceleration_discontinuity != other.joint_motion_generator_acceleration_discontinuity:
            return False
        if self.cartesian_position_motion_generator_start_pose_invalid != other.cartesian_position_motion_generator_start_pose_invalid:
            return False
        if self.cartesian_motion_generator_elbow_limit_violation != other.cartesian_motion_generator_elbow_limit_violation:
            return False
        if self.cartesian_motion_generator_velocity_limits_violation != other.cartesian_motion_generator_velocity_limits_violation:
            return False
        if self.cartesian_motion_generator_velocity_discontinuity != other.cartesian_motion_generator_velocity_discontinuity:
            return False
        if self.cartesian_motion_generator_acceleration_discontinuity != other.cartesian_motion_generator_acceleration_discontinuity:
            return False
        if self.cartesian_motion_generator_elbow_sign_inconsistent != other.cartesian_motion_generator_elbow_sign_inconsistent:
            return False
        if self.cartesian_motion_generator_start_elbow_invalid != other.cartesian_motion_generator_start_elbow_invalid:
            return False
        if self.cartesian_motion_generator_joint_position_limits_violation != other.cartesian_motion_generator_joint_position_limits_violation:
            return False
        if self.cartesian_motion_generator_joint_velocity_limits_violation != other.cartesian_motion_generator_joint_velocity_limits_violation:
            return False
        if self.cartesian_motion_generator_joint_velocity_discontinuity != other.cartesian_motion_generator_joint_velocity_discontinuity:
            return False
        if self.cartesian_motion_generator_joint_acceleration_discontinuity != other.cartesian_motion_generator_joint_acceleration_discontinuity:
            return False
        if self.cartesian_position_motion_generator_invalid_frame != other.cartesian_position_motion_generator_invalid_frame:
            return False
        if self.force_controller_desired_force_tolerance_violation != other.force_controller_desired_force_tolerance_violation:
            return False
        if self.controller_torque_discontinuity != other.controller_torque_discontinuity:
            return False
        if self.start_elbow_sign_inconsistent != other.start_elbow_sign_inconsistent:
            return False
        if self.communication_constraints_violation != other.communication_constraints_violation:
            return False
        if self.power_limit_violation != other.power_limit_violation:
            return False
        if self.joint_p2p_insufficient_torque_for_planning != other.joint_p2p_insufficient_torque_for_planning:
            return False
        if self.tau_j_range_violation != other.tau_j_range_violation:
            return False
        if self.instability_detected != other.instability_detected:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_position_limits_violation(self):
        """Message field 'joint_position_limits_violation'."""
        return self._joint_position_limits_violation

    @joint_position_limits_violation.setter
    def joint_position_limits_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_position_limits_violation' field must be of type 'bool'"
        self._joint_position_limits_violation = value

    @builtins.property
    def cartesian_position_limits_violation(self):
        """Message field 'cartesian_position_limits_violation'."""
        return self._cartesian_position_limits_violation

    @cartesian_position_limits_violation.setter
    def cartesian_position_limits_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_position_limits_violation' field must be of type 'bool'"
        self._cartesian_position_limits_violation = value

    @builtins.property
    def self_collision_avoidance_violation(self):
        """Message field 'self_collision_avoidance_violation'."""
        return self._self_collision_avoidance_violation

    @self_collision_avoidance_violation.setter
    def self_collision_avoidance_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'self_collision_avoidance_violation' field must be of type 'bool'"
        self._self_collision_avoidance_violation = value

    @builtins.property
    def joint_velocity_violation(self):
        """Message field 'joint_velocity_violation'."""
        return self._joint_velocity_violation

    @joint_velocity_violation.setter
    def joint_velocity_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_velocity_violation' field must be of type 'bool'"
        self._joint_velocity_violation = value

    @builtins.property
    def cartesian_velocity_violation(self):
        """Message field 'cartesian_velocity_violation'."""
        return self._cartesian_velocity_violation

    @cartesian_velocity_violation.setter
    def cartesian_velocity_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_velocity_violation' field must be of type 'bool'"
        self._cartesian_velocity_violation = value

    @builtins.property
    def force_control_safety_violation(self):
        """Message field 'force_control_safety_violation'."""
        return self._force_control_safety_violation

    @force_control_safety_violation.setter
    def force_control_safety_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_control_safety_violation' field must be of type 'bool'"
        self._force_control_safety_violation = value

    @builtins.property
    def joint_reflex(self):
        """Message field 'joint_reflex'."""
        return self._joint_reflex

    @joint_reflex.setter
    def joint_reflex(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_reflex' field must be of type 'bool'"
        self._joint_reflex = value

    @builtins.property
    def cartesian_reflex(self):
        """Message field 'cartesian_reflex'."""
        return self._cartesian_reflex

    @cartesian_reflex.setter
    def cartesian_reflex(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_reflex' field must be of type 'bool'"
        self._cartesian_reflex = value

    @builtins.property
    def max_goal_pose_deviation_violation(self):
        """Message field 'max_goal_pose_deviation_violation'."""
        return self._max_goal_pose_deviation_violation

    @max_goal_pose_deviation_violation.setter
    def max_goal_pose_deviation_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'max_goal_pose_deviation_violation' field must be of type 'bool'"
        self._max_goal_pose_deviation_violation = value

    @builtins.property
    def max_path_pose_deviation_violation(self):
        """Message field 'max_path_pose_deviation_violation'."""
        return self._max_path_pose_deviation_violation

    @max_path_pose_deviation_violation.setter
    def max_path_pose_deviation_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'max_path_pose_deviation_violation' field must be of type 'bool'"
        self._max_path_pose_deviation_violation = value

    @builtins.property
    def cartesian_velocity_profile_safety_violation(self):
        """Message field 'cartesian_velocity_profile_safety_violation'."""
        return self._cartesian_velocity_profile_safety_violation

    @cartesian_velocity_profile_safety_violation.setter
    def cartesian_velocity_profile_safety_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_velocity_profile_safety_violation' field must be of type 'bool'"
        self._cartesian_velocity_profile_safety_violation = value

    @builtins.property
    def joint_position_motion_generator_start_pose_invalid(self):
        """Message field 'joint_position_motion_generator_start_pose_invalid'."""
        return self._joint_position_motion_generator_start_pose_invalid

    @joint_position_motion_generator_start_pose_invalid.setter
    def joint_position_motion_generator_start_pose_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_position_motion_generator_start_pose_invalid' field must be of type 'bool'"
        self._joint_position_motion_generator_start_pose_invalid = value

    @builtins.property
    def joint_motion_generator_position_limits_violation(self):
        """Message field 'joint_motion_generator_position_limits_violation'."""
        return self._joint_motion_generator_position_limits_violation

    @joint_motion_generator_position_limits_violation.setter
    def joint_motion_generator_position_limits_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_motion_generator_position_limits_violation' field must be of type 'bool'"
        self._joint_motion_generator_position_limits_violation = value

    @builtins.property
    def joint_motion_generator_velocity_limits_violation(self):
        """Message field 'joint_motion_generator_velocity_limits_violation'."""
        return self._joint_motion_generator_velocity_limits_violation

    @joint_motion_generator_velocity_limits_violation.setter
    def joint_motion_generator_velocity_limits_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_motion_generator_velocity_limits_violation' field must be of type 'bool'"
        self._joint_motion_generator_velocity_limits_violation = value

    @builtins.property
    def joint_motion_generator_velocity_discontinuity(self):
        """Message field 'joint_motion_generator_velocity_discontinuity'."""
        return self._joint_motion_generator_velocity_discontinuity

    @joint_motion_generator_velocity_discontinuity.setter
    def joint_motion_generator_velocity_discontinuity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_motion_generator_velocity_discontinuity' field must be of type 'bool'"
        self._joint_motion_generator_velocity_discontinuity = value

    @builtins.property
    def joint_motion_generator_acceleration_discontinuity(self):
        """Message field 'joint_motion_generator_acceleration_discontinuity'."""
        return self._joint_motion_generator_acceleration_discontinuity

    @joint_motion_generator_acceleration_discontinuity.setter
    def joint_motion_generator_acceleration_discontinuity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_motion_generator_acceleration_discontinuity' field must be of type 'bool'"
        self._joint_motion_generator_acceleration_discontinuity = value

    @builtins.property
    def cartesian_position_motion_generator_start_pose_invalid(self):
        """Message field 'cartesian_position_motion_generator_start_pose_invalid'."""
        return self._cartesian_position_motion_generator_start_pose_invalid

    @cartesian_position_motion_generator_start_pose_invalid.setter
    def cartesian_position_motion_generator_start_pose_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_position_motion_generator_start_pose_invalid' field must be of type 'bool'"
        self._cartesian_position_motion_generator_start_pose_invalid = value

    @builtins.property
    def cartesian_motion_generator_elbow_limit_violation(self):
        """Message field 'cartesian_motion_generator_elbow_limit_violation'."""
        return self._cartesian_motion_generator_elbow_limit_violation

    @cartesian_motion_generator_elbow_limit_violation.setter
    def cartesian_motion_generator_elbow_limit_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_elbow_limit_violation' field must be of type 'bool'"
        self._cartesian_motion_generator_elbow_limit_violation = value

    @builtins.property
    def cartesian_motion_generator_velocity_limits_violation(self):
        """Message field 'cartesian_motion_generator_velocity_limits_violation'."""
        return self._cartesian_motion_generator_velocity_limits_violation

    @cartesian_motion_generator_velocity_limits_violation.setter
    def cartesian_motion_generator_velocity_limits_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_velocity_limits_violation' field must be of type 'bool'"
        self._cartesian_motion_generator_velocity_limits_violation = value

    @builtins.property
    def cartesian_motion_generator_velocity_discontinuity(self):
        """Message field 'cartesian_motion_generator_velocity_discontinuity'."""
        return self._cartesian_motion_generator_velocity_discontinuity

    @cartesian_motion_generator_velocity_discontinuity.setter
    def cartesian_motion_generator_velocity_discontinuity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_velocity_discontinuity' field must be of type 'bool'"
        self._cartesian_motion_generator_velocity_discontinuity = value

    @builtins.property
    def cartesian_motion_generator_acceleration_discontinuity(self):
        """Message field 'cartesian_motion_generator_acceleration_discontinuity'."""
        return self._cartesian_motion_generator_acceleration_discontinuity

    @cartesian_motion_generator_acceleration_discontinuity.setter
    def cartesian_motion_generator_acceleration_discontinuity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_acceleration_discontinuity' field must be of type 'bool'"
        self._cartesian_motion_generator_acceleration_discontinuity = value

    @builtins.property
    def cartesian_motion_generator_elbow_sign_inconsistent(self):
        """Message field 'cartesian_motion_generator_elbow_sign_inconsistent'."""
        return self._cartesian_motion_generator_elbow_sign_inconsistent

    @cartesian_motion_generator_elbow_sign_inconsistent.setter
    def cartesian_motion_generator_elbow_sign_inconsistent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_elbow_sign_inconsistent' field must be of type 'bool'"
        self._cartesian_motion_generator_elbow_sign_inconsistent = value

    @builtins.property
    def cartesian_motion_generator_start_elbow_invalid(self):
        """Message field 'cartesian_motion_generator_start_elbow_invalid'."""
        return self._cartesian_motion_generator_start_elbow_invalid

    @cartesian_motion_generator_start_elbow_invalid.setter
    def cartesian_motion_generator_start_elbow_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_start_elbow_invalid' field must be of type 'bool'"
        self._cartesian_motion_generator_start_elbow_invalid = value

    @builtins.property
    def cartesian_motion_generator_joint_position_limits_violation(self):
        """Message field 'cartesian_motion_generator_joint_position_limits_violation'."""
        return self._cartesian_motion_generator_joint_position_limits_violation

    @cartesian_motion_generator_joint_position_limits_violation.setter
    def cartesian_motion_generator_joint_position_limits_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_joint_position_limits_violation' field must be of type 'bool'"
        self._cartesian_motion_generator_joint_position_limits_violation = value

    @builtins.property
    def cartesian_motion_generator_joint_velocity_limits_violation(self):
        """Message field 'cartesian_motion_generator_joint_velocity_limits_violation'."""
        return self._cartesian_motion_generator_joint_velocity_limits_violation

    @cartesian_motion_generator_joint_velocity_limits_violation.setter
    def cartesian_motion_generator_joint_velocity_limits_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_joint_velocity_limits_violation' field must be of type 'bool'"
        self._cartesian_motion_generator_joint_velocity_limits_violation = value

    @builtins.property
    def cartesian_motion_generator_joint_velocity_discontinuity(self):
        """Message field 'cartesian_motion_generator_joint_velocity_discontinuity'."""
        return self._cartesian_motion_generator_joint_velocity_discontinuity

    @cartesian_motion_generator_joint_velocity_discontinuity.setter
    def cartesian_motion_generator_joint_velocity_discontinuity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_joint_velocity_discontinuity' field must be of type 'bool'"
        self._cartesian_motion_generator_joint_velocity_discontinuity = value

    @builtins.property
    def cartesian_motion_generator_joint_acceleration_discontinuity(self):
        """Message field 'cartesian_motion_generator_joint_acceleration_discontinuity'."""
        return self._cartesian_motion_generator_joint_acceleration_discontinuity

    @cartesian_motion_generator_joint_acceleration_discontinuity.setter
    def cartesian_motion_generator_joint_acceleration_discontinuity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_motion_generator_joint_acceleration_discontinuity' field must be of type 'bool'"
        self._cartesian_motion_generator_joint_acceleration_discontinuity = value

    @builtins.property
    def cartesian_position_motion_generator_invalid_frame(self):
        """Message field 'cartesian_position_motion_generator_invalid_frame'."""
        return self._cartesian_position_motion_generator_invalid_frame

    @cartesian_position_motion_generator_invalid_frame.setter
    def cartesian_position_motion_generator_invalid_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cartesian_position_motion_generator_invalid_frame' field must be of type 'bool'"
        self._cartesian_position_motion_generator_invalid_frame = value

    @builtins.property
    def force_controller_desired_force_tolerance_violation(self):
        """Message field 'force_controller_desired_force_tolerance_violation'."""
        return self._force_controller_desired_force_tolerance_violation

    @force_controller_desired_force_tolerance_violation.setter
    def force_controller_desired_force_tolerance_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_controller_desired_force_tolerance_violation' field must be of type 'bool'"
        self._force_controller_desired_force_tolerance_violation = value

    @builtins.property
    def controller_torque_discontinuity(self):
        """Message field 'controller_torque_discontinuity'."""
        return self._controller_torque_discontinuity

    @controller_torque_discontinuity.setter
    def controller_torque_discontinuity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'controller_torque_discontinuity' field must be of type 'bool'"
        self._controller_torque_discontinuity = value

    @builtins.property
    def start_elbow_sign_inconsistent(self):
        """Message field 'start_elbow_sign_inconsistent'."""
        return self._start_elbow_sign_inconsistent

    @start_elbow_sign_inconsistent.setter
    def start_elbow_sign_inconsistent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start_elbow_sign_inconsistent' field must be of type 'bool'"
        self._start_elbow_sign_inconsistent = value

    @builtins.property
    def communication_constraints_violation(self):
        """Message field 'communication_constraints_violation'."""
        return self._communication_constraints_violation

    @communication_constraints_violation.setter
    def communication_constraints_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'communication_constraints_violation' field must be of type 'bool'"
        self._communication_constraints_violation = value

    @builtins.property
    def power_limit_violation(self):
        """Message field 'power_limit_violation'."""
        return self._power_limit_violation

    @power_limit_violation.setter
    def power_limit_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_limit_violation' field must be of type 'bool'"
        self._power_limit_violation = value

    @builtins.property
    def joint_p2p_insufficient_torque_for_planning(self):
        """Message field 'joint_p2p_insufficient_torque_for_planning'."""
        return self._joint_p2p_insufficient_torque_for_planning

    @joint_p2p_insufficient_torque_for_planning.setter
    def joint_p2p_insufficient_torque_for_planning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_p2p_insufficient_torque_for_planning' field must be of type 'bool'"
        self._joint_p2p_insufficient_torque_for_planning = value

    @builtins.property
    def tau_j_range_violation(self):
        """Message field 'tau_j_range_violation'."""
        return self._tau_j_range_violation

    @tau_j_range_violation.setter
    def tau_j_range_violation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tau_j_range_violation' field must be of type 'bool'"
        self._tau_j_range_violation = value

    @builtins.property
    def instability_detected(self):
        """Message field 'instability_detected'."""
        return self._instability_detected

    @instability_detected.setter
    def instability_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'instability_detected' field must be of type 'bool'"
        self._instability_detected = value
