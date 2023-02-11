/****************************************************************************
** Meta object code from reading C++ file 'qhelpsearchengine.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qhelpsearchengine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpsearchengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHelpSearchEngine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      37,   18,   18,   18, 0x05,
      56,   18,   18,   18, 0x05,
      80,   75,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   18,   18,   18, 0x0a,
     126,   18,   18,   18, 0x0a,
     153,  143,   18,   18, 0x0a,
     185,   18,   18,   18, 0x0a,
     203,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QHelpSearchEngine[] = {
    "QHelpSearchEngine\0\0indexingStarted()\0"
    "indexingFinished()\0searchingStarted()\0"
    "hits\0searchingFinished(int)\0"
    "reindexDocumentation()\0cancelIndexing()\0"
    "queryList\0search(QList<QHelpSearchQuery>)\0"
    "cancelSearching()\0indexDocumentation()\0"
};

void QHelpSearchEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpSearchEngine *_t = static_cast<QHelpSearchEngine *>(_o);
        switch (_id) {
        case 0: _t->indexingStarted(); break;
        case 1: _t->indexingFinished(); break;
        case 2: _t->searchingStarted(); break;
        case 3: _t->searchingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->reindexDocumentation(); break;
        case 5: _t->cancelIndexing(); break;
        case 6: _t->search((*reinterpret_cast< const QList<QHelpSearchQuery>(*)>(_a[1]))); break;
        case 7: _t->cancelSearching(); break;
        case 8: _t->indexDocumentation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHelpSearchEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHelpSearchEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHelpSearchEngine,
      qt_meta_data_QHelpSearchEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHelpSearchEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHelpSearchEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHelpSearchEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpSearchEngine))
        return static_cast<void*>(const_cast< QHelpSearchEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QHelpSearchEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QHelpSearchEngine::indexingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QHelpSearchEngine::indexingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QHelpSearchEngine::searchingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QHelpSearchEngine::searchingFinished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
