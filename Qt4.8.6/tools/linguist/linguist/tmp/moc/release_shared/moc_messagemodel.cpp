/****************************************************************************
** Meta object code from reading C++ file 'messagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../messagemodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      54,   11,   10,   10, 0x05,
     123,   92,   10,   10, 0x05,
     148,   10,   10,   10, 0x05,
     166,   10,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DataModel[] = {
    "DataModel\0\0words,characters,cs,words2,characters2,cs2\0"
    "statsChanged(int,int,int,int,int,int)\0"
    "finishedCount,oldFinishedCount\0"
    "progressChanged(int,int)\0languageChanged()\0"
    "modifiedChanged()\0"
};

void DataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataModel *_t = static_cast<DataModel *>(_o);
        switch (_id) {
        case 0: _t->statsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->languageChanged(); break;
        case 3: _t->modifiedChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataModel,
      qt_meta_data_DataModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataModel))
        return static_cast<void*>(const_cast< DataModel*>(this));
    return QObject::qt_metacast(_clname);
}

int DataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataModel::statsChanged(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataModel::progressChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataModel::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DataModel::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_MultiDataModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      38,   32,   15,   15, 0x05,
      56,   15,   15,   15, 0x05,
      75,   32,   15,   15, 0x05,
     139,   96,   15,   15, 0x05,
     177,   15,   15,   15, 0x05,
     205,  199,   15,   15, 0x05,
     245,  199,   15,   15, 0x05,
     280,  199,   15,   15, 0x05,
     315,  199,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     350,   15,   15,   15, 0x08,
     370,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MultiDataModel[] = {
    "MultiDataModel\0\0modelAppended()\0model\0"
    "modelDeleted(int)\0allModelsDeleted()\0"
    "languageChanged(int)\0"
    "words,characters,cs,words2,characters2,cs2\0"
    "statsChanged(int,int,int,int,int,int)\0"
    "modifiedChanged(bool)\0index\0"
    "multiContextDataChanged(MultiDataIndex)\0"
    "contextDataChanged(MultiDataIndex)\0"
    "messageDataChanged(MultiDataIndex)\0"
    "translationChanged(MultiDataIndex)\0"
    "onModifiedChanged()\0onLanguageChanged()\0"
};

void MultiDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultiDataModel *_t = static_cast<MultiDataModel *>(_o);
        switch (_id) {
        case 0: _t->modelAppended(); break;
        case 1: _t->modelDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->allModelsDeleted(); break;
        case 3: _t->languageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->statsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 5: _t->modifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->multiContextDataChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 7: _t->contextDataChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 8: _t->messageDataChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 9: _t->translationChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 10: _t->onModifiedChanged(); break;
        case 11: _t->onLanguageChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MultiDataModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MultiDataModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MultiDataModel,
      qt_meta_data_MultiDataModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiDataModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiDataModel))
        return static_cast<void*>(const_cast< MultiDataModel*>(this));
    return QObject::qt_metacast(_clname);
}

int MultiDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MultiDataModel::modelAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MultiDataModel::modelDeleted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiDataModel::allModelsDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MultiDataModel::languageChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MultiDataModel::statsChanged(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MultiDataModel::modifiedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MultiDataModel::multiContextDataChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MultiDataModel::contextDataChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MultiDataModel::messageDataChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MultiDataModel::translationChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
static const uint qt_meta_data_MessageModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      28,   22,   13,   13, 0x08,
      68,   22,   13,   13, 0x08,
     103,   22,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MessageModel[] = {
    "MessageModel\0\0reset()\0index\0"
    "multiContextItemChanged(MultiDataIndex)\0"
    "contextItemChanged(MultiDataIndex)\0"
    "messageItemChanged(MultiDataIndex)\0"
};

void MessageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageModel *_t = static_cast<MessageModel *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->multiContextItemChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 2: _t->contextItemChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 3: _t->messageItemChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessageModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_MessageModel,
      qt_meta_data_MessageModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageModel))
        return static_cast<void*>(const_cast< MessageModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int MessageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
