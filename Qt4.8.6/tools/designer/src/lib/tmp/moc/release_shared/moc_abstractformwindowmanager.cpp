/****************************************************************************
** Meta object code from reading C++ file 'abstractformwindowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sdk/abstractformwindowmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractformwindowmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerFormWindowManagerInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      48,   37,   36,   36, 0x05,
      95,   37,   36,   36, 0x05,
     144,   37,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
     199,   37,   36,   36, 0x0a,
     244,   37,   36,   36, 0x0a,
     292,   37,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerFormWindowManagerInterface[] = {
    "QDesignerFormWindowManagerInterface\0"
    "\0formWindow\0formWindowAdded(QDesignerFormWindowInterface*)\0"
    "formWindowRemoved(QDesignerFormWindowInterface*)\0"
    "activeFormWindowChanged(QDesignerFormWindowInterface*)\0"
    "addFormWindow(QDesignerFormWindowInterface*)\0"
    "removeFormWindow(QDesignerFormWindowInterface*)\0"
    "setActiveFormWindow(QDesignerFormWindowInterface*)\0"
};

void QDesignerFormWindowManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerFormWindowManagerInterface *_t = static_cast<QDesignerFormWindowManagerInterface *>(_o);
        switch (_id) {
        case 0: _t->formWindowAdded((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 1: _t->formWindowRemoved((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 2: _t->activeFormWindowChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 3: _t->addFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 4: _t->removeFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 5: _t->setActiveFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerFormWindowManagerInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerFormWindowManagerInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerFormWindowManagerInterface,
      qt_meta_data_QDesignerFormWindowManagerInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerFormWindowManagerInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerFormWindowManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerFormWindowManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerFormWindowManagerInterface))
        return static_cast<void*>(const_cast< QDesignerFormWindowManagerInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int QDesignerFormWindowManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QDesignerFormWindowManagerInterface::formWindowAdded(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesignerFormWindowManagerInterface::formWindowRemoved(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDesignerFormWindowManagerInterface::activeFormWindowChanged(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
