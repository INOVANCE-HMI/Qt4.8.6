/****************************************************************************
** Meta object code from reading C++ file 'widgetfactory_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/widgetfactory_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetfactory_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__WidgetFactory[] = {

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
      35,   34,   34,   34, 0x0a,
      60,   49,   34,   34, 0x08,
     115,   49,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__WidgetFactory[] = {
    "qdesigner_internal::WidgetFactory\0\0"
    "loadPlugins()\0formWindow\0"
    "activeFormWindowChanged(QDesignerFormWindowInterface*)\0"
    "formWindowAdded(QDesignerFormWindowInterface*)\0"
};

void qdesigner_internal::WidgetFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetFactory *_t = static_cast<WidgetFactory *>(_o);
        switch (_id) {
        case 0: _t->loadPlugins(); break;
        case 1: _t->activeFormWindowChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 2: _t->formWindowAdded((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::WidgetFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::WidgetFactory::staticMetaObject = {
    { &QDesignerWidgetFactoryInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__WidgetFactory,
      qt_meta_data_qdesigner_internal__WidgetFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::WidgetFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::WidgetFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::WidgetFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__WidgetFactory))
        return static_cast<void*>(const_cast< WidgetFactory*>(this));
    return QDesignerWidgetFactoryInterface::qt_metacast(_clname);
}

int qdesigner_internal::WidgetFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerWidgetFactoryInterface::qt_metacall(_c, _id, _a);
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
