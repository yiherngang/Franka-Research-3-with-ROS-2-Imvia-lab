# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/GetStateValidity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetStateValidity_Request(type):
    """Metaclass of message 'GetStateValidity_Request'."""

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
                'moveit_msgs.srv.GetStateValidity_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_state_validity__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_state_validity__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_state_validity__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_state_validity__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_state_validity__request

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


class GetStateValidity_Request(metaclass=Metaclass_GetStateValidity_Request):
    """Message class 'GetStateValidity_Request'."""

    __slots__ = [
        '_robot_state',
        '_group_name',
        '_constraints',
    ]

    _fields_and_field_types = {
        'robot_state': 'moveit_msgs/RobotState',
        'group_name': 'string',
        'constraints': 'moveit_msgs/Constraints',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Constraints'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import RobotState
        self.robot_state = kwargs.get('robot_state', RobotState())
        self.group_name = kwargs.get('group_name', str())
        from moveit_msgs.msg import Constraints
        self.constraints = kwargs.get('constraints', Constraints())

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
        if self.robot_state != other.robot_state:
            return False
        if self.group_name != other.group_name:
            return False
        if self.constraints != other.constraints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetStateValidity_Response(type):
    """Metaclass of message 'GetStateValidity_Response'."""

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
                'moveit_msgs.srv.GetStateValidity_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_state_validity__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_state_validity__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_state_validity__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_state_validity__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_state_validity__response

            from moveit_msgs.msg import ConstraintEvalResult
            if ConstraintEvalResult.__class__._TYPE_SUPPORT is None:
                ConstraintEvalResult.__class__.__import_type_support__()

            from moveit_msgs.msg import ContactInformation
            if ContactInformation.__class__._TYPE_SUPPORT is None:
                ContactInformation.__class__.__import_type_support__()

            from moveit_msgs.msg import CostSource
            if CostSource.__class__._TYPE_SUPPORT is None:
                CostSource.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetStateValidity_Response(metaclass=Metaclass_GetStateValidity_Response):
    """Message class 'GetStateValidity_Response'."""

    __slots__ = [
        '_valid',
        '_contacts',
        '_cost_sources',
        '_constraint_result',
    ]

    _fields_and_field_types = {
        'valid': 'boolean',
        'contacts': 'sequence<moveit_msgs/ContactInformation>',
        'cost_sources': 'sequence<moveit_msgs/CostSource>',
        'constraint_result': 'sequence<moveit_msgs/ConstraintEvalResult>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'ContactInformation')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'CostSource')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'ConstraintEvalResult')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.valid = kwargs.get('valid', bool())
        self.contacts = kwargs.get('contacts', [])
        self.cost_sources = kwargs.get('cost_sources', [])
        self.constraint_result = kwargs.get('constraint_result', [])

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
        if self.valid != other.valid:
            return False
        if self.contacts != other.contacts:
            return False
        if self.cost_sources != other.cost_sources:
            return False
        if self.constraint_result != other.constraint_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def contacts(self):
        """Message field 'contacts'."""
        return self._contacts

    @contacts.setter
    def contacts(self, value):
        if __debug__:
            from moveit_msgs.msg import ContactInformation
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
                 all(isinstance(v, ContactInformation) for v in value) and
                 True), \
                "The 'contacts' field must be a set or sequence and each value of type 'ContactInformation'"
        self._contacts = value

    @builtins.property
    def cost_sources(self):
        """Message field 'cost_sources'."""
        return self._cost_sources

    @cost_sources.setter
    def cost_sources(self, value):
        if __debug__:
            from moveit_msgs.msg import CostSource
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
                 all(isinstance(v, CostSource) for v in value) and
                 True), \
                "The 'cost_sources' field must be a set or sequence and each value of type 'CostSource'"
        self._cost_sources = value

    @builtins.property
    def constraint_result(self):
        """Message field 'constraint_result'."""
        return self._constraint_result

    @constraint_result.setter
    def constraint_result(self, value):
        if __debug__:
            from moveit_msgs.msg import ConstraintEvalResult
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
                 all(isinstance(v, ConstraintEvalResult) for v in value) and
                 True), \
                "The 'constraint_result' field must be a set or sequence and each value of type 'ConstraintEvalResult'"
        self._constraint_result = value


class Metaclass_GetStateValidity(type):
    """Metaclass of service 'GetStateValidity'."""

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
                'moveit_msgs.srv.GetStateValidity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_state_validity

            from moveit_msgs.srv import _get_state_validity
            if _get_state_validity.Metaclass_GetStateValidity_Request._TYPE_SUPPORT is None:
                _get_state_validity.Metaclass_GetStateValidity_Request.__import_type_support__()
            if _get_state_validity.Metaclass_GetStateValidity_Response._TYPE_SUPPORT is None:
                _get_state_validity.Metaclass_GetStateValidity_Response.__import_type_support__()


class GetStateValidity(metaclass=Metaclass_GetStateValidity):
    from moveit_msgs.srv._get_state_validity import GetStateValidity_Request as Request
    from moveit_msgs.srv._get_state_validity import GetStateValidity_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
