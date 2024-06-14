/****************************************************************************
** Meta object code from reading C++ file 'interactive_marker_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/moveit2/moveit_ros/visualization/motion_planning_rviz_plugin/include/moveit/motion_planning_rviz_plugin/interactive_marker_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactive_marker_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_default_plugins__displays__InteractiveMarkerDisplay_t {
    QByteArrayData data[16];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_default_plugins__displays__InteractiveMarkerDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_default_plugins__displays__InteractiveMarkerDisplay_t qt_meta_stringdata_rviz_default_plugins__displays__InteractiveMarkerDisplay = {
    {
QT_MOC_LITERAL(0, 0, 56), // "rviz_default_plugins::display..."
QT_MOC_LITERAL(1, 57, 16), // "namespaceChanged"
QT_MOC_LITERAL(2, 74, 0), // ""
QT_MOC_LITERAL(3, 75, 22), // "updateShowDescriptions"
QT_MOC_LITERAL(4, 98, 14), // "updateShowAxes"
QT_MOC_LITERAL(5, 113, 20), // "updateShowVisualAids"
QT_MOC_LITERAL(6, 134, 24), // "updateEnableTransparency"
QT_MOC_LITERAL(7, 159, 15), // "publishFeedback"
QT_MOC_LITERAL(8, 175, 51), // "visualization_msgs::msg::Inte..."
QT_MOC_LITERAL(9, 227, 8), // "feedback"
QT_MOC_LITERAL(10, 236, 14), // "onStatusUpdate"
QT_MOC_LITERAL(11, 251, 46), // "rviz_common::properties::Stat..."
QT_MOC_LITERAL(12, 298, 5), // "level"
QT_MOC_LITERAL(13, 304, 11), // "std::string"
QT_MOC_LITERAL(14, 316, 4), // "name"
QT_MOC_LITERAL(15, 321, 4) // "text"

    },
    "rviz_default_plugins::displays::InteractiveMarkerDisplay\0"
    "namespaceChanged\0\0updateShowDescriptions\0"
    "updateShowAxes\0updateShowVisualAids\0"
    "updateEnableTransparency\0publishFeedback\0"
    "visualization_msgs::msg::InteractiveMarkerFeedback&\0"
    "feedback\0onStatusUpdate\0"
    "rviz_common::properties::StatusProperty::Level\0"
    "level\0std::string\0name\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_default_plugins__displays__InteractiveMarkerDisplay[] = {

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
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    1,   54,    2, 0x09 /* Protected */,
      10,    3,   57,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 13,   12,   14,   15,

       0        // eod
};

void rviz_default_plugins::displays::InteractiveMarkerDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveMarkerDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->namespaceChanged(); break;
        case 1: _t->updateShowDescriptions(); break;
        case 2: _t->updateShowAxes(); break;
        case 3: _t->updateShowVisualAids(); break;
        case 4: _t->updateEnableTransparency(); break;
        case 5: _t->publishFeedback((*reinterpret_cast< visualization_msgs::msg::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 6: _t->onStatusUpdate((*reinterpret_cast< rviz_common::properties::StatusProperty::Level(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_default_plugins::displays::InteractiveMarkerDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Display::staticMetaObject>(),
    qt_meta_stringdata_rviz_default_plugins__displays__InteractiveMarkerDisplay.data,
    qt_meta_data_rviz_default_plugins__displays__InteractiveMarkerDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_default_plugins::displays::InteractiveMarkerDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_default_plugins::displays::InteractiveMarkerDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_default_plugins__displays__InteractiveMarkerDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Display::qt_metacast(_clname);
}

int rviz_default_plugins::displays::InteractiveMarkerDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Display::qt_metacall(_c, _id, _a);
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
