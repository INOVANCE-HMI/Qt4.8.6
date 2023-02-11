/****************************************************************************
** Meta object code from reading C++ file 'qhelpindexwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qhelpindexwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpindexwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHelpIndexModel[] = {

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
      17,   16,   16,   16, 0x05,
      40,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   16,   16,   16, 0x08,
      82,   71,   16,   16, 0x08,
     104,   16,   16,   16, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_QHelpIndexModel[] = {
    "QHelpIndexModel\0\0indexCreationStarted()\0"
    "indexCreated()\0insertIndices()\0"
    "onShutDown\0invalidateIndex(bool)\0"
    "invalidateIndex()\0"
};

void QHelpIndexModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpIndexModel *_t = static_cast<QHelpIndexModel *>(_o);
        switch (_id) {
        case 0: _t->indexCreationStarted(); break;
        case 1: _t->indexCreated(); break;
        case 2: _t->insertIndices(); break;
        case 3: _t->invalidateIndex((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->invalidateIndex(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHelpIndexModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHelpIndexModel::staticMetaObject = {
    { &QStringListModel::staticMetaObject, qt_meta_stringdata_QHelpIndexModel,
      qt_meta_data_QHelpIndexModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHelpIndexModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHelpIndexModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHelpIndexModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpIndexModel))
        return static_cast<void*>(const_cast< QHelpIndexModel*>(this));
    return QStringListModel::qt_metacast(_clname);
}

int QHelpIndexModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStringListModel::qt_metacall(_c, _id, _a);
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
void QHelpIndexModel::indexCreationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QHelpIndexModel::indexCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QHelpIndexWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   18,   17,   17, 0x05,
      73,   59,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     132,  116,   17,   17, 0x0a,
     170,  163,   17,   17, 0x2a,
     193,   17,   17,   17, 0x0a,
     221,  215,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QHelpIndexWidget[] = {
    "QHelpIndexWidget\0\0link,keyword\0"
    "linkActivated(QUrl,QString)\0links,keyword\0"
    "linksActivated(QMap<QString,QUrl>,QString)\0"
    "filter,wildcard\0filterIndices(QString,QString)\0"
    "filter\0filterIndices(QString)\0"
    "activateCurrentItem()\0index\0"
    "showLink(QModelIndex)\0"
};

void QHelpIndexWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHelpIndexWidget *_t = static_cast<QHelpIndexWidget *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->linksActivated((*reinterpret_cast< const QMap<QString,QUrl>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->activateCurrentItem(); break;
        case 5: _t->showLink((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHelpIndexWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHelpIndexWidget::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QHelpIndexWidget,
      qt_meta_data_QHelpIndexWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHelpIndexWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHelpIndexWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHelpIndexWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpIndexWidget))
        return static_cast<void*>(const_cast< QHelpIndexWidget*>(this));
    return QListView::qt_metacast(_clname);
}

int QHelpIndexWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QHelpIndexWidget::linkActivated(const QUrl & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHelpIndexWidget::linksActivated(const QMap<QString,QUrl> & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
