/****************************************************************************
** Meta object code from reading C++ file 'remote_task_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/moveit_task_constructor/visualization/motion_planning_tasks/src/remote_task_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remote_task_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__RemoteTaskModel_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__RemoteTaskModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__RemoteTaskModel_t qt_meta_stringdata_moveit_rviz_plugin__RemoteTaskModel = {
    {
QT_MOC_LITERAL(0, 0, 35) // "moveit_rviz_plugin::RemoteTas..."

    },
    "moveit_rviz_plugin::RemoteTaskModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__RemoteTaskModel[] = {

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

void moveit_rviz_plugin::RemoteTaskModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::RemoteTaskModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseTaskModel::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__RemoteTaskModel.data,
    qt_meta_data_moveit_rviz_plugin__RemoteTaskModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::RemoteTaskModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::RemoteTaskModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__RemoteTaskModel.stringdata0))
        return static_cast<void*>(this);
    return BaseTaskModel::qt_metacast(_clname);
}

int moveit_rviz_plugin::RemoteTaskModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTaskModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_moveit_rviz_plugin__RemoteSolutionModel_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__RemoteSolutionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__RemoteSolutionModel_t qt_meta_stringdata_moveit_rviz_plugin__RemoteSolutionModel = {
    {
QT_MOC_LITERAL(0, 0, 39) // "moveit_rviz_plugin::RemoteSol..."

    },
    "moveit_rviz_plugin::RemoteSolutionModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__RemoteSolutionModel[] = {

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

void moveit_rviz_plugin::RemoteSolutionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::RemoteSolutionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_moveit_rviz_plugin__RemoteSolutionModel.data,
    qt_meta_data_moveit_rviz_plugin__RemoteSolutionModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::RemoteSolutionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::RemoteSolutionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__RemoteSolutionModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int moveit_rviz_plugin::RemoteSolutionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
