/****************************************************************************
** Meta object code from reading C++ file 'collision_linear_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/include/moveit_setup_srdf_plugins/collision_linear_model.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collision_linear_model.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__srdf_setup__CollisionLinearModel_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__srdf_setup__CollisionLinearModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__srdf_setup__CollisionLinearModel_t qt_meta_stringdata_moveit_setup__srdf_setup__CollisionLinearModel = {
    {
QT_MOC_LITERAL(0, 0, 46) // "moveit_setup::srdf_setup::Col..."

    },
    "moveit_setup::srdf_setup::CollisionLinearModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__srdf_setup__CollisionLinearModel[] = {

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

void moveit_setup::srdf_setup::CollisionLinearModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::srdf_setup::CollisionLinearModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractProxyModel::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__srdf_setup__CollisionLinearModel.data,
    qt_meta_data_moveit_setup__srdf_setup__CollisionLinearModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::srdf_setup::CollisionLinearModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::srdf_setup::CollisionLinearModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__srdf_setup__CollisionLinearModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int moveit_setup::srdf_setup::CollisionLinearModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_moveit_setup__srdf_setup__SortFilterProxyModel_t {
    QByteArrayData data[3];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__srdf_setup__SortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__srdf_setup__SortFilterProxyModel_t qt_meta_stringdata_moveit_setup__srdf_setup__SortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 46), // "moveit_setup::srdf_setup::Sor..."
QT_MOC_LITERAL(1, 47, 11), // "initSorting"
QT_MOC_LITERAL(2, 59, 0) // ""

    },
    "moveit_setup::srdf_setup::SortFilterProxyModel\0"
    "initSorting\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__srdf_setup__SortFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void moveit_setup::srdf_setup::SortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortFilterProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initSorting(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::srdf_setup::SortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__srdf_setup__SortFilterProxyModel.data,
    qt_meta_data_moveit_setup__srdf_setup__SortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::srdf_setup::SortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::srdf_setup::SortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__srdf_setup__SortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int moveit_setup::srdf_setup::SortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
