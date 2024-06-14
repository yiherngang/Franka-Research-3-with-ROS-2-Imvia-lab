/****************************************************************************
** Meta object code from reading C++ file 'configuration_files_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins/include/moveit_setup_core_plugins/configuration_files_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuration_files_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__core__ConfigurationFilesWidget_t {
    QByteArrayData data[14];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__core__ConfigurationFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__core__ConfigurationFilesWidget_t qt_meta_stringdata_moveit_setup__core__ConfigurationFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 44), // "moveit_setup::core::Configura..."
QT_MOC_LITERAL(1, 45, 11), // "savePackage"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 15), // "generatePackage"
QT_MOC_LITERAL(4, 74, 18), // "exitSetupAssistant"
QT_MOC_LITERAL(5, 93, 16), // "changeActionDesc"
QT_MOC_LITERAL(6, 110, 2), // "id"
QT_MOC_LITERAL(7, 113, 18), // "changeCheckedState"
QT_MOC_LITERAL(8, 132, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 149, 4), // "item"
QT_MOC_LITERAL(10, 154, 16), // "setCheckSelected"
QT_MOC_LITERAL(11, 171, 7), // "checked"
QT_MOC_LITERAL(12, 179, 20), // "onPackagePathChanged"
QT_MOC_LITERAL(13, 200, 4) // "path"

    },
    "moveit_setup::core::ConfigurationFilesWidget\0"
    "savePackage\0\0generatePackage\0"
    "exitSetupAssistant\0changeActionDesc\0"
    "id\0changeCheckedState\0QListWidgetItem*\0"
    "item\0setCheckSelected\0checked\0"
    "onPackagePathChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__core__ConfigurationFilesWidget[] = {

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
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,
      12,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void moveit_setup::core::ConfigurationFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigurationFilesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->savePackage(); break;
        case 1: { bool _r = _t->generatePackage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->exitSetupAssistant(); break;
        case 3: _t->changeActionDesc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeCheckedState((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->setCheckSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onPackagePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::core::ConfigurationFilesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SetupStepWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__core__ConfigurationFilesWidget.data,
    qt_meta_data_moveit_setup__core__ConfigurationFilesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::core::ConfigurationFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::core::ConfigurationFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__core__ConfigurationFilesWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupStepWidget::qt_metacast(_clname);
}

int moveit_setup::core::ConfigurationFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
