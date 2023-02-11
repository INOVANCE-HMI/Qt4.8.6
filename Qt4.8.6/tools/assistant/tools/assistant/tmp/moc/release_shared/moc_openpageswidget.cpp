/****************************************************************************
** Meta object code from reading C++ file 'openpageswidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../openpageswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openpageswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenPagesDelegate[] = {

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

static const char qt_meta_stringdata_OpenPagesDelegate[] = {
    "OpenPagesDelegate\0"
};

void OpenPagesDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OpenPagesDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenPagesDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_OpenPagesDelegate,
      qt_meta_data_OpenPagesDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenPagesDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenPagesDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenPagesDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenPagesDelegate))
        return static_cast<void*>(const_cast< OpenPagesDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int OpenPagesDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_OpenPagesWidget[] = {

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
      23,   17,   16,   16, 0x05,
      51,   17,   16,   16, 0x05,
      74,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,  104,   16,   16, 0x08,
     137,   17,   16,   16, 0x08,
     164,   17,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenPagesWidget[] = {
    "OpenPagesWidget\0\0index\0"
    "setCurrentPage(QModelIndex)\0"
    "closePage(QModelIndex)\0"
    "closePagesExcept(QModelIndex)\0pos\0"
    "contextMenuRequested(QPoint)\0"
    "handlePressed(QModelIndex)\0"
    "handleClicked(QModelIndex)\0"
};

void OpenPagesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenPagesWidget *_t = static_cast<OpenPagesWidget *>(_o);
        switch (_id) {
        case 0: _t->setCurrentPage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->closePage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->closePagesExcept((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->contextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->handlePressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->handleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenPagesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenPagesWidget::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_OpenPagesWidget,
      qt_meta_data_OpenPagesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenPagesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenPagesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenPagesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenPagesWidget))
        return static_cast<void*>(const_cast< OpenPagesWidget*>(this));
    return QTreeView::qt_metacast(_clname);
}

int OpenPagesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OpenPagesWidget::setCurrentPage(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenPagesWidget::closePage(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenPagesWidget::closePagesExcept(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
