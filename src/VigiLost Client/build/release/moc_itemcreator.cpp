/****************************************************************************
** Meta object code from reading C++ file 'itemcreator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemcreator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemcreator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ItemCreator_t {
    QByteArrayData data[15];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemCreator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemCreator_t qt_meta_stringdata_ItemCreator = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ItemCreator"
QT_MOC_LITERAL(1, 12, 24), // "on_actualizarBtn_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "delSearchTXT"
QT_MOC_LITERAL(4, 51, 11), // "loadOnTable"
QT_MOC_LITERAL(5, 63, 6), // "QFile&"
QT_MOC_LITERAL(6, 70, 4), // "file"
QT_MOC_LITERAL(7, 75, 13), // "searchOnTable"
QT_MOC_LITERAL(8, 89, 8), // "delTable"
QT_MOC_LITERAL(9, 98, 11), // "checkRadios"
QT_MOC_LITERAL(10, 110, 25), // "on_dataBuscar_textChanged"
QT_MOC_LITERAL(11, 136, 4), // "arg1"
QT_MOC_LITERAL(12, 141, 37), // "on_actionAcerca_de_VigiLost_t..."
QT_MOC_LITERAL(13, 179, 24), // "on_radioPerdidos_clicked"
QT_MOC_LITERAL(14, 204, 27) // "on_radioEncontrados_clicked"

    },
    "ItemCreator\0on_actualizarBtn_clicked\0"
    "\0delSearchTXT\0loadOnTable\0QFile&\0file\0"
    "searchOnTable\0delTable\0checkRadios\0"
    "on_dataBuscar_textChanged\0arg1\0"
    "on_actionAcerca_de_VigiLost_triggered\0"
    "on_radioPerdidos_clicked\0"
    "on_radioEncontrados_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemCreator[] = {

 // content:
       7,       // revision
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
       4,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ItemCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemCreator *_t = static_cast<ItemCreator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actualizarBtn_clicked(); break;
        case 1: _t->delSearchTXT(); break;
        case 2: _t->loadOnTable((*reinterpret_cast< QFile(*)>(_a[1]))); break;
        case 3: _t->searchOnTable((*reinterpret_cast< QFile(*)>(_a[1]))); break;
        case 4: _t->delTable(); break;
        case 5: _t->checkRadios(); break;
        case 6: _t->on_dataBuscar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_actionAcerca_de_VigiLost_triggered(); break;
        case 8: _t->on_radioPerdidos_clicked(); break;
        case 9: _t->on_radioEncontrados_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ItemCreator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ItemCreator.data,
      qt_meta_data_ItemCreator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ItemCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ItemCreator.stringdata0))
        return static_cast<void*>(const_cast< ItemCreator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ItemCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
