/****************************************************************************
** Meta object code from reading C++ file 'passive_joints_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/include/moveit_setup_srdf_plugins/passive_joints_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'passive_joints_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__srdf_setup__PassiveJointsWidget_t {
    QByteArrayData data[6];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__srdf_setup__PassiveJointsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__srdf_setup__PassiveJointsWidget_t qt_meta_stringdata_moveit_setup__srdf_setup__PassiveJointsWidget = {
    {
QT_MOC_LITERAL(0, 0, 45), // "moveit_setup::srdf_setup::Pas..."
QT_MOC_LITERAL(1, 46, 16), // "selectionUpdated"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 21), // "previewSelectedJoints"
QT_MOC_LITERAL(4, 86, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(5, 111, 6) // "joints"

    },
    "moveit_setup::srdf_setup::PassiveJointsWidget\0"
    "selectionUpdated\0\0previewSelectedJoints\0"
    "std::vector<std::string>\0joints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__srdf_setup__PassiveJointsWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void moveit_setup::srdf_setup::PassiveJointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PassiveJointsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionUpdated(); break;
        case 1: _t->previewSelectedJoints((*reinterpret_cast< const std::vector<std::string>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::srdf_setup::PassiveJointsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SetupStepWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__srdf_setup__PassiveJointsWidget.data,
    qt_meta_data_moveit_setup__srdf_setup__PassiveJointsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::srdf_setup::PassiveJointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::srdf_setup::PassiveJointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__srdf_setup__PassiveJointsWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupStepWidget::qt_metacast(_clname);
}

int moveit_setup::srdf_setup::PassiveJointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupStepWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
