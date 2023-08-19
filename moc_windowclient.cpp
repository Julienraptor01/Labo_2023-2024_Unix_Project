/****************************************************************************
** Meta object code from reading C++ file 'windowclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "windowclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowClient_t {
    QByteArrayData data[13];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowClient_t qt_meta_stringdata_WindowClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WindowClient"
QT_MOC_LITERAL(1, 13, 26), // "on_pushButtonLogin_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "on_pushButtonLogout_clicked"
QT_MOC_LITERAL(4, 69, 28), // "on_pushButtonEnvoyer_clicked"
QT_MOC_LITERAL(5, 98, 30), // "on_pushButtonConsulter_clicked"
QT_MOC_LITERAL(6, 129, 29), // "on_pushButtonModifier_clicked"
QT_MOC_LITERAL(7, 159, 20), // "on_checkBox1_clicked"
QT_MOC_LITERAL(8, 180, 7), // "checked"
QT_MOC_LITERAL(9, 188, 20), // "on_checkBox2_clicked"
QT_MOC_LITERAL(10, 209, 20), // "on_checkBox3_clicked"
QT_MOC_LITERAL(11, 230, 20), // "on_checkBox4_clicked"
QT_MOC_LITERAL(12, 251, 20) // "on_checkBox5_clicked"

    },
    "WindowClient\0on_pushButtonLogin_clicked\0"
    "\0on_pushButtonLogout_clicked\0"
    "on_pushButtonEnvoyer_clicked\0"
    "on_pushButtonConsulter_clicked\0"
    "on_pushButtonModifier_clicked\0"
    "on_checkBox1_clicked\0checked\0"
    "on_checkBox2_clicked\0on_checkBox3_clicked\0"
    "on_checkBox4_clicked\0on_checkBox5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void WindowClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonLogin_clicked(); break;
        case 1: _t->on_pushButtonLogout_clicked(); break;
        case 2: _t->on_pushButtonEnvoyer_clicked(); break;
        case 3: _t->on_pushButtonConsulter_clicked(); break;
        case 4: _t->on_pushButtonModifier_clicked(); break;
        case 5: _t->on_checkBox1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_checkBox2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_checkBox3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBox4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_checkBox5_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WindowClient::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_WindowClient.data,
    qt_meta_data_WindowClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowClient.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WindowClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
