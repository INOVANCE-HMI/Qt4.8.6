/****************************************************************************
** Meta object code from reading C++ file 'qhelpcontentwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qhelpcontentwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpcontentwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHelpContentModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      45,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   18,   18,   18, 0x08,
      91,   80,   18,   18, 0x08,
     116,   18,   18,   18, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_QHelpContentModel[] = {
    "QHelpContentModel\0\0contentsCreationStarted()\0"
    "contentsCreated()\0insertContents()\0"
    "onShutDown\0invalidateContents(bool)\0"
    "invalidateContents()\0"
};

void QHelpContentModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpContentModel *_t = static_cast<QHelpContentModel *>(_o);
        switch (_id) {
        case 0: _t->contentsCreationStarted(); break;
        case 1: _t->contentsCreated(); break;
        case 2: _t->insertContents(); break;
        case 3: _t->invalidateContents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->invalidateContents(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHelpContentModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHelpContentModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QHelpContentModel,
      qt_meta_data_QHelpContentModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHelpContentModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHelpContentModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHelpContentModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpContentModel))
        return static_cast<void*>(const_cast< QHelpContentModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QHelpContentModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QHelpContentModel::contentsCreationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QHelpContentModel::contentsCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QHelpContentWidget[] = {

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
      25,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   45,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QHelpContentWidget[] = {
    "QHelpContentWidget\0\0link\0linkActivated(QUrl)\0"
    "index\0showLink(QModelIndex)\0"
};

void QHelpContentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpContentWidget *_t = static_cast<QHelpContentWidget *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->showLink((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHelpContentWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHelpContentWidget::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QHelpContentWidget,
      qt_meta_data_QHelpContentWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHelpContentWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHelpContentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHelpContentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpContentWidget))
        return static_cast<void*>(const_cast< QHelpContentWidget*>(this));
    return QTreeView::qt_metacast(_clname);
}

int QHelpContentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void QHelpContentWidget::linkActivated(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
