/****************************************************************************
** Meta object code from reading C++ file 'actionrepository_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/actionrepository_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actionrepository_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__ActionModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   33,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ActionModel[] = {
    "qdesigner_internal::ActionModel\0\0"
    "path,action\0resourceImageDropped(QString,QAction*)\0"
};

void qdesigner_internal::ActionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionModel *_t = static_cast<ActionModel *>(_o);
        switch (_id) {
        case 0: _t->resourceImageDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ActionModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ActionModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionModel,
      qt_meta_data_qdesigner_internal__ActionModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ActionModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ActionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ActionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionModel))
        return static_cast<void*>(const_cast< ActionModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int qdesigner_internal::ActionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ActionModel::resourceImageDropped(const QString & _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_qdesigner_internal__ActionTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   36,   35,   35, 0x05,
     100,   93,   35,   35, 0x05,
     125,   93,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,  145,   35,   35, 0x0a,
     183,  166,   35,   35, 0x09,
     223,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ActionTreeView[] = {
    "qdesigner_internal::ActionTreeView\0\0"
    "event,\0contextMenuRequested(QContextMenuEvent*,QAction*)\0"
    "action\0currentChanged(QAction*)\0"
    "activated(QAction*)\0text\0filter(QString)\0"
    "current,previous\0"
    "currentChanged(QModelIndex,QModelIndex)\0"
    "slotActivated(QModelIndex)\0"
};

void qdesigner_internal::ActionTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionTreeView *_t = static_cast<ActionTreeView *>(_o);
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->slotActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ActionTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ActionTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionTreeView,
      qt_meta_data_qdesigner_internal__ActionTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ActionTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ActionTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ActionTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionTreeView))
        return static_cast<void*>(const_cast< ActionTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int qdesigner_internal::ActionTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ActionTreeView::contextMenuRequested(QContextMenuEvent * _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ActionTreeView::currentChanged(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ActionTreeView::activated(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_qdesigner_internal__ActionListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   36,   35,   35, 0x05,
     100,   93,   35,   35, 0x05,
     125,   93,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,  145,   35,   35, 0x0a,
     183,  166,   35,   35, 0x09,
     223,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ActionListView[] = {
    "qdesigner_internal::ActionListView\0\0"
    "event,\0contextMenuRequested(QContextMenuEvent*,QAction*)\0"
    "action\0currentChanged(QAction*)\0"
    "activated(QAction*)\0text\0filter(QString)\0"
    "current,previous\0"
    "currentChanged(QModelIndex,QModelIndex)\0"
    "slotActivated(QModelIndex)\0"
};

void qdesigner_internal::ActionListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionListView *_t = static_cast<ActionListView *>(_o);
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->slotActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ActionListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ActionListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionListView,
      qt_meta_data_qdesigner_internal__ActionListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ActionListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ActionListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ActionListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionListView))
        return static_cast<void*>(const_cast< ActionListView*>(this));
    return QListView::qt_metacast(_clname);
}

int qdesigner_internal::ActionListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ActionListView::contextMenuRequested(QContextMenuEvent * _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ActionListView::currentChanged(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ActionListView::activated(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_qdesigner_internal__ActionView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   32,   31,   31, 0x05,
      96,   89,   31,   31, 0x05,
     121,   89,   31,   31, 0x05,
     161,  141,   31,   31, 0x05,
     221,  209,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
     265,  260,   31,   31, 0x0a,
     281,   31,   31,   31, 0x0a,
     293,   31,   31,   31, 0x0a,
     310,   89,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ActionView[] = {
    "qdesigner_internal::ActionView\0\0event,\0"
    "contextMenuRequested(QContextMenuEvent*,QAction*)\0"
    "action\0currentChanged(QAction*)\0"
    "activated(QAction*)\0selected,deselected\0"
    "selectionChanged(QItemSelection,QItemSelection)\0"
    "data,action\0resourceImageDropped(QString,QAction*)\0"
    "text\0filter(QString)\0selectAll()\0"
    "clearSelection()\0slotCurrentChanged(QAction*)\0"
};

void qdesigner_internal::ActionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionView *_t = static_cast<ActionView *>(_o);
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->resourceImageDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 5: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->selectAll(); break;
        case 7: _t->clearSelection(); break;
        case 8: _t->slotCurrentChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ActionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ActionView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionView,
      qt_meta_data_qdesigner_internal__ActionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ActionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ActionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ActionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionView))
        return static_cast<void*>(const_cast< ActionView*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int qdesigner_internal::ActionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
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
void qdesigner_internal::ActionView::contextMenuRequested(QContextMenuEvent * _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ActionView::currentChanged(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ActionView::activated(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qdesigner_internal::ActionView::selectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qdesigner_internal::ActionView::resourceImageDropped(const QString & _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_qdesigner_internal__ActionRepositoryMimeData[] = {

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

static const char qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData[] = {
    "qdesigner_internal::ActionRepositoryMimeData\0"
};

void qdesigner_internal::ActionRepositoryMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qdesigner_internal::ActionRepositoryMimeData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ActionRepositoryMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData,
      qt_meta_data_qdesigner_internal__ActionRepositoryMimeData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ActionRepositoryMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ActionRepositoryMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ActionRepositoryMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData))
        return static_cast<void*>(const_cast< ActionRepositoryMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int qdesigner_internal::ActionRepositoryMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
