/****************************************************************************
** Meta object code from reading C++ file 'newform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../newform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NewForm[] = {

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
      13,    9,    8,    8, 0x08,
      52,    8,    8,    8, 0x08,
      88,   71,    8,    8, 0x08,
     121,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NewForm[] = {
    "NewForm\0\0btn\0slotButtonBoxClicked(QAbstractButton*)\0"
    "recentFileChosen()\0templateSelected\0"
    "slotCurrentTemplateChanged(bool)\0"
    "slotTemplateActivated()\0"
};

void NewForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewForm *_t = static_cast<NewForm *>(_o);
        switch (_id) {
        case 0: _t->slotButtonBoxClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->recentFileChosen(); break;
        case 2: _t->slotCurrentTemplateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotTemplateActivated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NewForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NewForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewForm,
      qt_meta_data_NewForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewForm))
        return static_cast<void*>(const_cast< NewForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
