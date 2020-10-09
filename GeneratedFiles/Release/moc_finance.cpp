/****************************************************************************
** Meta object code from reading C++ file 'finance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../finance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_finance_t {
    QByteArrayData data[14];
    char stringdata[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_finance_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_finance_t qt_meta_stringdata_finance = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 6),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 6),
QT_MOC_LITERAL(4, 23, 20),
QT_MOC_LITERAL(5, 44, 13),
QT_MOC_LITERAL(6, 58, 20),
QT_MOC_LITERAL(7, 79, 18),
QT_MOC_LITERAL(8, 98, 16),
QT_MOC_LITERAL(9, 115, 19),
QT_MOC_LITERAL(10, 135, 17),
QT_MOC_LITERAL(11, 153, 20),
QT_MOC_LITERAL(12, 174, 21),
QT_MOC_LITERAL(13, 196, 19)
    },
    "finance\0goHome\0\0logout\0showAddSponsorsGroup\0"
    "AddNewSponsor\0CancelButtonFunction\0"
    "showAddIncomeGroup\0AddIncomeDetails\0"
    "showAddExpenseGroup\0AddExpenseDetails\0"
    "showShowExpenseGroup\0showShowSponsorsGroup\0"
    "showShowIncomeGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_finance[] = {

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
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
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

       0        // eod
};

void finance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        finance *_t = static_cast<finance *>(_o);
        switch (_id) {
        case 0: _t->goHome(); break;
        case 1: _t->logout(); break;
        case 2: _t->showAddSponsorsGroup(); break;
        case 3: _t->AddNewSponsor(); break;
        case 4: _t->CancelButtonFunction(); break;
        case 5: _t->showAddIncomeGroup(); break;
        case 6: _t->AddIncomeDetails(); break;
        case 7: _t->showAddExpenseGroup(); break;
        case 8: _t->AddExpenseDetails(); break;
        case 9: _t->showShowExpenseGroup(); break;
        case 10: _t->showShowSponsorsGroup(); break;
        case 11: _t->showShowIncomeGroup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject finance::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_finance.data,
      qt_meta_data_finance,  qt_static_metacall, 0, 0}
};


const QMetaObject *finance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *finance::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_finance.stringdata))
        return static_cast<void*>(const_cast< finance*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int finance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
