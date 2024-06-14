# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/Grasp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Grasp(type):
    """Metaclass of message 'Grasp'."""

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
                'moveit_msgs.msg.Grasp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__grasp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__grasp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__grasp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__grasp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__grasp

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from moveit_msgs.msg import GripperTranslation
            if GripperTranslation.__class__._TYPE_SUPPORT is None:
                GripperTranslation.__class__.__import_type_support__()

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Grasp(metaclass=Metaclass_Grasp):
    """Message class 'Grasp'."""

    __slots__ = [
        '_id',
        '_pre_grasp_posture',
        '_grasp_posture',
        '_grasp_pose',
        '_grasp_quality',
        '_pre_grasp_approach',
        '_post_grasp_retreat',
        '_post_place_retreat',
        '_max_contact_force',
        '_allowed_touch_objects',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'pre_grasp_posture': 'trajectory_msgs/JointTrajectory',
        'grasp_posture': 'trajectory_msgs/JointTrajectory',
        'grasp_pose': 'geometry_msgs/PoseStamped',
        'grasp_quality': 'double',
        'pre_grasp_approach': 'moveit_msgs/GripperTranslation',
        'post_grasp_retreat': 'moveit_msgs/GripperTranslation',
        'post_place_retreat': 'moveit_msgs/GripperTranslation',
        'max_contact_force': 'float',
        'allowed_touch_objects': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'GripperTranslation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'GripperTranslation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'GripperTranslation'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        from trajectory_msgs.msg import JointTrajectory
        self.pre_grasp_posture = kwargs.get('pre_grasp_posture', JointTrajectory())
        from trajectory_msgs.msg import JointTrajectory
        self.grasp_posture = kwargs.get('grasp_posture', JointTrajectory())
        from geometry_msgs.msg import PoseStamped
        self.grasp_pose = kwargs.get('grasp_pose', PoseStamped())
        self.grasp_quality = kwargs.get('grasp_quality', float())
        from moveit_msgs.msg import GripperTranslation
        self.pre_grasp_approach = kwargs.get('pre_grasp_approach', GripperTranslation())
        from moveit_msgs.msg import GripperTranslation
        self.post_grasp_retreat = kwargs.get('post_grasp_retreat', GripperTranslation())
        from moveit_msgs.msg import GripperTranslation
        self.post_place_retreat = kwargs.get('post_place_retreat', GripperTranslation())
        self.max_contact_force = kwargs.get('max_contact_force', float())
        self.allowed_touch_objects = kwargs.get('allowed_touch_objects', [])

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
        if self.id != other.id:
            return False
        if self.pre_grasp_posture != other.pre_grasp_posture:
            return False
        if self.grasp_posture != other.grasp_posture:
            return False
        if self.grasp_pose != other.grasp_pose:
            return False
        if self.grasp_quality != other.grasp_quality:
            return False
        if self.pre_grasp_approach != other.pre_grasp_approach:
            return False
        if self.post_grasp_retreat != other.post_grasp_retreat:
            return False
        if self.post_place_retreat != other.post_place_retreat:
            return False
        if self.max_contact_force != other.max_contact_force:
            return False
        if self.allowed_touch_objects != other.allowed_touch_objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def pre_grasp_posture(self):
        """Message field 'pre_grasp_posture'."""
        return self._pre_grasp_posture

    @pre_grasp_posture.setter
    def pre_grasp_posture(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'pre_grasp_posture' field must be a sub message of type 'JointTrajectory'"
        self._pre_grasp_posture = value

    @builtins.property
    def grasp_posture(self):
        """Message field 'grasp_posture'."""
        return self._grasp_posture

    @grasp_posture.setter
    def grasp_posture(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'grasp_posture' field must be a sub message of type 'JointTrajectory'"
        self._grasp_posture = value

    @builtins.property
    def grasp_pose(self):
        """Message field 'grasp_pose'."""
        return self._grasp_pose

    @grasp_pose.setter
    def grasp_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'grasp_pose' field must be a sub message of type 'PoseStamped'"
        self._grasp_pose = value

    @builtins.property
    def grasp_quality(self):
        """Message field 'grasp_quality'."""
        return self._grasp_quality

    @grasp_quality.setter
    def grasp_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'grasp_quality' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'grasp_quality' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._grasp_quality = value

    @builtins.property
    def pre_grasp_approach(self):
        """Message field 'pre_grasp_approach'."""
        return self._pre_grasp_approach

    @pre_grasp_approach.setter
    def pre_grasp_approach(self, value):
        if __debug__:
            from moveit_msgs.msg import GripperTranslation
            assert \
                isinstance(value, GripperTranslation), \
                "The 'pre_grasp_approach' field must be a sub message of type 'GripperTranslation'"
        self._pre_grasp_approach = value

    @builtins.property
    def post_grasp_retreat(self):
        """Message field 'post_grasp_retreat'."""
        return self._post_grasp_retreat

    @post_grasp_retreat.setter
    def post_grasp_retreat(self, value):
        if __debug__:
            from moveit_msgs.msg import GripperTranslation
            assert \
                isinstance(value, GripperTranslation), \
                "The 'post_grasp_retreat' field must be a sub message of type 'GripperTranslation'"
        self._post_grasp_retreat = value

    @builtins.property
    def post_place_retreat(self):
        """Message field 'post_place_retreat'."""
        return self._post_place_retreat

    @post_place_retreat.setter
    def post_place_retreat(self, value):
        if __debug__:
            from moveit_msgs.msg import GripperTranslation
            assert \
                isinstance(value, GripperTranslation), \
                "The 'post_place_retreat' field must be a sub message of type 'GripperTranslation'"
        self._post_place_retreat = value

    @builtins.property
    def max_contact_force(self):
        """Message field 'max_contact_force'."""
        return self._max_contact_force

    @max_contact_force.setter
    def max_contact_force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_contact_force' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_contact_force' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_contact_force = value

    @builtins.property
    def allowed_touch_objects(self):
        """Message field 'allowed_touch_objects'."""
        return self._allowed_touch_objects

    @allowed_touch_objects.setter
    def allowed_touch_objects(self, value):
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
                "The 'allowed_touch_objects' field must be a set or sequence and each value of type 'str'"
        self._allowed_touch_objects = value
