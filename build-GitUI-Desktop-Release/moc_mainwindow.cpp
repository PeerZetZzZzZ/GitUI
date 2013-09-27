/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GitUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 5),
QT_MOC_LITERAL(4, 27, 18),
QT_MOC_LITERAL(5, 46, 18),
QT_MOC_LITERAL(6, 65, 16),
QT_MOC_LITERAL(7, 82, 9),
QT_MOC_LITERAL(8, 92, 6),
QT_MOC_LITERAL(9, 99, 6),
QT_MOC_LITERAL(10, 106, 5),
QT_MOC_LITERAL(11, 112, 5),
QT_MOC_LITERAL(12, 118, 4),
QT_MOC_LITERAL(13, 123, 12),
QT_MOC_LITERAL(14, 136, 10),
QT_MOC_LITERAL(15, 147, 12),
QT_MOC_LITERAL(16, 160, 6),
QT_MOC_LITERAL(17, 167, 6),
QT_MOC_LITERAL(18, 174, 3),
QT_MOC_LITERAL(19, 178, 12),
QT_MOC_LITERAL(20, 191, 21),
QT_MOC_LITERAL(21, 213, 22),
QT_MOC_LITERAL(22, 236, 5)
    },
    "MainWindow\0wyswietl\0\0tekst\0"
    "otworzRepozytorium\0stworzRepozytorium\0"
    "usunRepozytorium\0dodajPlik\0branch\0"
    "remote\0fetch\0clone\0push\0userSettings\0"
    "helpIndeks\0aboutProgram\0commit\0status\0"
    "log\0zczytajZwrot\0sprawdzCzyIstniejeGit\0"
    "weryfikujIstnienieGita\0zwrot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a,
       4,    0,  112,    2, 0x08,
       5,    0,  113,    2, 0x08,
       6,    0,  114,    2, 0x08,
       7,    0,  115,    2, 0x08,
       8,    0,  116,    2, 0x08,
       9,    0,  117,    2, 0x08,
      10,    0,  118,    2, 0x08,
      11,    0,  119,    2, 0x08,
      12,    0,  120,    2, 0x08,
      13,    0,  121,    2, 0x08,
      14,    0,  122,    2, 0x08,
      15,    0,  123,    2, 0x08,
      16,    0,  124,    2, 0x08,
      17,    0,  125,    2, 0x08,
      18,    0,  126,    2, 0x08,
      19,    0,  127,    2, 0x08,
      20,    0,  128,    2, 0x08,
      21,    1,  129,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->wyswietl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->otworzRepozytorium(); break;
        case 2: _t->stworzRepozytorium(); break;
        case 3: _t->usunRepozytorium(); break;
        case 4: _t->dodajPlik(); break;
        case 5: _t->branch(); break;
        case 6: _t->remote(); break;
        case 7: _t->fetch(); break;
        case 8: _t->clone(); break;
        case 9: _t->push(); break;
        case 10: _t->userSettings(); break;
        case 11: _t->helpIndeks(); break;
        case 12: _t->aboutProgram(); break;
        case 13: _t->commit(); break;
        case 14: _t->status(); break;
        case 15: _t->log(); break;
        case 16: _t->zczytajZwrot(); break;
        case 17: _t->sprawdzCzyIstniejeGit(); break;
        case 18: _t->weryfikujIstnienieGita((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "git"))
        return static_cast< git*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
