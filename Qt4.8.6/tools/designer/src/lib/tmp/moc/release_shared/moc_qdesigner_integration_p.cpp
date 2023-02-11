/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_integration_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_integration_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_integration_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__QDesignerIntegration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      64,   42,   41,   41, 0x05,
     162,  128,   41,   41, 0x05,
     252,  236,   41,   41, 0x05,
     325,  283,   41,   41, 0x05,
     383,  369,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     444,  407,   41,   41, 0x0a,
     487,  482,   41,   41, 0x0a,
     521,  510,   41,   41, 0x0a,
     558,  482,   41,   41, 0x0a,
     600,  589,   41,   41, 0x0a,
     654,  589,   41,   41, 0x0a,
     701,   41,   41,   41, 0x0a,
     719,   41,   41,   41, 0x0a,
     743,  736,   41,   41, 0x0a,
     768,   41,   41,   41, 0x0a,
     796,  510,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__QDesignerIntegration[] = {
    "qdesigner_internal::QDesignerIntegration\0"
    "\0formWindow,name,value\0"
    "propertyChanged(QDesignerFormWindowInterface*,QString,QVariant)\0"
    "formWindow,object,newName,oldName\0"
    "objectNameChanged(QDesignerFormWindowInterface*,QObject*,QString,QStri"
    "ng)\0"
    "manual,document\0helpRequested(QString,QString)\0"
    "objectName,signalSignature,parameterNames\0"
    "navigateToSlot(QString,QString,QStringList)\0"
    "slotSignature\0navigateToSlot(QString)\0"
    "name,value,enableSubPropertyHandling\0"
    "updateProperty(QString,QVariant,bool)\0"
    "name\0resetProperty(QString)\0name,value\0"
    "addDynamicProperty(QString,QVariant)\0"
    "removeDynamicProperty(QString)\0"
    "formWindow\0"
    "updateActiveFormWindow(QDesignerFormWindowInterface*)\0"
    "setupFormWindow(QDesignerFormWindowInterface*)\0"
    "updateSelection()\0updateGeometry()\0"
    "widget\0activateWidget(QWidget*)\0"
    "updateCustomWidgetPlugins()\0"
    "updatePropertyPrivate(QString,QVariant)\0"
};

void qdesigner_internal::QDesignerIntegration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerIntegration *_t = static_cast<QDesignerIntegration *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 1: _t->objectNameChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->helpRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->navigateToSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 4: _t->navigateToSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->resetProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->addDynamicProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 8: _t->removeDynamicProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->updateActiveFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 10: _t->setupFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 11: _t->updateSelection(); break;
        case 12: _t->updateGeometry(); break;
        case 13: _t->activateWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 14: _t->updateCustomWidgetPlugins(); break;
        case 15: _t->updatePropertyPrivate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::QDesignerIntegration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::QDesignerIntegration::staticMetaObject = {
    { &QDesignerIntegrationInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerIntegration,
      qt_meta_data_qdesigner_internal__QDesignerIntegration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::QDesignerIntegration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::QDesignerIntegration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::QDesignerIntegration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerIntegration))
        return static_cast<void*>(const_cast< QDesignerIntegration*>(this));
    return QDesignerIntegrationInterface::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerIntegration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerIntegrationInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::QDesignerIntegration::propertyChanged(QDesignerFormWindowInterface * _t1, const QString & _t2, const QVariant & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::QDesignerIntegration::objectNameChanged(QDesignerFormWindowInterface * _t1, QObject * _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::QDesignerIntegration::helpRequested(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qdesigner_internal::QDesignerIntegration::navigateToSlot(const QString & _t1, const QString & _t2, const QStringList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qdesigner_internal::QDesignerIntegration::navigateToSlot(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
