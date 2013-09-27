/****************************************************************************
** Meta object code from reading C++ file 'repository.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GitUI/repository.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repository.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Repository_t {
    QByteArrayData data[9];
    char stringdata[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Repository_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Repository_t qt_meta_stringdata_Repository = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 6),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 6),
QT_MOC_LITERAL(4, 26, 4),
QT_MOC_LITERAL(5, 31, 10),
QT_MOC_LITERAL(6, 42, 12),
QT_MOC_LITERAL(7, 55, 13),
QT_MOC_LITERAL(8, 69, 6)
    },
    "Repository\0otworz\0\0stworz\0usun\0"
    "usunFolder\0zczytajZwrot\0wyswietlZwrot\0"
    "zwroty\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Repository[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08,
       3,    0,   45,    2, 0x08,
       4,    0,   46,    2, 0x08,
       5,    0,   47,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    1,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void Repository::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Repository *_t = static_cast<Repository *>(_o);
        switch (_id) {
        case 0: _t->otworz(); break;
        case 1: _t->stworz(); break;
        case 2: _t->usun(); break;
        case 3: _t->usunFolder(); break;
        case 4: _t->zczytajZwrot(); break;
        case 5: _t->wyswietlZwrot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Repository::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Repository.data,
      qt_meta_data_Repository,  qt_static_metacall, 0, 0}
};


const QMetaObject *Repository::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Repository::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Repository.stringdata))
        return static_cast<void*>(const_cast< Repository*>(this));
    if (!strcmp(_clname, "git"))
        return static_cast< git*>(const_cast< Repository*>(this));
    return QDialog::qt_metacast(_clname);
}

int Repository::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
