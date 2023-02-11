/****************************************************************************
** Meta object code from reading C++ file 'qhelpsearchindexreader_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qhelpsearchindexreader_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpsearchindexreader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fulltextsearch__QHelpSearchIndexReader[] = {

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
      40,   39,   39,   39, 0x05,
      64,   59,   39,   39, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader[] = {
    "fulltextsearch::QHelpSearchIndexReader\0"
    "\0searchingStarted()\0hits\0"
    "searchingFinished(int)\0"
};

void fulltextsearch::QHelpSearchIndexReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpSearchIndexReader *_t = static_cast<QHelpSearchIndexReader *>(_o);
        switch (_id) {
        case 0: _t->searchingStarted(); break;
        case 1: _t->searchingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fulltextsearch::QHelpSearchIndexReader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fulltextsearch::QHelpSearchIndexReader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader,
      qt_meta_data_fulltextsearch__QHelpSearchIndexReader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fulltextsearch::QHelpSearchIndexReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fulltextsearch::QHelpSearchIndexReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fulltextsearch::QHelpSearchIndexReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader))
        return static_cast<void*>(const_cast< QHelpSearchIndexReader*>(this));
    return QThread::qt_metacast(_clname);
}

int fulltextsearch::QHelpSearchIndexReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void fulltextsearch::QHelpSearchIndexReader::searchingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void fulltextsearch::QHelpSearchIndexReader::searchingFinished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
