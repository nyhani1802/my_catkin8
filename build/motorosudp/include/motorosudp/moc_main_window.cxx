/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/motorosudp/include/motorosudp/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_motorosudp__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      55,   23,   23,   23, 0x0a,
      73,   23,   23,   23, 0x0a,
      94,   23,   23,   23, 0x0a,
     110,   23,   23,   23, 0x0a,
     127,   23,   23,   23, 0x0a,
     147,   23,   23,   23, 0x0a,
     161,   23,   23,   23, 0x0a,
     179,   23,   23,   23, 0x0a,
     198,   23,   23,   23, 0x0a,
     217,   23,   23,   23, 0x0a,
     237,   23,   23,   23, 0x0a,
     256,  250,   23,   23, 0x0a,
     303,   23,   23,   23, 0x0a,
     322,   23,   23,   23, 0x0a,
     354,   23,   23,   23, 0x0a,
     389,   23,   23,   23, 0x0a,
     419,   23,   23,   23, 0x0a,
     453,  448,   23,   23, 0x0a,
     507,   23,   23,   23, 0x0a,
     538,   23,   23,   23, 0x0a,
     563,   23,   23,   23, 0x0a,
     588,   23,   23,   23, 0x0a,
     621,   23,   23,   23, 0x0a,
     636,   23,   23,   23, 0x0a,
     673,  250,   23,   23, 0x0a,
     710,   23,   23,   23, 0x0a,
     755,  747,   23,   23, 0x0a,
     801,   23,   23,   23, 0x0a,
     831,   23,   23,   23, 0x0a,
     866,   23,   23,   23, 0x0a,
     902,   23,   23,   23, 0x0a,
     937,   23,   23,   23, 0x0a,
     971,   23,   23,   23, 0x0a,
    1002,   23,   23,   23, 0x0a,
    1033,   23,   23,   23, 0x0a,
    1062,  448,   23,   23, 0x0a,
    1102,   23,   23,   23, 0x0a,
    1140,   23,   23,   23, 0x0a,
    1176,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_motorosudp__MainWindow[] = {
    "motorosudp::MainWindow\0\0"
    "on_pushButtonConnect_clicked()\0"
    "RequestPosition()\0DataReceiveHandler()\0"
    "SampleHandler()\0TimeoutHandler()\0"
    "SerialDataReceive()\0foundObject()\0"
    "fileReceiveDone()\0fileTransmitDone()\0"
    "fileReceiveError()\0fileTransmitError()\0"
    "deleteFile()\0index\0"
    "on_comboBoxCoordinate_currentIndexChanged(int)\0"
    "sendDataPosition()\0on_pushButtonAddPoint_clicked()\0"
    "on_pushButtonRemovePoint_clicked()\0"
    "on_CameraOff_Button_clicked()\0"
    "on_CameraOn_Button_clicked()\0arg1\0"
    "on_StreamOption_comboBox_currentIndexChanged(QString)\0"
    "on_Background_Button_clicked()\0"
    "on_Mask_Button_clicked()\0"
    "on_Size_Button_clicked()\0"
    "on_ChooseObject_Button_clicked()\0"
    "handleButton()\0on_pushButtonConnectSerial_clicked()\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "on_pushButtonStartConveyer_clicked()\0"
    "checked\0on_radioButtonInteractiveMarker_clicked(bool)\0"
    "on_pushButtonHoming_clicked()\0"
    "on_pushButtonServoHoming_clicked()\0"
    "on_pushButtonStartProgram_clicked()\0"
    "on_pushButtonStopProgram_clicked()\0"
    "on_pushButtonGetJobFile_clicked()\0"
    "on_pushButtonOpenJOB_clicked()\0"
    "on_pushButtonSendJOB_clicked()\0"
    "on_pushButtonServo_clicked()\0"
    "on_checkBoxTrajectory_stateChanged(int)\0"
    "on_pushButtonStartMasterJOB_clicked()\0"
    "on_pushButtonGeneratePath_clicked()\0"
    "on_pushButtonCheck_clicked()\0"
};

void motorosudp::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonConnect_clicked(); break;
        case 1: _t->RequestPosition(); break;
        case 2: _t->DataReceiveHandler(); break;
        case 3: _t->SampleHandler(); break;
        case 4: _t->TimeoutHandler(); break;
        case 5: _t->SerialDataReceive(); break;
        case 6: _t->foundObject(); break;
        case 7: _t->fileReceiveDone(); break;
        case 8: _t->fileTransmitDone(); break;
        case 9: _t->fileReceiveError(); break;
        case 10: _t->fileTransmitError(); break;
        case 11: _t->deleteFile(); break;
        case 12: _t->on_comboBoxCoordinate_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->sendDataPosition(); break;
        case 14: _t->on_pushButtonAddPoint_clicked(); break;
        case 15: _t->on_pushButtonRemovePoint_clicked(); break;
        case 16: _t->on_CameraOff_Button_clicked(); break;
        case 17: _t->on_CameraOn_Button_clicked(); break;
        case 18: _t->on_StreamOption_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->on_Background_Button_clicked(); break;
        case 20: _t->on_Mask_Button_clicked(); break;
        case 21: _t->on_Size_Button_clicked(); break;
        case 22: _t->on_ChooseObject_Button_clicked(); break;
        case 23: _t->handleButton(); break;
        case 24: _t->on_pushButtonConnectSerial_clicked(); break;
        case 25: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_pushButtonStartConveyer_clicked(); break;
        case 27: _t->on_radioButtonInteractiveMarker_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_pushButtonHoming_clicked(); break;
        case 29: _t->on_pushButtonServoHoming_clicked(); break;
        case 30: _t->on_pushButtonStartProgram_clicked(); break;
        case 31: _t->on_pushButtonStopProgram_clicked(); break;
        case 32: _t->on_pushButtonGetJobFile_clicked(); break;
        case 33: _t->on_pushButtonOpenJOB_clicked(); break;
        case 34: _t->on_pushButtonSendJOB_clicked(); break;
        case 35: _t->on_pushButtonServo_clicked(); break;
        case 36: _t->on_checkBoxTrajectory_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_pushButtonStartMasterJOB_clicked(); break;
        case 38: _t->on_pushButtonGeneratePath_clicked(); break;
        case 39: _t->on_pushButtonCheck_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData motorosudp::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject motorosudp::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_motorosudp__MainWindow,
      qt_meta_data_motorosudp__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &motorosudp::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *motorosudp::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *motorosudp::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_motorosudp__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int motorosudp::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
