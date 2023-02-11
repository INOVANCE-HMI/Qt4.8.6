/****************************************************************************
** Meta object code from reading C++ file 'textpropertyeditor_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/textpropertyeditor_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textpropertyeditor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__TextPropertyEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   40,   39,   39, 0x05,
      66,   39,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   40,   39,   39, 0x0a,
     101,   39,   39,   39, 0x0a,
     113,   39,   39,   39, 0x0a,
     121,   40,   39,   39, 0x08,
     146,   39,   39,   39, 0x08,
     163,   39,   39,   39, 0x08,

 // properties: name, type, flags
      40,  185, 0x0a195103,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__TextPropertyEditor[] = {
    "qdesigner_internal::TextPropertyEditor\0"
    "\0text\0textChanged(QString)\0editingFinished()\0"
    "setText(QString)\0selectAll()\0clear()\0"
    "slotTextChanged(QString)\0slotTextEdited()\0"
    "slotEditingFinished()\0QString\0"
};

void qdesigner_internal::TextPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextPropertyEditor *_t = static_cast<TextPropertyEditor *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->selectAll(); break;
        case 4: _t->clear(); break;
        case 5: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotTextEdited(); break;
        case 7: _t->slotEditingFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::TextPropertyEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::TextPropertyEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__TextPropertyEditor,
      qt_meta_data_qdesigner_internal__TextPropertyEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::TextPropertyEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::TextPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::TextPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__TextPropertyEditor))
        return static_cast<void*>(const_cast< TextPropertyEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::TextPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
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
void qdesigner_internal::TextPropertyEditor::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::TextPropertyEditor::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
