/****************************************************************************
** Meta object code from reading C++ file 'q3http.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../network/q3http.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3http.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3Http[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      31,   26,    7,    7, 0x05,
      76,   26,    7,    7, 0x05,
     110,  108,    7,    7, 0x05,
     136,  108,    7,    7, 0x05,
     162,    7,    7,    7, 0x05,
     182,  108,    7,    7, 0x05,
     208,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     219,    7,    7,    7, 0x0a,
     231,  227,    7,    7, 0x08,
     265,    7,    7,    7, 0x08,
     282,    7,    7,    7, 0x08,
     306,    7,    7,    7, 0x08,
     325,    7,    7,    7, 0x08,
     341,    7,    7,    7, 0x08,
     357,    7,    7,    7, 0x08,
     372,    7,    7,    7, 0x08,
     385,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Q3Http[] = {
    "Q3Http\0\0stateChanged(int)\0resp\0"
    "responseHeaderReceived(Q3HttpResponseHeader)\0"
    "readyRead(Q3HttpResponseHeader)\0,\0"
    "dataSendProgress(int,int)\0"
    "dataReadProgress(int,int)\0requestStarted(int)\0"
    "requestFinished(int,bool)\0done(bool)\0"
    "abort()\0rep\0clientReply(Q3HttpResponseHeader)\0"
    "clientDone(bool)\0clientStateChanged(int)\0"
    "startNextRequest()\0slotReadyRead()\0"
    "slotConnected()\0slotError(int)\0"
    "slotClosed()\0slotBytesWritten(int)\0"
};

void Q3Http::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3Http *_t = static_cast<Q3Http *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->responseHeaderReceived((*reinterpret_cast< const Q3HttpResponseHeader(*)>(_a[1]))); break;
        case 2: _t->readyRead((*reinterpret_cast< const Q3HttpResponseHeader(*)>(_a[1]))); break;
        case 3: _t->dataSendProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->dataReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->requestStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->requestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->abort(); break;
        case 9: _t->clientReply((*reinterpret_cast< const Q3HttpResponseHeader(*)>(_a[1]))); break;
        case 10: _t->clientDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->clientStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->startNextRequest(); break;
        case 13: _t->slotReadyRead(); break;
        case 14: _t->slotConnected(); break;
        case 15: _t->slotError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->slotClosed(); break;
        case 17: _t->slotBytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3Http::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3Http::staticMetaObject = {
    { &Q3NetworkProtocol::staticMetaObject, qt_meta_stringdata_Q3Http,
      qt_meta_data_Q3Http, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3Http::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3Http::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3Http::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3Http))
        return static_cast<void*>(const_cast< Q3Http*>(this));
    return Q3NetworkProtocol::qt_metacast(_clname);
}

int Q3Http::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3NetworkProtocol::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Q3Http::stateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q3Http::responseHeaderReceived(const Q3HttpResponseHeader & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Q3Http::readyRead(const Q3HttpResponseHeader & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Q3Http::dataSendProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Q3Http::dataReadProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Q3Http::requestStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Q3Http::requestFinished(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Q3Http::done(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
