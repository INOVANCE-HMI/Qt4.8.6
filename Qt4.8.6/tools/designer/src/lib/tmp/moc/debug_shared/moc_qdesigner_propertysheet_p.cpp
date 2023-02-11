/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_propertysheet_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_propertysheet_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_propertysheet_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerPropertySheet[] = {

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

static const char qt_meta_stringdata_QDesignerPropertySheet[] = {
    "QDesignerPropertySheet\0"
};

void QDesignerPropertySheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDesignerPropertySheet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerPropertySheet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerPropertySheet,
      qt_meta_data_QDesignerPropertySheet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerPropertySheet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerPropertySheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerPropertySheet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerPropertySheet))
        return static_cast<void*>(const_cast< QDesignerPropertySheet*>(this));
    if (!strcmp(_clname, "QDesignerPropertySheetExtension"))
        return static_cast< QDesignerPropertySheetExtension*>(const_cast< QDesignerPropertySheet*>(this));
    if (!strcmp(_clname, "QDesignerDynamicPropertySheetExtension"))
        return static_cast< QDesignerDynamicPropertySheetExtension*>(const_cast< QDesignerPropertySheet*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.PropertySheet"))
        return static_cast< QDesignerPropertySheetExtension*>(const_cast< QDesignerPropertySheet*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.DynamicPropertySheet"))
        return static_cast< QDesignerDynamicPropertySheetExtension*>(const_cast< QDesignerPropertySheet*>(this));
    return QObject::qt_metacast(_clname);
}

int QDesignerPropertySheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDesignerAbstractPropertySheetFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   39,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerAbstractPropertySheetFactory[] = {
    "QDesignerAbstractPropertySheetFactory\0"
    "\0object\0objectDestroyed(QObject*)\0"
};

void QDesignerAbstractPropertySheetFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerAbstractPropertySheetFactory *_t = static_cast<QDesignerAbstractPropertySheetFactory *>(_o);
        switch (_id) {
        case 0: _t->objectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerAbstractPropertySheetFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerAbstractPropertySheetFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_QDesignerAbstractPropertySheetFactory,
      qt_meta_data_QDesignerAbstractPropertySheetFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerAbstractPropertySheetFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerAbstractPropertySheetFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerAbstractPropertySheetFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerAbstractPropertySheetFactory))
        return static_cast<void*>(const_cast< QDesignerAbstractPropertySheetFactory*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QAbstractExtensionFactory"))
        return static_cast< QAbstractExtensionFactory*>(const_cast< QDesignerAbstractPropertySheetFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int QDesignerAbstractPropertySheetFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
