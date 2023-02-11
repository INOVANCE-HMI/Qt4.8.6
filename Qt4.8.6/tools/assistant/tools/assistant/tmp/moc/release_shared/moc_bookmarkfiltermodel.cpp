/****************************************************************************
** Meta object code from reading C++ file 'bookmarkfiltermodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bookmarkfiltermodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkfiltermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkFilterModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   21,   20,   20, 0x08,
      91,   74,   20,   20, 0x08,
     125,   74,   20,   20, 0x08,
     167,   74,   20,   20, 0x08,
     200,   20,   20,   20, 0x08,
     225,   20,   20,   20, 0x08,
     241,   20,   20,   20, 0x08,
     263,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkFilterModel[] = {
    "BookmarkFilterModel\0\0topLeft,bottomRight\0"
    "changed(QModelIndex,QModelIndex)\0"
    "parent,start,end\0rowsInserted(QModelIndex,int,int)\0"
    "rowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "rowsRemoved(QModelIndex,int,int)\0"
    "layoutAboutToBeChanged()\0layoutChanged()\0"
    "modelAboutToBeReset()\0modelReset()\0"
};

void BookmarkFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkFilterModel *_t = static_cast<BookmarkFilterModel *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->layoutAboutToBeChanged(); break;
        case 5: _t->layoutChanged(); break;
        case 6: _t->modelAboutToBeReset(); break;
        case 7: _t->modelReset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarkFilterModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkFilterModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_BookmarkFilterModel,
      qt_meta_data_BookmarkFilterModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkFilterModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkFilterModel))
        return static_cast<void*>(const_cast< BookmarkFilterModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int BookmarkFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_BookmarkTreeModel[] = {

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

static const char qt_meta_stringdata_BookmarkTreeModel[] = {
    "BookmarkTreeModel\0"
};

void BookmarkTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BookmarkTreeModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkTreeModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_BookmarkTreeModel,
      qt_meta_data_BookmarkTreeModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkTreeModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkTreeModel))
        return static_cast<void*>(const_cast< BookmarkTreeModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int BookmarkTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
