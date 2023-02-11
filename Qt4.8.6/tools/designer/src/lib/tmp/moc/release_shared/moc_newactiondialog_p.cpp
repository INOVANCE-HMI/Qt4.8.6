/****************************************************************************
** Meta object code from reading C++ file 'newactiondialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/newactiondialog_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newactiondialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__NewActionDialog[] = {

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
      42,   37,   36,   36, 0x08,
      80,   37,   36,   36, 0x08,
     118,   36,   36,   36, 0x08,
     136,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__NewActionDialog[] = {
    "qdesigner_internal::NewActionDialog\0"
    "\0text\0on_editActionText_textEdited(QString)\0"
    "on_editObjectName_textEdited(QString)\0"
    "slotEditToolTip()\0slotResetKeySequence()\0"
};

void qdesigner_internal::NewActionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewActionDialog *_t = static_cast<NewActionDialog *>(_o);
        switch (_id) {
        case 0: _t->on_editActionText_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_editObjectName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotEditToolTip(); break;
        case 3: _t->slotResetKeySequence(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::NewActionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::NewActionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__NewActionDialog,
      qt_meta_data_qdesigner_internal__NewActionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::NewActionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::NewActionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::NewActionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__NewActionDialog))
        return static_cast<void*>(const_cast< NewActionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::NewActionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
