/****************************************************************************
** Meta object code from reading C++ file 'ambientproperties.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ambientproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ambientproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AmbientProperties[] = {

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
      19,   18,   18,   18, 0x0a,
      49,   18,   18,   18, 0x0a,
      79,   18,   18,   18, 0x0a,
     106,  103,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AmbientProperties[] = {
    "AmbientProperties\0\0on_buttonBackground_clicked()\0"
    "on_buttonForeground_clicked()\0"
    "on_buttonFont_clicked()\0on\0"
    "on_buttonEnabled_toggled(bool)\0"
};

void AmbientProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AmbientProperties *_t = static_cast<AmbientProperties *>(_o);
        switch (_id) {
        case 0: _t->on_buttonBackground_clicked(); break;
        case 1: _t->on_buttonForeground_clicked(); break;
        case 2: _t->on_buttonFont_clicked(); break;
        case 3: _t->on_buttonEnabled_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AmbientProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AmbientProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AmbientProperties,
      qt_meta_data_AmbientProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AmbientProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AmbientProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AmbientProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AmbientProperties))
        return static_cast<void*>(const_cast< AmbientProperties*>(this));
    if (!strcmp(_clname, "Ui::AmbientProperties"))
        return static_cast< Ui::AmbientProperties*>(const_cast< AmbientProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int AmbientProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
