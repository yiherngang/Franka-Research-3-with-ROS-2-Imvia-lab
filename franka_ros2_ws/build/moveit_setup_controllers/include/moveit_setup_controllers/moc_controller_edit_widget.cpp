/****************************************************************************
** Meta object code from reading C++ file 'controller_edit_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/moveit2/moveit_setup_assistant/moveit_setup_controllers/include/moveit_setup_controllers/controller_edit_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller_edit_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__controllers__ControllerEditWidget_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__controllers__ControllerEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__controllers__ControllerEditWidget_t qt_meta_stringdata_moveit_setup__controllers__ControllerEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "moveit_setup::controllers::Co..."
QT_MOC_LITERAL(1, 48, 10), // "saveJoints"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 16), // "saveJointsGroups"
QT_MOC_LITERAL(4, 77, 4), // "save"
QT_MOC_LITERAL(5, 82, 13), // "cancelEditing"
QT_MOC_LITERAL(6, 96, 16), // "deleteController"
QT_MOC_LITERAL(7, 113, 11), // "typeChanged"
QT_MOC_LITERAL(8, 125, 5) // "index"

    },
    "moveit_setup::controllers::ControllerEditWidget\0"
    "saveJoints\0\0saveJointsGroups\0save\0"
    "cancelEditing\0deleteController\0"
    "typeChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__controllers__ControllerEditWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void moveit_setup::controllers::ControllerEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerEditWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveJoints(); break;
        case 1: _t->saveJointsGroups(); break;
        case 2: _t->save(); break;
        case 3: _t->cancelEditing(); break;
        case 4: _t->deleteController(); break;
        case 5: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::saveJoints)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::saveJointsGroups)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::save)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::cancelEditing)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::deleteController)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::controllers::ControllerEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__controllers__ControllerEditWidget.data,
    qt_meta_data_moveit_setup__controllers__ControllerEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::controllers::ControllerEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::controllers::ControllerEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__controllers__ControllerEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup::controllers::ControllerEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup::controllers::ControllerEditWidget::saveJoints()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void moveit_setup::controllers::ControllerEditWidget::saveJointsGroups()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void moveit_setup::controllers::ControllerEditWidget::save()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void moveit_setup::controllers::ControllerEditWidget::cancelEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void moveit_setup::controllers::ControllerEditWidget::deleteController()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
