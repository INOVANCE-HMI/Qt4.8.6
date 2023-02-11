/****************************************************************************
** Meta object code from reading C++ file 'objectinspector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../objectinspector/objectinspector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__ObjectInspector[] = {

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
      37,   36,   36,   36, 0x0a,
      80,   60,   36,   36, 0x08,
     136,  132,   36,   36, 0x08,
     172,  165,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ObjectInspector[] = {
    "qdesigner_internal::ObjectInspector\0"
    "\0mainContainerChanged()\0selected,deselected\0"
    "slotSelectionChanged(QItemSelection,QItemSelection)\0"
    "pos\0slotPopupContextMenu(QPoint)\0"
    "column\0slotHeaderDoubleClicked(int)\0"
};

void qdesigner_internal::ObjectInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ObjectInspector *_t = static_cast<ObjectInspector *>(_o);
        switch (_id) {
        case 0: _t->mainContainerChanged(); break;
        case 1: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->slotPopupContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->slotHeaderDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ObjectInspector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ObjectInspector::staticMetaObject = {
    { &QDesignerObjectInspector::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ObjectInspector,
      qt_meta_data_qdesigner_internal__ObjectInspector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ObjectInspector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ObjectInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ObjectInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ObjectInspector))
        return static_cast<void*>(const_cast< ObjectInspector*>(this));
    return QDesignerObjectInspector::qt_metacast(_clname);
}

int qdesigner_internal::ObjectInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerObjectInspector::qt_metacall(_c, _id, _a);
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
