# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/GraspPlanning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraspPlanning_Request(type):
    """Metaclass of message 'GraspPlanning_Request'."""

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
                'moveit_msgs.srv.GraspPlanning_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grasp_planning__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grasp_planning__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grasp_planning__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grasp_planning__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grasp_planning__request

            from moveit_msgs.msg import CollisionObject
            if CollisionObject.__class__._TYPE_SUPPORT is None:
                CollisionObject.__class__.__import_type_support__()

            from moveit_msgs.msg import Grasp
            if Grasp.__class__._TYPE_SUPPORT is None:
                Grasp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_Request(metaclass=Metaclass_GraspPlanning_Request):
    """Message class 'GraspPlanning_Request'."""

    __slots__ = [
        '_group_name',
        '_target',
        '_support_surfaces',
        '_candidate_grasps',
        '_movable_obstacles',
    ]

    _fields_and_field_types = {
        'group_name': 'string',
        'target': 'moveit_msgs/CollisionObject',
        'support_surfaces': 'sequence<string>',
        'candidate_grasps': 'sequence<moveit_msgs/Grasp>',
        'movable_obstacles': 'sequence<moveit_msgs/CollisionObject>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'CollisionObject'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Grasp')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'CollisionObject')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group_name = kwargs.get('group_name', str())
        from moveit_msgs.msg import CollisionObject
        self.target = kwargs.get('target', CollisionObject())
        self.support_surfaces = kwargs.get('support_surfaces', [])
        self.candidate_grasps = kwargs.get('candidate_grasps', [])
        self.movable_obstacles = kwargs.get('movable_obstacles', [])

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
        if self.target != other.target:
            return False
        if self.support_surfaces != other.support_surfaces:
            return False
        if self.candidate_grasps != other.candidate_grasps:
            return False
        if self.movable_obstacles != other.movable_obstacles:
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
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            from moveit_msgs.msg import CollisionObject
            assert \
                isinstance(value, CollisionObject), \
                "The 'target' field must be a sub message of type 'CollisionObject'"
        self._target = value

    @builtins.property
    def support_surfaces(self):
        """Message field 'support_surfaces'."""
        return self._support_surfaces

    @support_surfaces.setter
    def support_surfaces(self, value):
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
                "The 'support_surfaces' field must be a set or sequence and each value of type 'str'"
        self._support_surfaces = value

    @builtins.property
    def candidate_grasps(self):
        """Message field 'candidate_grasps'."""
        return self._candidate_grasps

    @candidate_grasps.setter
    def candidate_grasps(self, value):
        if __debug__:
            from moveit_msgs.msg import Grasp
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
                 all(isinstance(v, Grasp) for v in value) and
                 True), \
                "The 'candidate_grasps' field must be a set or sequence and each value of type 'Grasp'"
        self._candidate_grasps = value

    @builtins.property
    def movable_obstacles(self):
        """Message field 'movable_obstacles'."""
        return self._movable_obstacles

    @movable_obstacles.setter
    def movable_obstacles(self, value):
        if __debug__:
            from moveit_msgs.msg import CollisionObject
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
                 all(isinstance(v, CollisionObject) for v in value) and
                 True), \
                "The 'movable_obstacles' field must be a set or sequence and each value of type 'CollisionObject'"
        self._movable_obstacles = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_Response(type):
    """Metaclass of message 'GraspPlanning_Response'."""

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
                'moveit_msgs.srv.GraspPlanning_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grasp_planning__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grasp_planning__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grasp_planning__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grasp_planning__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grasp_planning__response

            from moveit_msgs.msg import Grasp
            if Grasp.__class__._TYPE_SUPPORT is None:
                Grasp.__class__.__import_type_support__()

            from moveit_msgs.msg import MoveItErrorCodes
            if MoveItErrorCodes.__class__._TYPE_SUPPORT is None:
                MoveItErrorCodes.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_Response(metaclass=Metaclass_GraspPlanning_Response):
    """Message class 'GraspPlanning_Response'."""

    __slots__ = [
        '_grasps',
        '_error_code',
    ]

    _fields_and_field_types = {
        'grasps': 'sequence<moveit_msgs/Grasp>',
        'error_code': 'moveit_msgs/MoveItErrorCodes',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Grasp')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MoveItErrorCodes'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.grasps = kwargs.get('grasps', [])
        from moveit_msgs.msg import MoveItErrorCodes
        self.error_code = kwargs.get('error_code', MoveItErrorCodes())

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
        if self.grasps != other.grasps:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def grasps(self):
        """Message field 'grasps'."""
        return self._grasps

    @grasps.setter
    def grasps(self, value):
        if __debug__:
            from moveit_msgs.msg import Grasp
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
                 all(isinstance(v, Grasp) for v in value) and
                 True), \
                "The 'grasps' field must be a set or sequence and each value of type 'Grasp'"
        self._grasps = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            from moveit_msgs.msg import MoveItErrorCodes
            assert \
                isinstance(value, MoveItErrorCodes), \
                "The 'error_code' field must be a sub message of type 'MoveItErrorCodes'"
        self._error_code = value


class Metaclass_GraspPlanning(type):
    """Metaclass of service 'GraspPlanning'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.GraspPlanning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__grasp_planning

            from moveit_msgs.srv import _grasp_planning
            if _grasp_planning.Metaclass_GraspPlanning_Request._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_Request.__import_type_support__()
            if _grasp_planning.Metaclass_GraspPlanning_Response._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_Response.__import_type_support__()


class GraspPlanning(metaclass=Metaclass_GraspPlanning):
    from moveit_msgs.srv._grasp_planning import GraspPlanning_Request as Request
    from moveit_msgs.srv._grasp_planning import GraspPlanning_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
