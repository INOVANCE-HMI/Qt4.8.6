/****************************************************************************
** Meta object code from reading C++ file 'q3urloperator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../network/q3urloperator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3urloperator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3UrlOperator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      79,   75,   14,   14, 0x05,
     109,   75,   14,   14, 0x05,
     136,   15,   14,   14, 0x05,
     183,   75,   14,   14, 0x05,
     212,   75,   14,   14, 0x05,
     245,   15,   14,   14, 0x05,
     307,  282,   14,   14, 0x05,
     361,  357,   14,   14, 0x05,
     419,  408,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     484,  481,  455,   14, 0x08,
     528,  520,   14,   14, 0x08,
     572,  481,   14,   14, 0x08,
     606,   14,   14,   14, 0x08,
     623,  621,   14,   14, 0x08,
     655,  481,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Q3UrlOperator[] = {
    "Q3UrlOperator\0\0,res\0"
    "newChildren(Q3ValueList<QUrlInfo>,Q3NetworkOperation*)\0"
    "res\0finished(Q3NetworkOperation*)\0"
    "start(Q3NetworkOperation*)\0"
    "createdDirectory(QUrlInfo,Q3NetworkOperation*)\0"
    "removed(Q3NetworkOperation*)\0"
    "itemChanged(Q3NetworkOperation*)\0"
    "data(QByteArray,Q3NetworkOperation*)\0"
    "bytesDone,bytesTotal,res\0"
    "dataTransferProgress(int,int,Q3NetworkOperation*)\0"
    "lst\0startedNextCopy(Q3PtrList<Q3NetworkOperation>)\0"
    "state,data\0connectionStateChanged(int,QString)\0"
    "const Q3NetworkOperation*\0op\0"
    "startOperation(Q3NetworkOperation*)\0"
    "data,op\0copyGotData(QByteArray,Q3NetworkOperation*)\0"
    "continueCopy(Q3NetworkOperation*)\0"
    "finishedCopy()\0i\0addEntry(Q3ValueList<QUrlInfo>)\0"
    "slotItemChanged(Q3NetworkOperation*)\0"
};

void Q3UrlOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3UrlOperator *_t = static_cast<Q3UrlOperator *>(_o);
        switch (_id) {
        case 0: _t->newChildren((*reinterpret_cast< const Q3ValueList<QUrlInfo>(*)>(_a[1])),(*reinterpret_cast< Q3NetworkOperation*(*)>(_a[2]))); break;
        case 1: _t->finished((*reinterpret_cast< Q3NetworkOperation*(*)>(_a[1]))); break;
        case 2: _t->start((*reinterpret_cast< Q3NetworkOperation*(*)>(_a[1]))); break;
        case 3: _t->createdDirectory((*reinterpret_cast< const QUrlInfo(*)>(_a[1])),(*reinterpret_cast< Q3NetworkOperation*(*)>(_a[2]))); break;
        case 4: _t->removed((*reinterpret_cast< Q3NetworkOperation*(*)>(_a[1]))); break;
        case 5: _t->itemChanged((*reinterpret_cast< Q3NetworkOperation*(*)>(_a[1]))); break;
        case 6: _t->data((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< Q3NetworkOperation*(*)>(_a[2]))); break;
        case 7: _t->dataTransferProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Q3NetworkOperation*(*)>(_a[3]))); break;
        case 8: _t->startedNextCopy((*reinterpret_cast< const Q3PtrList<Q3NetworkOperation>(*)>(_a[1]))); break;
        case 9: _t->connectionStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: { const Q3NetworkOperation* _r = _t->startOperation((*reinterpret_cast< Q3NetworkOperation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const Q3NetworkOperation**>(_a[0]) = _r; }  break;
        case 11: _t->copyGotData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< Q3NetworkOperation*(*)>(_a[2]))); break;
        case 12: _t->continueCopy((*reinterpret_cast< Q3NetworkOperation*(*)>(_a[1]))); break;
        case 13: _t->finishedCopy(); break;
        case 14: _t->addEntry((*reinterpret_cast< const Q3ValueList<QUrlInfo>(*)>(_a[1]))); break;
        case 15: _t->slotItemChanged((*reinterpret_cast< Q3NetworkOperation*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3UrlOperator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3UrlOperator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3UrlOperator,
      qt_meta_data_Q3UrlOperator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3UrlOperator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3UrlOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3UrlOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3UrlOperator))
        return static_cast<void*>(const_cast< Q3UrlOperator*>(this));
    if (!strcmp(_clname, "Q3Url"))
        return static_cast< Q3Url*>(const_cast< Q3UrlOperator*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3UrlOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Q3UrlOperator::newChildren(const Q3ValueList<QUrlInfo> & _t1, Q3NetworkOperation * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q3UrlOperator::finished(Q3NetworkOperation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Q3UrlOperator::start(Q3NetworkOperation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Q3UrlOperator::createdDirectory(const QUrlInfo & _t1, Q3NetworkOperation * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Q3UrlOperator::removed(Q3NetworkOperation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Q3UrlOperator::itemChanged(Q3NetworkOperation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Q3UrlOperator::data(const QByteArray & _t1, Q3NetworkOperation * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Q3UrlOperator::dataTransferProgress(int _t1, int _t2, Q3NetworkOperation * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Q3UrlOperator::startedNextCopy(const Q3PtrList<Q3NetworkOperation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Q3UrlOperator::connectionStateChanged(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
