/****************************************************************************
** Meta object code from reading C++ file 'q3dragobject.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../other/q3dragobject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3dragobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3DragObject[] = {

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

static const char qt_meta_stringdata_Q3DragObject[] = {
    "Q3DragObject\0"
};

void Q3DragObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3DragObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3DragObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3DragObject,
      qt_meta_data_Q3DragObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3DragObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3DragObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3DragObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3DragObject))
        return static_cast<void*>(const_cast< Q3DragObject*>(this));
    if (!strcmp(_clname, "QMimeSource"))
        return static_cast< QMimeSource*>(const_cast< Q3DragObject*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3DragObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3StoredDrag[] = {

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

static const char qt_meta_stringdata_Q3StoredDrag[] = {
    "Q3StoredDrag\0"
};

void Q3StoredDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3StoredDrag::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3StoredDrag::staticMetaObject = {
    { &Q3DragObject::staticMetaObject, qt_meta_stringdata_Q3StoredDrag,
      qt_meta_data_Q3StoredDrag, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3StoredDrag::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3StoredDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3StoredDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3StoredDrag))
        return static_cast<void*>(const_cast< Q3StoredDrag*>(this));
    return Q3DragObject::qt_metacast(_clname);
}

int Q3StoredDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3DragObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3TextDrag[] = {

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

static const char qt_meta_stringdata_Q3TextDrag[] = {
    "Q3TextDrag\0"
};

void Q3TextDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3TextDrag::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3TextDrag::staticMetaObject = {
    { &Q3DragObject::staticMetaObject, qt_meta_stringdata_Q3TextDrag,
      qt_meta_data_Q3TextDrag, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3TextDrag::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3TextDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3TextDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3TextDrag))
        return static_cast<void*>(const_cast< Q3TextDrag*>(this));
    return Q3DragObject::qt_metacast(_clname);
}

int Q3TextDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3DragObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3ImageDrag[] = {

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

static const char qt_meta_stringdata_Q3ImageDrag[] = {
    "Q3ImageDrag\0"
};

void Q3ImageDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3ImageDrag::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3ImageDrag::staticMetaObject = {
    { &Q3DragObject::staticMetaObject, qt_meta_stringdata_Q3ImageDrag,
      qt_meta_data_Q3ImageDrag, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3ImageDrag::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3ImageDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3ImageDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3ImageDrag))
        return static_cast<void*>(const_cast< Q3ImageDrag*>(this));
    return Q3DragObject::qt_metacast(_clname);
}

int Q3ImageDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3DragObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3UriDrag[] = {

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

static const char qt_meta_stringdata_Q3UriDrag[] = {
    "Q3UriDrag\0"
};

void Q3UriDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3UriDrag::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3UriDrag::staticMetaObject = {
    { &Q3StoredDrag::staticMetaObject, qt_meta_stringdata_Q3UriDrag,
      qt_meta_data_Q3UriDrag, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3UriDrag::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3UriDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3UriDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3UriDrag))
        return static_cast<void*>(const_cast< Q3UriDrag*>(this));
    return Q3StoredDrag::qt_metacast(_clname);
}

int Q3UriDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3StoredDrag::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3ColorDrag[] = {

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

static const char qt_meta_stringdata_Q3ColorDrag[] = {
    "Q3ColorDrag\0"
};

void Q3ColorDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3ColorDrag::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3ColorDrag::staticMetaObject = {
    { &Q3StoredDrag::staticMetaObject, qt_meta_stringdata_Q3ColorDrag,
      qt_meta_data_Q3ColorDrag, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3ColorDrag::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3ColorDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3ColorDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3ColorDrag))
        return static_cast<void*>(const_cast< Q3ColorDrag*>(this));
    return Q3StoredDrag::qt_metacast(_clname);
}

int Q3ColorDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3StoredDrag::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
