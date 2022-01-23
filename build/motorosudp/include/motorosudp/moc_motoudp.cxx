/****************************************************************************
** Meta object code from reading C++ file 'motoudp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/motorosudp/include/motorosudp/motoudp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motoudp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MotoUDP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x06,
      26,    8,    8,    8, 0x06,
      44,    8,    8,    8, 0x06,
      59,    8,    8,    8, 0x06,

       0        // eod
};

static const char qt_meta_stringdata_MotoUDP[] = {
    "MotoUDP\0\0receiveAllData()\0transferAllData()\0"
    "receiveError()\0transferError()\0"
};

void MotoUDP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MotoUDP *_t = static_cast<MotoUDP *>(_o);
        switch (_id) {
        case 0: _t->receiveAllData(); break;
        case 1: _t->transferAllData(); break;
        case 2: _t->receiveError(); break;
        case 3: _t->transferError(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MotoUDP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MotoUDP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MotoUDP,
      qt_meta_data_MotoUDP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MotoUDP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MotoUDP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MotoUDP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MotoUDP))
        return static_cast<void*>(const_cast< MotoUDP*>(this));
    return QObject::qt_metacast(_clname);
}

int MotoUDP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MotoUDP::receiveAllData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MotoUDP::transferAllData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MotoUDP::receiveError()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MotoUDP::transferError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
