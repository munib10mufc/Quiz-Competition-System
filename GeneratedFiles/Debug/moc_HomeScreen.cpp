/****************************************************************************
** Meta object code from reading C++ file 'HomeScreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HomeScreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HomeScreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HomeScreen_t {
    QByteArrayData data[15];
    char stringdata[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomeScreen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomeScreen_t qt_meta_stringdata_HomeScreen = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 13),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 14),
QT_MOC_LITERAL(4, 41, 12),
QT_MOC_LITERAL(5, 54, 10),
QT_MOC_LITERAL(6, 65, 10),
QT_MOC_LITERAL(7, 76, 21),
QT_MOC_LITERAL(8, 98, 12),
QT_MOC_LITERAL(9, 111, 14),
QT_MOC_LITERAL(10, 126, 9),
QT_MOC_LITERAL(11, 136, 10),
QT_MOC_LITERAL(12, 147, 10),
QT_MOC_LITERAL(13, 158, 6),
QT_MOC_LITERAL(14, 165, 13)
    },
    "HomeScreen\0goTofirstPage\0\0goToAssProject\0"
    "goToRegister\0goToDuties\0goToBudget\0"
    "goToRemoveParticipant\0watchProfile\0"
    "goToAddProject\0goToTimer\0showResult\0"
    "goToResult\0logout\0goCreateGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomeScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

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
    QMetaType::Void,

       0        // eod
};

void HomeScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HomeScreen *_t = static_cast<HomeScreen *>(_o);
        switch (_id) {
        case 0: _t->goTofirstPage(); break;
        case 1: _t->goToAssProject(); break;
        case 2: _t->goToRegister(); break;
        case 3: _t->goToDuties(); break;
        case 4: _t->goToBudget(); break;
        case 5: _t->goToRemoveParticipant(); break;
        case 6: _t->watchProfile(); break;
        case 7: _t->goToAddProject(); break;
        case 8: _t->goToTimer(); break;
        case 9: _t->showResult(); break;
        case 10: _t->goToResult(); break;
        case 11: _t->logout(); break;
        case 12: _t->goCreateGroup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HomeScreen::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HomeScreen.data,
      qt_meta_data_HomeScreen,  qt_static_metacall, 0, 0}
};


const QMetaObject *HomeScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomeScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HomeScreen.stringdata))
        return static_cast<void*>(const_cast< HomeScreen*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HomeScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
