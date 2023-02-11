/****************************************************************************
** Meta object code from reading C++ file 'connectdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../signalsloteditor/connectdialog_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__ConnectDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x08,
      56,   51,   34,   34, 0x08,
      87,   51,   34,   34, 0x08,
     116,   34,   34,   34, 0x08,
     144,  137,   34,   34, 0x08,
     170,   34,   34,   34, 0x28,
     189,   34,   34,   34, 0x08,
     203,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ConnectDialog[] = {
    "qdesigner_internal::ConnectDialog\0\0"
    "populateLists()\0item\0"
    "selectSignal(QListWidgetItem*)\0"
    "selectSlot(QListWidgetItem*)\0"
    "populateSignalList()\0signal\0"
    "populateSlotList(QString)\0populateSlotList()\0"
    "editSignals()\0editSlots()\0"
};

void qdesigner_internal::ConnectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectDialog *_t = static_cast<ConnectDialog *>(_o);
        switch (_id) {
        case 0: _t->populateLists(); break;
        case 1: _t->selectSignal((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->selectSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->populateSignalList(); break;
        case 4: _t->populateSlotList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->populateSlotList(); break;
        case 6: _t->editSignals(); break;
        case 7: _t->editSlots(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ConnectDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ConnectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ConnectDialog,
      qt_meta_data_qdesigner_internal__ConnectDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ConnectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ConnectDialog))
        return static_cast<void*>(const_cast< ConnectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::ConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
