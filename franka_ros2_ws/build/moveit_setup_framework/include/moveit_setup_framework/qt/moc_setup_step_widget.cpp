/****************************************************************************
** Meta object code from reading C++ file 'setup_step_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/moveit2/moveit_setup_assistant/moveit_setup_framework/include/moveit_setup_framework/qt/setup_step_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_step_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__SetupStepWidget_t {
    QByteArrayData data[6];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__SetupStepWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__SetupStepWidget_t qt_meta_stringdata_moveit_setup__SetupStepWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "moveit_setup::SetupStepWidget"
QT_MOC_LITERAL(1, 30, 11), // "dataUpdated"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "advanceRequest"
QT_MOC_LITERAL(4, 58, 12), // "setModalMode"
QT_MOC_LITERAL(5, 71, 7) // "isModal"

    },
    "moveit_setup::SetupStepWidget\0dataUpdated\0"
    "\0advanceRequest\0setModalMode\0isModal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__SetupStepWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void moveit_setup::SetupStepWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetupStepWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->advanceRequest(); break;
        case 2: _t->setModalMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetupStepWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetupStepWidget::dataUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SetupStepWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetupStepWidget::advanceRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SetupStepWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetupStepWidget::setModalMode)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::SetupStepWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__SetupStepWidget.data,
    qt_meta_data_moveit_setup__SetupStepWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::SetupStepWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::SetupStepWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__SetupStepWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup::SetupStepWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup::SetupStepWidget::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void moveit_setup::SetupStepWidget::advanceRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void moveit_setup::SetupStepWidget::setModalMode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
