/****************************************************************************
** Meta object code from reading C++ file 'q3dns.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../network/q3dns.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3dns.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3Dns[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Q3Dns[] = {
    "Q3Dns\0\0resultsReady()\0startQuery()\0"
};

void Q3Dns::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3Dns *_t = static_cast<Q3Dns *>(_o);
        switch (_id) {
        case 0: _t->resultsReady(); break;
        case 1: _t->startQuery(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3Dns::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3Dns::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3Dns,
      qt_meta_data_Q3Dns, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3Dns::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3Dns::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3Dns::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3Dns))
        return static_cast<void*>(const_cast< Q3Dns*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3Dns::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Q3Dns::resultsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Q3DnsSocket[] = {

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
      13,   12,   12,   12, 0x08,
      26,   12,   12,   12, 0x08,
      39,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Q3DnsSocket[] = {
    "Q3DnsSocket\0\0cleanCache()\0retransmit()\0"
    "answer()\0"
};

void Q3DnsSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3DnsSocket *_t = static_cast<Q3DnsSocket *>(_o);
        switch (_id) {
        case 0: _t->cleanCache(); break;
        case 1: _t->retransmit(); break;
        case 2: _t->answer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3DnsSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3DnsSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3DnsSocket,
      qt_meta_data_Q3DnsSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3DnsSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3DnsSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3DnsSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3DnsSocket))
        return static_cast<void*>(const_cast< Q3DnsSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3DnsSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
