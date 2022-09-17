/****************************************************************************
** Meta object code from reading C++ file 'objfoundform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../objfoundform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objfoundform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ObjFoundForm_t {
    QByteArrayData data[17];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjFoundForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjFoundForm_t qt_meta_stringdata_ObjFoundForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ObjFoundForm"
QT_MOC_LITERAL(1, 13, 24), // "on_actualizarBtn_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "delSearchTXT"
QT_MOC_LITERAL(4, 52, 12), // "errorProcess"
QT_MOC_LITERAL(5, 65, 9), // "saveTable"
QT_MOC_LITERAL(6, 75, 6), // "QFile&"
QT_MOC_LITERAL(7, 82, 4), // "file"
QT_MOC_LITERAL(8, 87, 11), // "loadOnTable"
QT_MOC_LITERAL(9, 99, 13), // "searchOnTable"
QT_MOC_LITERAL(10, 113, 8), // "delTable"
QT_MOC_LITERAL(11, 122, 8), // "openLost"
QT_MOC_LITERAL(12, 131, 20), // "on_buscarBtn_clicked"
QT_MOC_LITERAL(13, 152, 25), // "on_dataBuscar_textChanged"
QT_MOC_LITERAL(14, 178, 4), // "arg1"
QT_MOC_LITERAL(15, 183, 19), // "on_errorBtn_clicked"
QT_MOC_LITERAL(16, 203, 18) // "on_lostBtn_clicked"

    },
    "ObjFoundForm\0on_actualizarBtn_clicked\0"
    "\0delSearchTXT\0errorProcess\0saveTable\0"
    "QFile&\0file\0loadOnTable\0searchOnTable\0"
    "delTable\0openLost\0on_buscarBtn_clicked\0"
    "on_dataBuscar_textChanged\0arg1\0"
    "on_errorBtn_clicked\0on_lostBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjFoundForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ObjFoundForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjFoundForm *_t = static_cast<ObjFoundForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actualizarBtn_clicked(); break;
        case 1: _t->delSearchTXT(); break;
        case 2: _t->errorProcess(); break;
        case 3: _t->saveTable((*reinterpret_cast< QFile(*)>(_a[1]))); break;
        case 4: _t->loadOnTable((*reinterpret_cast< QFile(*)>(_a[1]))); break;
        case 5: _t->searchOnTable((*reinterpret_cast< QFile(*)>(_a[1]))); break;
        case 6: _t->delTable(); break;
        case 7: _t->openLost(); break;
        case 8: _t->on_buscarBtn_clicked(); break;
        case 9: _t->on_dataBuscar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_errorBtn_clicked(); break;
        case 11: _t->on_lostBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ObjFoundForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ObjFoundForm.data,
      qt_meta_data_ObjFoundForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ObjFoundForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjFoundForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ObjFoundForm.stringdata0))
        return static_cast<void*>(const_cast< ObjFoundForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ObjFoundForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
