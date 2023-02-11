/****************************************************************************
** Meta object code from reading C++ file 'inplace_editor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../taskmenu/inplace_editor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inplace_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__InPlaceEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__InPlaceEditor[] = {
    "qdesigner_internal::InPlaceEditor\0"
};

void qdesigner_internal::InPlaceEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qdesigner_internal::InPlaceEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::InPlaceEditor::staticMetaObject = {
    { &TextPropertyEditor::staticMetaObject, qt_meta_stringdata_qdesigner_internal__InPlaceEditor,
      qt_meta_data_qdesigner_internal__InPlaceEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::InPlaceEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::InPlaceEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::InPlaceEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__InPlaceEditor))
        return static_cast<void*>(const_cast< InPlaceEditor*>(this));
    return TextPropertyEditor::qt_metacast(_clname);
}

int qdesigner_internal::InPlaceEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextPropertyEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_qdesigner_internal__TaskMenuInlineEditor[] = {

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
      42,   41,   41,   41, 0x0a,
      58,   53,   41,   41, 0x08,
      78,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor[] = {
    "qdesigner_internal::TaskMenuInlineEditor\0"
    "\0editText()\0text\0updateText(QString)\0"
    "updateSelection()\0"
};

void qdesigner_internal::TaskMenuInlineEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskMenuInlineEditor *_t = static_cast<TaskMenuInlineEditor *>(_o);
        switch (_id) {
        case 0: _t->editText(); break;
        case 1: _t->updateText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::TaskMenuInlineEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::TaskMenuInlineEditor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor,
      qt_meta_data_qdesigner_internal__TaskMenuInlineEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::TaskMenuInlineEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::TaskMenuInlineEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::TaskMenuInlineEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor))
        return static_cast<void*>(const_cast< TaskMenuInlineEditor*>(this));
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::TaskMenuInlineEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
