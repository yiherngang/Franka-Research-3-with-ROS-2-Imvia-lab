/****************************************************************************
** Meta object code from reading C++ file 'task_solution_visualization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/moveit_task_constructor/visualization/visualization_tools/include/moveit/visualization_tools/task_solution_visualization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task_solution_visualization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__TaskSolutionVisualization_t {
    QByteArrayData data[19];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__TaskSolutionVisualization_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__TaskSolutionVisualization_t qt_meta_stringdata_moveit_rviz_plugin__TaskSolutionVisualization = {
    {
QT_MOC_LITERAL(0, 0, 45), // "moveit_rviz_plugin::TaskSolut..."
QT_MOC_LITERAL(1, 46, 18), // "activeStageChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 6), // "size_t"
QT_MOC_LITERAL(4, 73, 23), // "interruptCurrentDisplay"
QT_MOC_LITERAL(5, 97, 18), // "onAllAtOnceChanged"
QT_MOC_LITERAL(6, 116, 11), // "all_at_once"
QT_MOC_LITERAL(7, 128, 25), // "changedRobotVisualEnabled"
QT_MOC_LITERAL(8, 154, 28), // "changedRobotCollisionEnabled"
QT_MOC_LITERAL(9, 183, 17), // "changedRobotAlpha"
QT_MOC_LITERAL(10, 201, 18), // "changedLoopDisplay"
QT_MOC_LITERAL(11, 220, 12), // "changedTrail"
QT_MOC_LITERAL(12, 233, 17), // "changedRobotColor"
QT_MOC_LITERAL(13, 251, 17), // "enabledRobotColor"
QT_MOC_LITERAL(14, 269, 24), // "changedAttachedBodyColor"
QT_MOC_LITERAL(15, 294, 27), // "sliderPanelVisibilityChange"
QT_MOC_LITERAL(16, 322, 6), // "enable"
QT_MOC_LITERAL(17, 329, 19), // "changedSceneEnabled"
QT_MOC_LITERAL(18, 349, 18) // "renderCurrentScene"

    },
    "moveit_rviz_plugin::TaskSolutionVisualization\0"
    "activeStageChanged\0\0size_t\0"
    "interruptCurrentDisplay\0onAllAtOnceChanged\0"
    "all_at_once\0changedRobotVisualEnabled\0"
    "changedRobotCollisionEnabled\0"
    "changedRobotAlpha\0changedLoopDisplay\0"
    "changedTrail\0changedRobotColor\0"
    "enabledRobotColor\0changedAttachedBodyColor\0"
    "sliderPanelVisibilityChange\0enable\0"
    "changedSceneEnabled\0renderCurrentScene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__TaskSolutionVisualization[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x0a /* Public */,
       5,    1,   88,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_rviz_plugin::TaskSolutionVisualization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskSolutionVisualization *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeStageChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->interruptCurrentDisplay(); break;
        case 2: _t->onAllAtOnceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->changedRobotVisualEnabled(); break;
        case 4: _t->changedRobotCollisionEnabled(); break;
        case 5: _t->changedRobotAlpha(); break;
        case 6: _t->changedLoopDisplay(); break;
        case 7: _t->changedTrail(); break;
        case 8: _t->changedRobotColor(); break;
        case 9: _t->enabledRobotColor(); break;
        case 10: _t->changedAttachedBodyColor(); break;
        case 11: _t->sliderPanelVisibilityChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->changedSceneEnabled(); break;
        case 13: _t->renderCurrentScene(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskSolutionVisualization::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskSolutionVisualization::activeStageChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::TaskSolutionVisualization::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__TaskSolutionVisualization.data,
    qt_meta_data_moveit_rviz_plugin__TaskSolutionVisualization,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::TaskSolutionVisualization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::TaskSolutionVisualization::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TaskSolutionVisualization.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int moveit_rviz_plugin::TaskSolutionVisualization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void moveit_rviz_plugin::TaskSolutionVisualization::activeStageChanged(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
