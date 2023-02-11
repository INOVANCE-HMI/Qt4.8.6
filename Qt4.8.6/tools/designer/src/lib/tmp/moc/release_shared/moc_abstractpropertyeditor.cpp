/****************************************************************************
** Meta object code from reading C++ file 'abstractpropertyeditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sdk/abstractpropertyeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractpropertyeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerPropertyEditorInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   34,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   79,   33,   33, 0x0a,
     125,  106,   33,   33, 0x0a,
     165,   34,   33,   33, 0x2a,
     209,  200,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerPropertyEditorInterface[] = {
    "QDesignerPropertyEditorInterface\0\0"
    "name,value\0propertyChanged(QString,QVariant)\0"
    "object\0setObject(QObject*)\0"
    "name,value,changed\0"
    "setPropertyValue(QString,QVariant,bool)\0"
    "setPropertyValue(QString,QVariant)\0"
    "readOnly\0setReadOnly(bool)\0"
};

void QDesignerPropertyEditorInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerPropertyEditorInterface *_t = static_cast<QDesignerPropertyEditorInterface *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->setPropertyValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setPropertyValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerPropertyEditorInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerPropertyEditorInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesignerPropertyEditorInterface,
      qt_meta_data_QDesignerPropertyEditorInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerPropertyEditorInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerPropertyEditorInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerPropertyEditorInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerPropertyEditorInterface))
        return static_cast<void*>(const_cast< QDesignerPropertyEditorInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesignerPropertyEditorInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QDesignerPropertyEditorInterface::propertyChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
