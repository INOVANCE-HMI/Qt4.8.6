/****************************************************************************
** Meta object code from reading C++ file 'q3header.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/q3header.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3header.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3Header[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x05,
      31,   10,    9,    9, 0x05,
      44,   10,    9,    9, 0x05,
      82,   58,    9,    9, 0x05,
     132,  106,    9,    9, 0x05,
     157,    9,    9,    9, 0x05,
     179,  177,    9,    9, 0x05,
     194,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     233,  226,    9,    9, 0x0a,
     261,  257,    9,    9, 0x0a,

 // properties: name, type, flags
     292,  276, 0x0009510b,
     309,  304, 0x01095103,
     322,  318, 0x02095001,
     328,  318, 0x02095103,
     335,  304, 0x01095003,
     342,  304, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_Q3Header[] = {
    "Q3Header\0\0section\0clicked(int)\0"
    "pressed(int)\0released(int)\0"
    "section,oldSize,newSize\0sizeChange(int,int,int)\0"
    "section,fromIndex,toIndex\0"
    "indexChange(int,int,int)\0sectionClicked(int)\0"
    ",\0moved(int,int)\0sectionHandleDoubleClicked(int)\0"
    "enable\0setUpdatesEnabled(bool)\0pos\0"
    "setOffset(int)\0Qt::Orientation\0"
    "orientation\0bool\0tracking\0int\0count\0"
    "offset\0moving\0stretching\0"
};

void Q3Header::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3Header *_t = static_cast<Q3Header *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->released((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sizeChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->indexChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->sectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->moved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->sectionHandleDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setUpdatesEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3Header::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3Header::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Q3Header,
      qt_meta_data_Q3Header, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3Header::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3Header::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3Header::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3Header))
        return static_cast<void*>(const_cast< Q3Header*>(this));
    return QWidget::qt_metacast(_clname);
}

int Q3Header::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 1: *reinterpret_cast< bool*>(_v) = tracking(); break;
        case 2: *reinterpret_cast< int*>(_v) = count(); break;
        case 3: *reinterpret_cast< int*>(_v) = offset(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isMovingEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isStretchEnabled(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 3: setOffset(*reinterpret_cast< int*>(_v)); break;
        case 4: setMovingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: setStretchEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Q3Header::clicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q3Header::pressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Q3Header::released(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Q3Header::sizeChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Q3Header::indexChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Q3Header::sectionClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Q3Header::moved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Q3Header::sectionHandleDoubleClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
