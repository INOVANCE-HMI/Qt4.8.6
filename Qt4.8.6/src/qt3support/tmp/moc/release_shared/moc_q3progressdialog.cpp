/****************************************************************************
** Meta object code from reading C++ file 'q3progressdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/q3progressdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3progressdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3ProgressDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       8,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      29,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   17,   17,   17, 0x0a,
      50,   17,   17,   17, 0x0a,
      69,   58,   17,   17, 0x0a,
      97,   88,   17,   17, 0x0a,
     134,  114,   17,   17, 0x0a,
     155,   17,   17,   17, 0x0a,
     177,   17,   17,   17, 0x0a,
     209,  206,   17,   17, 0x0a,
     233,   17,   17,   17, 0x09,

 // properties: name, type, flags
     250,  245, 0x01095001,
     262,  245, 0x01084001,
      58,  275, 0x02095103,
      88,  275, 0x02095103,
     279,  245, 0x01095103,
     289,  245, 0x01095103,
     299,  275, 0x02095103,
     323,  315, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Q3ProgressDialog[] = {
    "Q3ProgressDialog\0\0canceled()\0cancelled()\0"
    "cancel()\0reset()\0totalSteps\0"
    "setTotalSteps(int)\0progress\0"
    "setProgress(int)\0progress,totalSteps\0"
    "setProgress(int,int)\0setLabelText(QString)\0"
    "setCancelButtonText(QString)\0ms\0"
    "setMinimumDuration(int)\0forceShow()\0"
    "bool\0wasCanceled\0wasCancelled\0int\0"
    "autoReset\0autoClose\0minimumDuration\0"
    "QString\0labelText\0"
};

void Q3ProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3ProgressDialog *_t = static_cast<Q3ProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->canceled(); break;
        case 1: _t->cancelled(); break;
        case 2: _t->cancel(); break;
        case 3: _t->reset(); break;
        case 4: _t->setTotalSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setLabelText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setCancelButtonText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setMinimumDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->forceShow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3ProgressDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3ProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Q3ProgressDialog,
      qt_meta_data_Q3ProgressDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3ProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3ProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3ProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3ProgressDialog))
        return static_cast<void*>(const_cast< Q3ProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Q3ProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = wasCanceled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = wasCancelled(); break;
        case 2: *reinterpret_cast< int*>(_v) = totalSteps(); break;
        case 3: *reinterpret_cast< int*>(_v) = progress(); break;
        case 4: *reinterpret_cast< bool*>(_v) = autoReset(); break;
        case 5: *reinterpret_cast< bool*>(_v) = autoClose(); break;
        case 6: *reinterpret_cast< int*>(_v) = minimumDuration(); break;
        case 7: *reinterpret_cast< QString*>(_v) = labelText(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setTotalSteps(*reinterpret_cast< int*>(_v)); break;
        case 3: setProgress(*reinterpret_cast< int*>(_v)); break;
        case 4: setAutoReset(*reinterpret_cast< bool*>(_v)); break;
        case 5: setAutoClose(*reinterpret_cast< bool*>(_v)); break;
        case 6: setMinimumDuration(*reinterpret_cast< int*>(_v)); break;
        case 7: setLabelText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Q3ProgressDialog::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Q3ProgressDialog::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
