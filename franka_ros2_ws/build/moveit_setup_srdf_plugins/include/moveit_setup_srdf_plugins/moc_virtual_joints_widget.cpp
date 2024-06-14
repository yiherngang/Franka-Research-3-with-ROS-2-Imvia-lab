/****************************************************************************
** Meta object code from reading C++ file 'virtual_joints_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/include/moveit_setup_srdf_plugins/virtual_joints_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtual_joints_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__srdf_setup__VirtualJointsWidget_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__srdf_setup__VirtualJointsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__srdf_setup__VirtualJointsWidget_t qt_meta_stringdata_moveit_setup__srdf_setup__VirtualJointsWidget = {
    {
QT_MOC_LITERAL(0, 0, 45), // "moveit_setup::srdf_setup::Vir..."
QT_MOC_LITERAL(1, 46, 13), // "showNewScreen"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 12), // "editSelected"
QT_MOC_LITERAL(4, 74, 17), // "editDoubleClicked"
QT_MOC_LITERAL(5, 92, 3), // "row"
QT_MOC_LITERAL(6, 96, 6), // "column"
QT_MOC_LITERAL(7, 103, 14), // "previewClicked"
QT_MOC_LITERAL(8, 118, 14), // "deleteSelected"
QT_MOC_LITERAL(9, 133, 11), // "doneEditing"
QT_MOC_LITERAL(10, 145, 13) // "cancelEditing"

    },
    "moveit_setup::srdf_setup::VirtualJointsWidget\0"
    "showNewScreen\0\0editSelected\0"
    "editDoubleClicked\0row\0column\0"
    "previewClicked\0deleteSelected\0doneEditing\0"
    "cancelEditing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__srdf_setup__VirtualJointsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    2,   51,    2, 0x08 /* Private */,
       7,    2,   56,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_setup::srdf_setup::VirtualJointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualJointsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showNewScreen(); break;
        case 1: _t->editSelected(); break;
        case 2: _t->editDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->deleteSelected(); break;
        case 5: _t->doneEditing(); break;
        case 6: _t->cancelEditing(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::srdf_setup::VirtualJointsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SetupStepWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__srdf_setup__VirtualJointsWidget.data,
    qt_meta_data_moveit_setup__srdf_setup__VirtualJointsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::srdf_setup::VirtualJointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::srdf_setup::VirtualJointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__srdf_setup__VirtualJointsWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupStepWidget::qt_metacast(_clname);
}

int moveit_setup::srdf_setup::VirtualJointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupStepWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
