/****************************************************************************
** Meta object code from reading C++ file 'q3wizard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/q3wizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3wizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3Wizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      24,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   42,    9,    9, 0x0a,
      74,   42,    9,    9, 0x0a,
     104,   42,    9,    9, 0x0a,
     136,   42,    9,    9, 0x0a,
     166,   42,    9,    9, 0x0a,
     191,    9,    9,    9, 0x09,
     198,    9,    9,    9, 0x09,
     205,    9,    9,    9, 0x09,

 // properties: name, type, flags
     218,  212, 0x40095103,

       0        // eod
};

static const char qt_meta_stringdata_Q3Wizard[] = {
    "Q3Wizard\0\0helpClicked()\0selected(QString)\0"
    ",\0setBackEnabled(QWidget*,bool)\0"
    "setNextEnabled(QWidget*,bool)\0"
    "setFinishEnabled(QWidget*,bool)\0"
    "setHelpEnabled(QWidget*,bool)\0"
    "setFinish(QWidget*,bool)\0back()\0next()\0"
    "help()\0QFont\0titleFont\0"
};

void Q3Wizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3Wizard *_t = static_cast<Q3Wizard *>(_o);
        switch (_id) {
        case 0: _t->helpClicked(); break;
        case 1: _t->selected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setBackEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setNextEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setFinishEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setHelpEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setFinish((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->back(); break;
        case 8: _t->next(); break;
        case 9: _t->help(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3Wizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3Wizard::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Q3Wizard,
      qt_meta_data_Q3Wizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3Wizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3Wizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3Wizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3Wizard))
        return static_cast<void*>(const_cast< Q3Wizard*>(this));
    return QDialog::qt_metacast(_clname);
}

int Q3Wizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = titleFont(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitleFont(*reinterpret_cast< QFont*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Q3Wizard::helpClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Q3Wizard::selected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
