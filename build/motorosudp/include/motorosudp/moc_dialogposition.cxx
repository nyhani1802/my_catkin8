/****************************************************************************
** Meta object code from reading C++ file 'dialogposition.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/motorosudp/include/motorosudp/dialogposition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogposition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogPosition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      45,   40,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogPosition[] = {
    "DialogPosition\0\0on_buttonBox_accepted()\0"
    "arg1\0on_comboBoxCoordinate_currentIndexChanged(QString)\0"
};

void DialogPosition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogPosition *_t = static_cast<DialogPosition *>(_o);
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_comboBoxCoordinate_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogPosition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogPosition::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogPosition,
      qt_meta_data_DialogPosition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogPosition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogPosition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogPosition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogPosition))
        return static_cast<void*>(const_cast< DialogPosition*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogPosition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
