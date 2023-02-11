/****************************************************************************
** Meta object code from reading C++ file 'invokemethod.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../invokemethod.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'invokemethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InvokeMethod[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      40,   13,   13,   13, 0x09,
      70,   63,   13,   13, 0x09,
     110,  105,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_InvokeMethod[] = {
    "InvokeMethod\0\0on_buttonInvoke_clicked()\0"
    "on_buttonSet_clicked()\0method\0"
    "on_comboMethods_activated(QString)\0"
    "item\0on_listParameters_currentItemChanged(QTreeWidgetItem*)\0"
};

void InvokeMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InvokeMethod *_t = static_cast<InvokeMethod *>(_o);
        switch (_id) {
        case 0: _t->on_buttonInvoke_clicked(); break;
        case 1: _t->on_buttonSet_clicked(); break;
        case 2: _t->on_comboMethods_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_listParameters_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InvokeMethod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InvokeMethod::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InvokeMethod,
      qt_meta_data_InvokeMethod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InvokeMethod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InvokeMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InvokeMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InvokeMethod))
        return static_cast<void*>(const_cast< InvokeMethod*>(this));
    if (!strcmp(_clname, "Ui::InvokeMethod"))
        return static_cast< Ui::InvokeMethod*>(const_cast< InvokeMethod*>(this));
    return QDialog::qt_metacast(_clname);
}

int InvokeMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
