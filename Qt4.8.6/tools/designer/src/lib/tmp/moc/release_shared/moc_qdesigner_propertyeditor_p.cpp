/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_propertyeditor_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_propertyeditor_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_propertyeditor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__QDesignerPropertyEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      82,   45,   44,   44, 0x05,
     131,  126,   44,   44, 0x05,
     165,  154,   44,   44, 0x05,
     202,  126,   44,   44, 0x05,
     233,   44,   44,   44, 0x05,
     248,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
     263,   44,   44,   44, 0x0a,
     285,   44,   44,   44, 0x0a,
     312,  154,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__QDesignerPropertyEditor[] = {
    "qdesigner_internal::QDesignerPropertyEditor\0"
    "\0name,value,enableSubPropertyHandling\0"
    "propertyValueChanged(QString,QVariant,bool)\0"
    "name\0resetProperty(QString)\0name,value\0"
    "addDynamicProperty(QString,QVariant)\0"
    "removeDynamicProperty(QString)\0"
    "editorOpened()\0editorClosed()\0"
    "updatePropertySheet()\0reloadResourceProperties()\0"
    "slotPropertyChanged(QString,QVariant)\0"
};

void qdesigner_internal::QDesignerPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerPropertyEditor *_t = static_cast<QDesignerPropertyEditor *>(_o);
        switch (_id) {
        case 0: _t->propertyValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->resetProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addDynamicProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->removeDynamicProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->editorOpened(); break;
        case 5: _t->editorClosed(); break;
        case 6: _t->updatePropertySheet(); break;
        case 7: _t->reloadResourceProperties(); break;
        case 8: _t->slotPropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::QDesignerPropertyEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::QDesignerPropertyEditor::staticMetaObject = {
    { &QDesignerPropertyEditorInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerPropertyEditor,
      qt_meta_data_qdesigner_internal__QDesignerPropertyEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::QDesignerPropertyEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::QDesignerPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::QDesignerPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerPropertyEditor))
        return static_cast<void*>(const_cast< QDesignerPropertyEditor*>(this));
    return QDesignerPropertyEditorInterface::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerPropertyEditorInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::QDesignerPropertyEditor::propertyValueChanged(const QString & _t1, const QVariant & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::QDesignerPropertyEditor::resetProperty(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::QDesignerPropertyEditor::addDynamicProperty(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qdesigner_internal::QDesignerPropertyEditor::removeDynamicProperty(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qdesigner_internal::QDesignerPropertyEditor::editorOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void qdesigner_internal::QDesignerPropertyEditor::editorClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
