/****************************************************************************
** Meta object code from reading C++ file 'setup_assistant_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/moveit2/moveit_setup_assistant/moveit_setup_assistant/include/moveit_setup_assistant/setup_assistant_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_assistant_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__assistant__SetupAssistantWidget_t {
    QByteArrayData data[10];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__assistant__SetupAssistantWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__assistant__SetupAssistantWidget_t qt_meta_stringdata_moveit_setup__assistant__SetupAssistantWidget = {
    {
QT_MOC_LITERAL(0, 0, 45), // "moveit_setup::assistant::Setu..."
QT_MOC_LITERAL(1, 46, 17), // "navigationClicked"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 77, 5), // "index"
QT_MOC_LITERAL(5, 83, 11), // "updateTimer"
QT_MOC_LITERAL(6, 95, 12), // "onDataUpdate"
QT_MOC_LITERAL(7, 108, 16), // "onAdvanceRequest"
QT_MOC_LITERAL(8, 125, 17), // "onModalModeUpdate"
QT_MOC_LITERAL(9, 143, 7) // "isModal"

    },
    "moveit_setup::assistant::SetupAssistantWidget\0"
    "navigationClicked\0\0QModelIndex\0index\0"
    "updateTimer\0onDataUpdate\0onAdvanceRequest\0"
    "onModalModeUpdate\0isModal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__assistant__SetupAssistantWidget[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void moveit_setup::assistant::SetupAssistantWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetupAssistantWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->navigationClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateTimer(); break;
        case 2: _t->onDataUpdate(); break;
        case 3: _t->onAdvanceRequest(); break;
        case 4: _t->onModalModeUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::assistant::SetupAssistantWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__assistant__SetupAssistantWidget.data,
    qt_meta_data_moveit_setup__assistant__SetupAssistantWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::assistant::SetupAssistantWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::assistant::SetupAssistantWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__assistant__SetupAssistantWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup::assistant::SetupAssistantWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
