/****************************************************************************
** Meta object code from reading C++ file 'rviz_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/moveit2/moveit_setup_assistant/moveit_setup_framework/include/moveit_setup_framework/qt/rviz_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rviz_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup__RVizPanel_t {
    QByteArrayData data[15];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup__RVizPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup__RVizPanel_t qt_meta_stringdata_moveit_setup__RVizPanel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "moveit_setup::RVizPanel"
QT_MOC_LITERAL(1, 24, 19), // "highlightLinkSignal"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "std::string"
QT_MOC_LITERAL(4, 57, 9), // "link_name"
QT_MOC_LITERAL(5, 67, 5), // "color"
QT_MOC_LITERAL(6, 73, 20), // "highlightGroupSignal"
QT_MOC_LITERAL(7, 94, 10), // "group_name"
QT_MOC_LITERAL(8, 105, 20), // "unhighlightAllSignal"
QT_MOC_LITERAL(9, 126, 13), // "highlightLink"
QT_MOC_LITERAL(10, 140, 14), // "highlightGroup"
QT_MOC_LITERAL(11, 155, 14), // "unhighlightAll"
QT_MOC_LITERAL(12, 170, 18), // "highlightLinkEvent"
QT_MOC_LITERAL(13, 189, 19), // "highlightGroupEvent"
QT_MOC_LITERAL(14, 209, 19) // "unhighlightAllEvent"

    },
    "moveit_setup::RVizPanel\0highlightLinkSignal\0"
    "\0std::string\0link_name\0color\0"
    "highlightGroupSignal\0group_name\0"
    "unhighlightAllSignal\0highlightLink\0"
    "highlightGroup\0unhighlightAll\0"
    "highlightLinkEvent\0highlightGroupEvent\0"
    "unhighlightAllEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup__RVizPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,
       8,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   68,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x0a /* Public */,
      12,    2,   77,    2, 0x09 /* Protected */,
      13,    1,   82,    2, 0x09 /* Protected */,
      14,    0,   85,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void,

       0        // eod
};

void moveit_setup::RVizPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RVizPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->highlightLinkSignal((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 1: _t->highlightGroupSignal((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->unhighlightAllSignal(); break;
        case 3: _t->highlightLink((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 4: _t->highlightGroup((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 5: _t->unhighlightAll(); break;
        case 6: _t->highlightLinkEvent((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 7: _t->highlightGroupEvent((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 8: _t->unhighlightAllEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RVizPanel::*)(const std::string & , const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RVizPanel::highlightLinkSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RVizPanel::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RVizPanel::highlightGroupSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RVizPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RVizPanel::unhighlightAllSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup::RVizPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_moveit_setup__RVizPanel.data,
    qt_meta_data_moveit_setup__RVizPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup::RVizPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup::RVizPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup__RVizPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "rviz_common::WindowManagerInterface"))
        return static_cast< rviz_common::WindowManagerInterface*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup::RVizPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup::RVizPanel::highlightLinkSignal(const std::string & _t1, const QColor & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void moveit_setup::RVizPanel::highlightGroupSignal(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void moveit_setup::RVizPanel::unhighlightAllSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
