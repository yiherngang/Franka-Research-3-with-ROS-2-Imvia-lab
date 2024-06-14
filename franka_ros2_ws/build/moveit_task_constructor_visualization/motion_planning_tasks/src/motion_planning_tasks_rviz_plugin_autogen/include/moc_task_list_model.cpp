/****************************************************************************
** Meta object code from reading C++ file 'task_list_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/moveit_task_constructor/visualization/motion_planning_tasks/src/task_list_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task_list_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__BaseTaskModel_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__BaseTaskModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__BaseTaskModel_t qt_meta_stringdata_moveit_rviz_plugin__BaseTaskModel = {
    {
QT_MOC_LITERAL(0, 0, 33) // "moveit_rviz_plugin::BaseTaskM..."

    },
    "moveit_rviz_plugin::BaseTaskModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__BaseTaskModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void moveit_rviz_plugin::BaseTaskModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::BaseTaskModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__BaseTaskModel.data,
    qt_meta_data_moveit_rviz_plugin__BaseTaskModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::BaseTaskModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::BaseTaskModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__BaseTaskModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int moveit_rviz_plugin::BaseTaskModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_moveit_rviz_plugin__TaskListModel_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__TaskListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__TaskListModel_t qt_meta_stringdata_moveit_rviz_plugin__TaskListModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "moveit_rviz_plugin::TaskListM..."
QT_MOC_LITERAL(1, 34, 18), // "setOldTaskHandling"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "mode"
QT_MOC_LITERAL(4, 59, 14), // "highlightStage"
QT_MOC_LITERAL(5, 74, 6), // "size_t"
QT_MOC_LITERAL(6, 81, 2) // "id"

    },
    "moveit_rviz_plugin::TaskListModel\0"
    "setOldTaskHandling\0\0mode\0highlightStage\0"
    "size_t\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__TaskListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void moveit_rviz_plugin::TaskListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setOldTaskHandling((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->highlightStage((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::TaskListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<utils::FlatMergeProxyModel::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__TaskListModel.data,
    qt_meta_data_moveit_rviz_plugin__TaskListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::TaskListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::TaskListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TaskListModel.stringdata0))
        return static_cast<void*>(this);
    return utils::FlatMergeProxyModel::qt_metacast(_clname);
}

int moveit_rviz_plugin::TaskListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = utils::FlatMergeProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_moveit_rviz_plugin__TaskListView_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__TaskListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__TaskListView_t qt_meta_stringdata_moveit_rviz_plugin__TaskListView = {
    {
QT_MOC_LITERAL(0, 0, 32) // "moveit_rviz_plugin::TaskListView"

    },
    "moveit_rviz_plugin::TaskListView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__TaskListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void moveit_rviz_plugin::TaskListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::TaskListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__TaskListView.data,
    qt_meta_data_moveit_rviz_plugin__TaskListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::TaskListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::TaskListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TaskListView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int moveit_rviz_plugin::TaskListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_moveit_rviz_plugin__SolutionListView_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__SolutionListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__SolutionListView_t qt_meta_stringdata_moveit_rviz_plugin__SolutionListView = {
    {
QT_MOC_LITERAL(0, 0, 36) // "moveit_rviz_plugin::SolutionL..."

    },
    "moveit_rviz_plugin::SolutionListView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__SolutionListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void moveit_rviz_plugin::SolutionListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::SolutionListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__SolutionListView.data,
    qt_meta_data_moveit_rviz_plugin__SolutionListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::SolutionListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::SolutionListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__SolutionListView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int moveit_rviz_plugin::SolutionListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
