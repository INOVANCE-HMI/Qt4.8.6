/****************************************************************************
** Meta object code from reading C++ file 'preprocessorcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../preprocessorcontrol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preprocessorcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreprocessorCache[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   19,   18,   18, 0x05,
      70,   52,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PreprocessorCache[] = {
    "PreprocessorCache\0\0type,text\0"
    "error(QString,QString)\0contents,filename\0"
    "readFile(QByteArray&,QString)\0"
};

void PreprocessorCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreprocessorCache *_t = static_cast<PreprocessorCache *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->readFile((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreprocessorCache::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreprocessorCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PreprocessorCache,
      qt_meta_data_PreprocessorCache, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreprocessorCache::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreprocessorCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreprocessorCache::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreprocessorCache))
        return static_cast<void*>(const_cast< PreprocessorCache*>(this));
    return QObject::qt_metacast(_clname);
}

int PreprocessorCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PreprocessorCache::error(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PreprocessorCache::readFile(QByteArray & _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_PreprocessorController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   57,   23,   23, 0x0a,
     203,  185,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PreprocessorController[] = {
    "PreprocessorController\0\0type,text\0"
    "error(QString,QString)\0"
    "includee,includer,filename,includeType\0"
    "includeSlot(Rpp::Source*&,const Rpp::Source*,QString,Rpp::RppTreeEvalu"
    "ator::IncludeType)\0"
    "contents,filename\0readFile(QByteArray&,QString)\0"
};

void PreprocessorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreprocessorController *_t = static_cast<PreprocessorController *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->includeSlot((*reinterpret_cast< Rpp::Source*(*)>(_a[1])),(*reinterpret_cast< const Rpp::Source*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< Rpp::RppTreeEvaluator::IncludeType(*)>(_a[4]))); break;
        case 2: _t->readFile((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreprocessorController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreprocessorController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PreprocessorController,
      qt_meta_data_PreprocessorController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreprocessorController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreprocessorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreprocessorController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreprocessorController))
        return static_cast<void*>(const_cast< PreprocessorController*>(this));
    return QObject::qt_metacast(_clname);
}

int PreprocessorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PreprocessorController::error(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_StandardOutErrorHandler[] = {

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
      35,   25,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StandardOutErrorHandler[] = {
    "StandardOutErrorHandler\0\0type,text\0"
    "error(QString,QString)\0"
};

void StandardOutErrorHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StandardOutErrorHandler *_t = static_cast<StandardOutErrorHandler *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StandardOutErrorHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StandardOutErrorHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StandardOutErrorHandler,
      qt_meta_data_StandardOutErrorHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StandardOutErrorHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StandardOutErrorHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StandardOutErrorHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StandardOutErrorHandler))
        return static_cast<void*>(const_cast< StandardOutErrorHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int StandardOutErrorHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
