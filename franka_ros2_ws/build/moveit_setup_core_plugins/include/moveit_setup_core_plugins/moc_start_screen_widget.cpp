/****************************************************************************
** Meta object code from reading C++ file 'start_screen_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins/include/moveit_setup_core_plugins/start_screen_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'start_screen_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__core__StartScreenWidget_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__core__StartScreenWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__core__StartScreenWidget_t qt_meta_stringdata_moveit_setup__core__StartScreenWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "moveit_setup::core::StartScre..."
QT_MOC_LITERAL(1, 38, 14), // "showNewOptions"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 19), // "showExistingOptions"
QT_MOC_LITERAL(4, 74, 14), // "loadFilesClick"
QT_MOC_LITERAL(5, 89, 20), // "onPackagePathChanged"
QT_MOC_LITERAL(6, 110, 4), // "path"
QT_MOC_LITERAL(7, 115, 17) // "onUrdfPathChanged"

    },
    "moveit_setup::core::StartScreenWidget\0"
    "showNewOptions\0\0showExistingOptions\0"
    "loadFilesClick\0onPackagePathChanged\0"
    "path\0onUrdfPathChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__core__StartScreenWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void moveit_setup::core::StartScreenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StartScreenWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showNewOptions(); break;
        case 1: _t->showExistingOptions(); break;
        case 2: _t->loadFilesClick(); break;
        case 3: _t->onPackagePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onUrdfPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::core::StartScreenWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SetupStepWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__core__StartScreenWidget.data,
    qt_meta_data_moveit_setup__core__StartScreenWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::core::StartScreenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::core::StartScreenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__core__StartScreenWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupStepWidget::qt_metacast(_clname);
}

int moveit_setup::core::StartScreenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupStepWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_moveit_setup__core__SelectModeWidget_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__core__SelectModeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__core__SelectModeWidget_t qt_meta_stringdata_moveit_setup__core__SelectModeWidget = {
    {
QT_MOC_LITERAL(0, 0, 36) // "moveit_setup::core::SelectMod..."

    },
    "moveit_setup::core::SelectModeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__core__SelectModeWidget[] = {

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

void moveit_setup::core::SelectModeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::core::SelectModeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__core__SelectModeWidget.data,
    qt_meta_data_moveit_setup__core__SelectModeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::core::SelectModeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::core::SelectModeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__core__SelectModeWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int moveit_setup::core::SelectModeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
