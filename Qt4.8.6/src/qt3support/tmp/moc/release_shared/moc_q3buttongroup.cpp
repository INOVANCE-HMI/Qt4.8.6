/****************************************************************************
** Meta object code from reading C++ file 'q3buttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/q3buttongroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3buttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3ButtonGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   15,   14,   14, 0x05,
      31,   15,   14,   14, 0x05,
      45,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   14,   14,   14, 0x09,
      74,   14,   14,   14, 0x09,
      91,   14,   14,   14, 0x09,
     107,   14,   14,   14, 0x08,

 // properties: name, type, flags
     130,  125, 0x01095103,
     140,  125, 0x01095103,
     165,  161, 0x02095003,

       0        // eod
};

static const char qt_meta_stringdata_Q3ButtonGroup[] = {
    "Q3ButtonGroup\0\0id\0pressed(int)\0"
    "released(int)\0clicked(int)\0buttonPressed()\0"
    "buttonReleased()\0buttonClicked()\0"
    "buttonDestroyed()\0bool\0exclusive\0"
    "radioButtonExclusive\0int\0selectedId\0"
};

void Q3ButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3ButtonGroup *_t = static_cast<Q3ButtonGroup *>(_o);
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->released((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->buttonPressed(); break;
        case 4: _t->buttonReleased(); break;
        case 5: _t->buttonClicked(); break;
        case 6: _t->buttonDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3ButtonGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3ButtonGroup::staticMetaObject = {
    { &Q3GroupBox::staticMetaObject, qt_meta_stringdata_Q3ButtonGroup,
      qt_meta_data_Q3ButtonGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3ButtonGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3ButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3ButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3ButtonGroup))
        return static_cast<void*>(const_cast< Q3ButtonGroup*>(this));
    return Q3GroupBox::qt_metacast(_clname);
}

int Q3ButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3GroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isExclusive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isRadioButtonExclusive(); break;
        case 2: *reinterpret_cast< int*>(_v) = selectedId(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setExclusive(*reinterpret_cast< bool*>(_v)); break;
        case 1: setRadioButtonExclusive(*reinterpret_cast< bool*>(_v)); break;
        case 2: setButton(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Q3ButtonGroup::pressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q3ButtonGroup::released(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Q3ButtonGroup::clicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Q3VButtonGroup[] = {

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

static const char qt_meta_stringdata_Q3VButtonGroup[] = {
    "Q3VButtonGroup\0"
};

void Q3VButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3VButtonGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3VButtonGroup::staticMetaObject = {
    { &Q3ButtonGroup::staticMetaObject, qt_meta_stringdata_Q3VButtonGroup,
      qt_meta_data_Q3VButtonGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3VButtonGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3VButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3VButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3VButtonGroup))
        return static_cast<void*>(const_cast< Q3VButtonGroup*>(this));
    return Q3ButtonGroup::qt_metacast(_clname);
}

int Q3VButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ButtonGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3HButtonGroup[] = {

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

static const char qt_meta_stringdata_Q3HButtonGroup[] = {
    "Q3HButtonGroup\0"
};

void Q3HButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3HButtonGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3HButtonGroup::staticMetaObject = {
    { &Q3ButtonGroup::staticMetaObject, qt_meta_stringdata_Q3HButtonGroup,
      qt_meta_data_Q3HButtonGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3HButtonGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3HButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3HButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3HButtonGroup))
        return static_cast<void*>(const_cast< Q3HButtonGroup*>(this));
    return Q3ButtonGroup::qt_metacast(_clname);
}

int Q3HButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ButtonGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
