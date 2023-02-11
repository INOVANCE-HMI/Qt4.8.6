/****************************************************************************
** Meta object code from reading C++ file 'buddyeditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../buddyeditor/buddyeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buddyeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__BuddyEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      54,   52,   32,   32, 0x0a,
      78,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__BuddyEditor[] = {
    "qdesigner_internal::BuddyEditor\0\0"
    "updateBackground()\0w\0widgetRemoved(QWidget*)\0"
    "autoBuddy()\0"
};

void qdesigner_internal::BuddyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BuddyEditor *_t = static_cast<BuddyEditor *>(_o);
        switch (_id) {
        case 0: _t->updateBackground(); break;
        case 1: _t->widgetRemoved((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->autoBuddy(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::BuddyEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::BuddyEditor::staticMetaObject = {
    { &ConnectionEdit::staticMetaObject, qt_meta_stringdata_qdesigner_internal__BuddyEditor,
      qt_meta_data_qdesigner_internal__BuddyEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::BuddyEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::BuddyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::BuddyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__BuddyEditor))
        return static_cast<void*>(const_cast< BuddyEditor*>(this));
    return ConnectionEdit::qt_metacast(_clname);
}

int qdesigner_internal::BuddyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectionEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
