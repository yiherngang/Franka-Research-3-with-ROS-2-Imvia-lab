/****************************************************************************
** Meta object code from reading C++ file 'task_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/moveit_task_constructor/visualization/motion_planning_tasks/src/task_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__TaskDisplay_t {
    QByteArrayData data[20];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__TaskDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__TaskDisplay_t qt_meta_stringdata_moveit_rviz_plugin__TaskDisplay = {
    {
QT_MOC_LITERAL(0, 0, 31), // "moveit_rviz_plugin::TaskDisplay"
QT_MOC_LITERAL(1, 32, 23), // "changedRobotDescription"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 24), // "changedTaskSolutionTopic"
QT_MOC_LITERAL(4, 82, 15), // "onTasksInserted"
QT_MOC_LITERAL(5, 98, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 110, 6), // "parent"
QT_MOC_LITERAL(7, 117, 5), // "first"
QT_MOC_LITERAL(8, 123, 4), // "last"
QT_MOC_LITERAL(9, 128, 14), // "onTasksRemoved"
QT_MOC_LITERAL(10, 143, 17), // "onTaskDataChanged"
QT_MOC_LITERAL(11, 161, 7), // "topLeft"
QT_MOC_LITERAL(12, 169, 11), // "bottomRight"
QT_MOC_LITERAL(13, 181, 17), // "taskDescriptionCB"
QT_MOC_LITERAL(14, 199, 66), // "moveit_task_constructor_msgs:..."
QT_MOC_LITERAL(15, 266, 3), // "msg"
QT_MOC_LITERAL(16, 270, 16), // "taskStatisticsCB"
QT_MOC_LITERAL(17, 287, 65), // "moveit_task_constructor_msgs:..."
QT_MOC_LITERAL(18, 353, 14), // "taskSolutionCB"
QT_MOC_LITERAL(19, 368, 59) // "moveit_task_constructor_msgs:..."

    },
    "moveit_rviz_plugin::TaskDisplay\0"
    "changedRobotDescription\0\0"
    "changedTaskSolutionTopic\0onTasksInserted\0"
    "QModelIndex\0parent\0first\0last\0"
    "onTasksRemoved\0onTaskDataChanged\0"
    "topLeft\0bottomRight\0taskDescriptionCB\0"
    "moveit_task_constructor_msgs::msg::TaskDescription::ConstSharedPtr\0"
    "msg\0taskStatisticsCB\0"
    "moveit_task_constructor_msgs::msg::TaskStatistics::ConstSharedPtr\0"
    "taskSolutionCB\0"
    "moveit_task_constructor_msgs::msg::Solution::ConstSharedPtr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__TaskDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    3,   56,    2, 0x08 /* Private */,
       9,    3,   63,    2, 0x08 /* Private */,
      10,    2,   70,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,
      16,    1,   78,    2, 0x08 /* Private */,
      18,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   15,
    QMetaType::Void, 0x80000000 | 19,   15,

       0        // eod
};

void moveit_rviz_plugin::TaskDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changedRobotDescription(); break;
        case 1: _t->changedTaskSolutionTopic(); break;
        case 2: _t->onTasksInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->onTasksRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->onTaskDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->taskDescriptionCB((*reinterpret_cast< const moveit_task_constructor_msgs::msg::TaskDescription::ConstSharedPtr(*)>(_a[1]))); break;
        case 6: _t->taskStatisticsCB((*reinterpret_cast< const moveit_task_constructor_msgs::msg::TaskStatistics::ConstSharedPtr(*)>(_a[1]))); break;
        case 7: _t->taskSolutionCB((*reinterpret_cast< const moveit_task_constructor_msgs::msg::Solution::ConstSharedPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::TaskDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Display::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__TaskDisplay.data,
    qt_meta_data_moveit_rviz_plugin__TaskDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::TaskDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::TaskDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TaskDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Display::qt_metacast(_clname);
}

int moveit_rviz_plugin::TaskDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
