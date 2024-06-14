# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:msg/FrankaRobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'ddq_d'
# Member 'dtau_j'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FrankaRobotState(type):
    """Metaclass of message 'FrankaRobotState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROBOT_MODE_OTHER': 0,
        'ROBOT_MODE_IDLE': 1,
        'ROBOT_MODE_MOVE': 2,
        'ROBOT_MODE_GUIDING': 3,
        'ROBOT_MODE_REFLEX': 4,
        'ROBOT_MODE_USER_STOPPED': 5,
        'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY': 6,
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
                'franka_msgs.msg.FrankaRobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__franka_robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__franka_robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__franka_robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__franka_robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__franka_robot_state

            from franka_msgs.msg import CollisionIndicators
            if CollisionIndicators.__class__._TYPE_SUPPORT is None:
                CollisionIndicators.__class__.__import_type_support__()

            from franka_msgs.msg import Elbow
            if Elbow.__class__._TYPE_SUPPORT is None:
                Elbow.__class__.__import_type_support__()

            from franka_msgs.msg import Errors
            if Errors.__class__._TYPE_SUPPORT is None:
                Errors.__class__.__import_type_support__()

            from geometry_msgs.msg import AccelStamped
            if AccelStamped.__class__._TYPE_SUPPORT is None:
                AccelStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import InertiaStamped
            if InertiaStamped.__class__._TYPE_SUPPORT is None:
                InertiaStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistStamped
            if TwistStamped.__class__._TYPE_SUPPORT is None:
                TwistStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import WrenchStamped
            if WrenchStamped.__class__._TYPE_SUPPORT is None:
                WrenchStamped.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROBOT_MODE_OTHER': cls.__constants['ROBOT_MODE_OTHER'],
            'ROBOT_MODE_IDLE': cls.__constants['ROBOT_MODE_IDLE'],
            'ROBOT_MODE_MOVE': cls.__constants['ROBOT_MODE_MOVE'],
            'ROBOT_MODE_GUIDING': cls.__constants['ROBOT_MODE_GUIDING'],
            'ROBOT_MODE_REFLEX': cls.__constants['ROBOT_MODE_REFLEX'],
            'ROBOT_MODE_USER_STOPPED': cls.__constants['ROBOT_MODE_USER_STOPPED'],
            'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY': cls.__constants['ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY'],
        }

    @property
    def ROBOT_MODE_OTHER(self):
        """Message constant 'ROBOT_MODE_OTHER'."""
        return Metaclass_FrankaRobotState.__constants['ROBOT_MODE_OTHER']

    @property
    def ROBOT_MODE_IDLE(self):
        """Message constant 'ROBOT_MODE_IDLE'."""
        return Metaclass_FrankaRobotState.__constants['ROBOT_MODE_IDLE']

    @property
    def ROBOT_MODE_MOVE(self):
        """Message constant 'ROBOT_MODE_MOVE'."""
        return Metaclass_FrankaRobotState.__constants['ROBOT_MODE_MOVE']

    @property
    def ROBOT_MODE_GUIDING(self):
        """Message constant 'ROBOT_MODE_GUIDING'."""
        return Metaclass_FrankaRobotState.__constants['ROBOT_MODE_GUIDING']

    @property
    def ROBOT_MODE_REFLEX(self):
        """Message constant 'ROBOT_MODE_REFLEX'."""
        return Metaclass_FrankaRobotState.__constants['ROBOT_MODE_REFLEX']

    @property
    def ROBOT_MODE_USER_STOPPED(self):
        """Message constant 'ROBOT_MODE_USER_STOPPED'."""
        return Metaclass_FrankaRobotState.__constants['ROBOT_MODE_USER_STOPPED']

    @property
    def ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY(self):
        """Message constant 'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY'."""
        return Metaclass_FrankaRobotState.__constants['ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY']


class FrankaRobotState(metaclass=Metaclass_FrankaRobotState):
    """
    Message class 'FrankaRobotState'.

    Constants:
      ROBOT_MODE_OTHER
      ROBOT_MODE_IDLE
      ROBOT_MODE_MOVE
      ROBOT_MODE_GUIDING
      ROBOT_MODE_REFLEX
      ROBOT_MODE_USER_STOPPED
      ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY
    """

    __slots__ = [
        '_header',
        '_collision_indicators',
        '_measured_joint_state',
        '_desired_joint_state',
        '_measured_joint_motor_state',
        '_ddq_d',
        '_dtau_j',
        '_tau_ext_hat_filtered',
        '_elbow',
        '_k_f_ext_hat_k',
        '_o_f_ext_hat_k',
        '_inertia_ee',
        '_inertia_load',
        '_inertia_total',
        '_o_t_ee',
        '_o_t_ee_d',
        '_o_t_ee_c',
        '_f_t_ee',
        '_ee_t_k',
        '_o_dp_ee_d',
        '_o_dp_ee_c',
        '_o_ddp_ee_c',
        '_time',
        '_control_command_success_rate',
        '_robot_mode',
        '_current_errors',
        '_last_motion_errors',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'collision_indicators': 'franka_msgs/CollisionIndicators',
        'measured_joint_state': 'sensor_msgs/JointState',
        'desired_joint_state': 'sensor_msgs/JointState',
        'measured_joint_motor_state': 'sensor_msgs/JointState',
        'ddq_d': 'double[7]',
        'dtau_j': 'double[7]',
        'tau_ext_hat_filtered': 'sensor_msgs/JointState',
        'elbow': 'franka_msgs/Elbow',
        'k_f_ext_hat_k': 'geometry_msgs/WrenchStamped',
        'o_f_ext_hat_k': 'geometry_msgs/WrenchStamped',
        'inertia_ee': 'geometry_msgs/InertiaStamped',
        'inertia_load': 'geometry_msgs/InertiaStamped',
        'inertia_total': 'geometry_msgs/InertiaStamped',
        'o_t_ee': 'geometry_msgs/PoseStamped',
        'o_t_ee_d': 'geometry_msgs/PoseStamped',
        'o_t_ee_c': 'geometry_msgs/PoseStamped',
        'f_t_ee': 'geometry_msgs/PoseStamped',
        'ee_t_k': 'geometry_msgs/PoseStamped',
        'o_dp_ee_d': 'geometry_msgs/TwistStamped',
        'o_dp_ee_c': 'geometry_msgs/TwistStamped',
        'o_ddp_ee_c': 'geometry_msgs/AccelStamped',
        'time': 'double',
        'control_command_success_rate': 'double',
        'robot_mode': 'uint8',
        'current_errors': 'franka_msgs/Errors',
        'last_motion_errors': 'franka_msgs/Errors',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_msgs', 'msg'], 'CollisionIndicators'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_msgs', 'msg'], 'Elbow'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'WrenchStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'WrenchStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'InertiaStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'InertiaStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'InertiaStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'AccelStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_msgs', 'msg'], 'Errors'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_msgs', 'msg'], 'Errors'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from franka_msgs.msg import CollisionIndicators
        self.collision_indicators = kwargs.get('collision_indicators', CollisionIndicators())
        from sensor_msgs.msg import JointState
        self.measured_joint_state = kwargs.get('measured_joint_state', JointState())
        from sensor_msgs.msg import JointState
        self.desired_joint_state = kwargs.get('desired_joint_state', JointState())
        from sensor_msgs.msg import JointState
        self.measured_joint_motor_state = kwargs.get('measured_joint_motor_state', JointState())
        if 'ddq_d' not in kwargs:
            self.ddq_d = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.ddq_d = numpy.array(kwargs.get('ddq_d'), dtype=numpy.float64)
            assert self.ddq_d.shape == (7, )
        if 'dtau_j' not in kwargs:
            self.dtau_j = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.dtau_j = numpy.array(kwargs.get('dtau_j'), dtype=numpy.float64)
            assert self.dtau_j.shape == (7, )
        from sensor_msgs.msg import JointState
        self.tau_ext_hat_filtered = kwargs.get('tau_ext_hat_filtered', JointState())
        from franka_msgs.msg import Elbow
        self.elbow = kwargs.get('elbow', Elbow())
        from geometry_msgs.msg import WrenchStamped
        self.k_f_ext_hat_k = kwargs.get('k_f_ext_hat_k', WrenchStamped())
        from geometry_msgs.msg import WrenchStamped
        self.o_f_ext_hat_k = kwargs.get('o_f_ext_hat_k', WrenchStamped())
        from geometry_msgs.msg import InertiaStamped
        self.inertia_ee = kwargs.get('inertia_ee', InertiaStamped())
        from geometry_msgs.msg import InertiaStamped
        self.inertia_load = kwargs.get('inertia_load', InertiaStamped())
        from geometry_msgs.msg import InertiaStamped
        self.inertia_total = kwargs.get('inertia_total', InertiaStamped())
        from geometry_msgs.msg import PoseStamped
        self.o_t_ee = kwargs.get('o_t_ee', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.o_t_ee_d = kwargs.get('o_t_ee_d', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.o_t_ee_c = kwargs.get('o_t_ee_c', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.f_t_ee = kwargs.get('f_t_ee', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.ee_t_k = kwargs.get('ee_t_k', PoseStamped())
        from geometry_msgs.msg import TwistStamped
        self.o_dp_ee_d = kwargs.get('o_dp_ee_d', TwistStamped())
        from geometry_msgs.msg import TwistStamped
        self.o_dp_ee_c = kwargs.get('o_dp_ee_c', TwistStamped())
        from geometry_msgs.msg import AccelStamped
        self.o_ddp_ee_c = kwargs.get('o_ddp_ee_c', AccelStamped())
        self.time = kwargs.get('time', float())
        self.control_command_success_rate = kwargs.get('control_command_success_rate', float())
        self.robot_mode = kwargs.get('robot_mode', int())
        from franka_msgs.msg import Errors
        self.current_errors = kwargs.get('current_errors', Errors())
        from franka_msgs.msg import Errors
        self.last_motion_errors = kwargs.get('last_motion_errors', Errors())

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
        if self.collision_indicators != other.collision_indicators:
            return False
        if self.measured_joint_state != other.measured_joint_state:
            return False
        if self.desired_joint_state != other.desired_joint_state:
            return False
        if self.measured_joint_motor_state != other.measured_joint_motor_state:
            return False
        if all(self.ddq_d != other.ddq_d):
            return False
        if all(self.dtau_j != other.dtau_j):
            return False
        if self.tau_ext_hat_filtered != other.tau_ext_hat_filtered:
            return False
        if self.elbow != other.elbow:
            return False
        if self.k_f_ext_hat_k != other.k_f_ext_hat_k:
            return False
        if self.o_f_ext_hat_k != other.o_f_ext_hat_k:
            return False
        if self.inertia_ee != other.inertia_ee:
            return False
        if self.inertia_load != other.inertia_load:
            return False
        if self.inertia_total != other.inertia_total:
            return False
        if self.o_t_ee != other.o_t_ee:
            return False
        if self.o_t_ee_d != other.o_t_ee_d:
            return False
        if self.o_t_ee_c != other.o_t_ee_c:
            return False
        if self.f_t_ee != other.f_t_ee:
            return False
        if self.ee_t_k != other.ee_t_k:
            return False
        if self.o_dp_ee_d != other.o_dp_ee_d:
            return False
        if self.o_dp_ee_c != other.o_dp_ee_c:
            return False
        if self.o_ddp_ee_c != other.o_ddp_ee_c:
            return False
        if self.time != other.time:
            return False
        if self.control_command_success_rate != other.control_command_success_rate:
            return False
        if self.robot_mode != other.robot_mode:
            return False
        if self.current_errors != other.current_errors:
            return False
        if self.last_motion_errors != other.last_motion_errors:
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
    def collision_indicators(self):
        """Message field 'collision_indicators'."""
        return self._collision_indicators

    @collision_indicators.setter
    def collision_indicators(self, value):
        if __debug__:
            from franka_msgs.msg import CollisionIndicators
            assert \
                isinstance(value, CollisionIndicators), \
                "The 'collision_indicators' field must be a sub message of type 'CollisionIndicators'"
        self._collision_indicators = value

    @builtins.property
    def measured_joint_state(self):
        """Message field 'measured_joint_state'."""
        return self._measured_joint_state

    @measured_joint_state.setter
    def measured_joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'measured_joint_state' field must be a sub message of type 'JointState'"
        self._measured_joint_state = value

    @builtins.property
    def desired_joint_state(self):
        """Message field 'desired_joint_state'."""
        return self._desired_joint_state

    @desired_joint_state.setter
    def desired_joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'desired_joint_state' field must be a sub message of type 'JointState'"
        self._desired_joint_state = value

    @builtins.property
    def measured_joint_motor_state(self):
        """Message field 'measured_joint_motor_state'."""
        return self._measured_joint_motor_state

    @measured_joint_motor_state.setter
    def measured_joint_motor_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'measured_joint_motor_state' field must be a sub message of type 'JointState'"
        self._measured_joint_motor_state = value

    @builtins.property
    def ddq_d(self):
        """Message field 'ddq_d'."""
        return self._ddq_d

    @ddq_d.setter
    def ddq_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ddq_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'ddq_d' numpy.ndarray() must have a size of 7"
            self._ddq_d = value
            return
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ddq_d' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ddq_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def dtau_j(self):
        """Message field 'dtau_j'."""
        return self._dtau_j

    @dtau_j.setter
    def dtau_j(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'dtau_j' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'dtau_j' numpy.ndarray() must have a size of 7"
            self._dtau_j = value
            return
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dtau_j' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dtau_j = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def tau_ext_hat_filtered(self):
        """Message field 'tau_ext_hat_filtered'."""
        return self._tau_ext_hat_filtered

    @tau_ext_hat_filtered.setter
    def tau_ext_hat_filtered(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'tau_ext_hat_filtered' field must be a sub message of type 'JointState'"
        self._tau_ext_hat_filtered = value

    @builtins.property
    def elbow(self):
        """Message field 'elbow'."""
        return self._elbow

    @elbow.setter
    def elbow(self, value):
        if __debug__:
            from franka_msgs.msg import Elbow
            assert \
                isinstance(value, Elbow), \
                "The 'elbow' field must be a sub message of type 'Elbow'"
        self._elbow = value

    @builtins.property
    def k_f_ext_hat_k(self):
        """Message field 'k_f_ext_hat_k'."""
        return self._k_f_ext_hat_k

    @k_f_ext_hat_k.setter
    def k_f_ext_hat_k(self, value):
        if __debug__:
            from geometry_msgs.msg import WrenchStamped
            assert \
                isinstance(value, WrenchStamped), \
                "The 'k_f_ext_hat_k' field must be a sub message of type 'WrenchStamped'"
        self._k_f_ext_hat_k = value

    @builtins.property
    def o_f_ext_hat_k(self):
        """Message field 'o_f_ext_hat_k'."""
        return self._o_f_ext_hat_k

    @o_f_ext_hat_k.setter
    def o_f_ext_hat_k(self, value):
        if __debug__:
            from geometry_msgs.msg import WrenchStamped
            assert \
                isinstance(value, WrenchStamped), \
                "The 'o_f_ext_hat_k' field must be a sub message of type 'WrenchStamped'"
        self._o_f_ext_hat_k = value

    @builtins.property
    def inertia_ee(self):
        """Message field 'inertia_ee'."""
        return self._inertia_ee

    @inertia_ee.setter
    def inertia_ee(self, value):
        if __debug__:
            from geometry_msgs.msg import InertiaStamped
            assert \
                isinstance(value, InertiaStamped), \
                "The 'inertia_ee' field must be a sub message of type 'InertiaStamped'"
        self._inertia_ee = value

    @builtins.property
    def inertia_load(self):
        """Message field 'inertia_load'."""
        return self._inertia_load

    @inertia_load.setter
    def inertia_load(self, value):
        if __debug__:
            from geometry_msgs.msg import InertiaStamped
            assert \
                isinstance(value, InertiaStamped), \
                "The 'inertia_load' field must be a sub message of type 'InertiaStamped'"
        self._inertia_load = value

    @builtins.property
    def inertia_total(self):
        """Message field 'inertia_total'."""
        return self._inertia_total

    @inertia_total.setter
    def inertia_total(self, value):
        if __debug__:
            from geometry_msgs.msg import InertiaStamped
            assert \
                isinstance(value, InertiaStamped), \
                "The 'inertia_total' field must be a sub message of type 'InertiaStamped'"
        self._inertia_total = value

    @builtins.property
    def o_t_ee(self):
        """Message field 'o_t_ee'."""
        return self._o_t_ee

    @o_t_ee.setter
    def o_t_ee(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'o_t_ee' field must be a sub message of type 'PoseStamped'"
        self._o_t_ee = value

    @builtins.property
    def o_t_ee_d(self):
        """Message field 'o_t_ee_d'."""
        return self._o_t_ee_d

    @o_t_ee_d.setter
    def o_t_ee_d(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'o_t_ee_d' field must be a sub message of type 'PoseStamped'"
        self._o_t_ee_d = value

    @builtins.property
    def o_t_ee_c(self):
        """Message field 'o_t_ee_c'."""
        return self._o_t_ee_c

    @o_t_ee_c.setter
    def o_t_ee_c(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'o_t_ee_c' field must be a sub message of type 'PoseStamped'"
        self._o_t_ee_c = value

    @builtins.property
    def f_t_ee(self):
        """Message field 'f_t_ee'."""
        return self._f_t_ee

    @f_t_ee.setter
    def f_t_ee(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'f_t_ee' field must be a sub message of type 'PoseStamped'"
        self._f_t_ee = value

    @builtins.property
    def ee_t_k(self):
        """Message field 'ee_t_k'."""
        return self._ee_t_k

    @ee_t_k.setter
    def ee_t_k(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'ee_t_k' field must be a sub message of type 'PoseStamped'"
        self._ee_t_k = value

    @builtins.property
    def o_dp_ee_d(self):
        """Message field 'o_dp_ee_d'."""
        return self._o_dp_ee_d

    @o_dp_ee_d.setter
    def o_dp_ee_d(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistStamped
            assert \
                isinstance(value, TwistStamped), \
                "The 'o_dp_ee_d' field must be a sub message of type 'TwistStamped'"
        self._o_dp_ee_d = value

    @builtins.property
    def o_dp_ee_c(self):
        """Message field 'o_dp_ee_c'."""
        return self._o_dp_ee_c

    @o_dp_ee_c.setter
    def o_dp_ee_c(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistStamped
            assert \
                isinstance(value, TwistStamped), \
                "The 'o_dp_ee_c' field must be a sub message of type 'TwistStamped'"
        self._o_dp_ee_c = value

    @builtins.property
    def o_ddp_ee_c(self):
        """Message field 'o_ddp_ee_c'."""
        return self._o_ddp_ee_c

    @o_ddp_ee_c.setter
    def o_ddp_ee_c(self, value):
        if __debug__:
            from geometry_msgs.msg import AccelStamped
            assert \
                isinstance(value, AccelStamped), \
                "The 'o_ddp_ee_c' field must be a sub message of type 'AccelStamped'"
        self._o_ddp_ee_c = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def control_command_success_rate(self):
        """Message field 'control_command_success_rate'."""
        return self._control_command_success_rate

    @control_command_success_rate.setter
    def control_command_success_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_command_success_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'control_command_success_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._control_command_success_rate = value

    @builtins.property
    def robot_mode(self):
        """Message field 'robot_mode'."""
        return self._robot_mode

    @robot_mode.setter
    def robot_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_mode' field must be an unsigned integer in [0, 255]"
        self._robot_mode = value

    @builtins.property
    def current_errors(self):
        """Message field 'current_errors'."""
        return self._current_errors

    @current_errors.setter
    def current_errors(self, value):
        if __debug__:
            from franka_msgs.msg import Errors
            assert \
                isinstance(value, Errors), \
                "The 'current_errors' field must be a sub message of type 'Errors'"
        self._current_errors = value

    @builtins.property
    def last_motion_errors(self):
        """Message field 'last_motion_errors'."""
        return self._last_motion_errors

    @last_motion_errors.setter
    def last_motion_errors(self, value):
        if __debug__:
            from franka_msgs.msg import Errors
            assert \
                isinstance(value, Errors), \
                "The 'last_motion_errors' field must be a sub message of type 'Errors'"
        self._last_motion_errors = value
