/****************************************************************************
** Meta object code from reading C++ file 'q3widgetstack_container.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../q3widgetstack/q3widgetstack_container.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3widgetstack_container.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3WidgetStackContainer[] = {

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

static const char qt_meta_stringdata_Q3WidgetStackContainer[] = {
    "Q3WidgetStackContainer\0"
};

void Q3WidgetStackContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3WidgetStackContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3WidgetStackContainer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3WidgetStackContainer,
      qt_meta_data_Q3WidgetStackContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3WidgetStackContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3WidgetStackContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3WidgetStackContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3WidgetStackContainer))
        return static_cast<void*>(const_cast< Q3WidgetStackContainer*>(this));
    if (!strcmp(_clname, "QDesignerContainerExtension"))
        return static_cast< QDesignerContainerExtension*>(const_cast< Q3WidgetStackContainer*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.Container"))
        return static_cast< QDesignerContainerExtension*>(const_cast< Q3WidgetStackContainer*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3WidgetStackContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3WidgetStackContainerFactory[] = {

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

static const char qt_meta_stringdata_Q3WidgetStackContainerFactory[] = {
    "Q3WidgetStackContainerFactory\0"
};

void Q3WidgetStackContainerFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3WidgetStackContainerFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3WidgetStackContainerFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_Q3WidgetStackContainerFactory,
      qt_meta_data_Q3WidgetStackContainerFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3WidgetStackContainerFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3WidgetStackContainerFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3WidgetStackContainerFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3WidgetStackContainerFactory))
        return static_cast<void*>(const_cast< Q3WidgetStackContainerFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int Q3WidgetStackContainerFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
