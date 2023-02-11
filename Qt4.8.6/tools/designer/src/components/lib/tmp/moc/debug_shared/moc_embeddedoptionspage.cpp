/****************************************************************************
** Meta object code from reading C++ file 'embeddedoptionspage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../formeditor/embeddedoptionspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'embeddedoptionspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__EmbeddedOptionsControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   43,   43,   43, 0x0a,
      59,   43,   43,   43, 0x0a,
      74,   43,   43,   43, 0x08,
      84,   43,   43,   43, 0x08,
      95,   43,   43,   43, 0x08,
     108,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__EmbeddedOptionsControl[] = {
    "qdesigner_internal::EmbeddedOptionsControl\0"
    "\0loadSettings()\0saveSettings()\0slotAdd()\0"
    "slotEdit()\0slotDelete()\0"
    "slotProfileIndexChanged(int)\0"
};

void qdesigner_internal::EmbeddedOptionsControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EmbeddedOptionsControl *_t = static_cast<EmbeddedOptionsControl *>(_o);
        switch (_id) {
        case 0: _t->loadSettings(); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->slotAdd(); break;
        case 3: _t->slotEdit(); break;
        case 4: _t->slotDelete(); break;
        case 5: _t->slotProfileIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::EmbeddedOptionsControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::EmbeddedOptionsControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__EmbeddedOptionsControl,
      qt_meta_data_qdesigner_internal__EmbeddedOptionsControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::EmbeddedOptionsControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::EmbeddedOptionsControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::EmbeddedOptionsControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__EmbeddedOptionsControl))
        return static_cast<void*>(const_cast< EmbeddedOptionsControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::EmbeddedOptionsControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
