/****************************************************************************
** Meta object code from reading C++ file 'hotkeypanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../A7/include/hotkeypanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotkeypanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HotkeyPanel_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HotkeyPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HotkeyPanel_t qt_meta_stringdata_HotkeyPanel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HotkeyPanel"
QT_MOC_LITERAL(1, 12, 13), // "hotkeyClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "applyHotkey"
QT_MOC_LITERAL(4, 39, 5), // "Tool*"
QT_MOC_LITERAL(5, 45, 9), // "setHotkey"
QT_MOC_LITERAL(6, 55, 12) // "hotkeyNumber"

    },
    "HotkeyPanel\0hotkeyClicked\0\0applyHotkey\0"
    "Tool*\0setHotkey\0hotkeyNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HotkeyPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   40,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void HotkeyPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HotkeyPanel *_t = static_cast<HotkeyPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hotkeyClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->applyHotkey((*reinterpret_cast< Tool*(*)>(_a[1]))); break;
        case 2: _t->setHotkey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Tool*(*)>(_a[2]))); break;
        case 3: _t->hotkeyNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Tool* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Tool* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HotkeyPanel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HotkeyPanel::hotkeyClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (HotkeyPanel::*_t)(Tool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HotkeyPanel::applyHotkey)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject HotkeyPanel::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_HotkeyPanel.data,
      qt_meta_data_HotkeyPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HotkeyPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HotkeyPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HotkeyPanel.stringdata0))
        return static_cast<void*>(const_cast< HotkeyPanel*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int HotkeyPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void HotkeyPanel::hotkeyClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HotkeyPanel::applyHotkey(Tool * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
