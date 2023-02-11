/****************************************************************************
** Meta object code from reading C++ file 'qhelpengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qhelpengine_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHelpEngineCorePrivate[] = {

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
      28,   24,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QHelpEngineCorePrivate[] = {
    "QHelpEngineCorePrivate\0\0msg\0"
    "errorReceived(QString)\0"
};

void QHelpEngineCorePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpEngineCorePrivate *_t = static_cast<QHelpEngineCorePrivate *>(_o);
        switch (_id) {
        case 0: _t->errorReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHelpEngineCorePrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHelpEngineCorePrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHelpEngineCorePrivate,
      qt_meta_data_QHelpEngineCorePrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHelpEngineCorePrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHelpEngineCorePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHelpEngineCorePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpEngineCorePrivate))
        return static_cast<void*>(const_cast< QHelpEngineCorePrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QHelpEngineCorePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_QHelpEnginePrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      44,   19,   19,   19, 0x0a,
      70,   19,   19,   19, 0x0a,
      91,   19,   19,   19, 0x0a,
     114,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QHelpEnginePrivate[] = {
    "QHelpEnginePrivate\0\0setContentsWidgetBusy()\0"
    "unsetContentsWidgetBusy()\0"
    "setIndexWidgetBusy()\0unsetIndexWidgetBusy()\0"
    "applyCurrentFilter()\0"
};

void QHelpEnginePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpEnginePrivate *_t = static_cast<QHelpEnginePrivate *>(_o);
        switch (_id) {
        case 0: _t->setContentsWidgetBusy(); break;
        case 1: _t->unsetContentsWidgetBusy(); break;
        case 2: _t->setIndexWidgetBusy(); break;
        case 3: _t->unsetIndexWidgetBusy(); break;
        case 4: _t->applyCurrentFilter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QHelpEnginePrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHelpEnginePrivate::staticMetaObject = {
    { &QHelpEngineCorePrivate::staticMetaObject, qt_meta_stringdata_QHelpEnginePrivate,
      qt_meta_data_QHelpEnginePrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHelpEnginePrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHelpEnginePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHelpEnginePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpEnginePrivate))
        return static_cast<void*>(const_cast< QHelpEnginePrivate*>(this));
    return QHelpEngineCorePrivate::qt_metacast(_clname);
}

int QHelpEnginePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHelpEngineCorePrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
