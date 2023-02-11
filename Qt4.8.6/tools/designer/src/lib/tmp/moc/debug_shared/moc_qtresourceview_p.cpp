/****************************************************************************
** Meta object code from reading C++ file 'qtresourceview_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qtresourceview_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtresourceview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtResourceView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,
      51,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   15,   15,   15, 0x08,
     119,   15,   15,   15, 0x08,
     160,   15,   15,   15, 0x08,
     205,   15,   15,   15, 0x08,
     245,   15,   15,   15, 0x08,
     265,   15,   15,   15, 0x08,
     287,   15,   15,   15, 0x08,
     314,  310,   15,   15, 0x08,
     365,  357,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtResourceView[] = {
    "QtResourceView\0\0resource\0"
    "resourceSelected(QString)\0"
    "resourceActivated(QString)\0"
    "slotResourceSetActivated(QtResourceSet*)\0"
    "slotCurrentPathChanged(QTreeWidgetItem*)\0"
    "slotCurrentResourceChanged(QListWidgetItem*)\0"
    "slotResourceActivated(QListWidgetItem*)\0"
    "slotEditResources()\0slotReloadResources()\0"
    "slotCopyResourcePath()\0pos\0"
    "slotListWidgetContextMenuRequested(QPoint)\0"
    "pattern\0slotFilterChanged(QString)\0"
};

void QtResourceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtResourceView *_t = static_cast<QtResourceView *>(_o);
        switch (_id) {
        case 0: _t->resourceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->resourceActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->slotResourceSetActivated((*reinterpret_cast< QtResourceSet*(*)>(_a[1]))); break;
        case 3: _t->d_func()->slotCurrentPathChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->d_func()->slotCurrentResourceChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->d_func()->slotResourceActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->d_func()->slotEditResources(); break;
        case 7: _t->d_func()->slotReloadResources(); break;
        case 8: _t->d_func()->slotCopyResourcePath(); break;
        case 9: _t->d_func()->slotListWidgetContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->d_func()->slotFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtResourceView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtResourceView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtResourceView,
      qt_meta_data_QtResourceView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtResourceView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtResourceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtResourceView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtResourceView))
        return static_cast<void*>(const_cast< QtResourceView*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtResourceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QtResourceView::resourceSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtResourceView::resourceActivated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QtResourceViewDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtResourceViewDialog[] = {
    "QtResourceViewDialog\0\0"
    "slotResourceSelected(QString)\0"
};

void QtResourceViewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtResourceViewDialog *_t = static_cast<QtResourceViewDialog *>(_o);
        switch (_id) {
        case 0: _t->d_func()->slotResourceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtResourceViewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtResourceViewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QtResourceViewDialog,
      qt_meta_data_QtResourceViewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtResourceViewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtResourceViewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtResourceViewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtResourceViewDialog))
        return static_cast<void*>(const_cast< QtResourceViewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QtResourceViewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
