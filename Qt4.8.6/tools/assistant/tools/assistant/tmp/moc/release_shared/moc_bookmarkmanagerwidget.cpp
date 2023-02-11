/****************************************************************************
** Meta object code from reading C++ file 'bookmarkmanagerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bookmarkmanagerwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkmanagerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkManagerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   23,   22,   22, 0x05,
      43,   23,   22,   22, 0x05,
      67,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   22,   22,   22, 0x08,
     106,   22,   22,   22, 0x08,
     121,   22,   22,   22, 0x08,
     139,   22,   22,   22, 0x08,
     157,   22,   22,   22, 0x08,
     184,  179,   22,   22, 0x08,
     211,  205,   22,   22, 0x08,
     235,   22,   22,   22, 0x28,
     254,  248,   22,   22, 0x08,
     302,  289,   22,   22, 0x08,
     339,  205,   22,   22, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManagerWidget[] = {
    "BookmarkManagerWidget\0\0url\0setSource(QUrl)\0"
    "setSourceInNewTab(QUrl)\0"
    "managerWidgetAboutToClose()\0findNext()\0"
    "findPrevious()\0importBookmarks()\0"
    "exportBookmarks()\0refeshBookmarkCache()\0"
    "text\0textChanged(QString)\0index\0"
    "removeItem(QModelIndex)\0removeItem()\0"
    "point\0customContextMenuRequested(QPoint)\0"
    "index,newTab\0setSourceFromIndex(QModelIndex,bool)\0"
    "setSourceFromIndex(QModelIndex)\0"
};

void BookmarkManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkManagerWidget *_t = static_cast<BookmarkManagerWidget *>(_o);
        switch (_id) {
        case 0: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->managerWidgetAboutToClose(); break;
        case 3: _t->findNext(); break;
        case 4: _t->findPrevious(); break;
        case 5: _t->importBookmarks(); break;
        case 6: _t->exportBookmarks(); break;
        case 7: _t->refeshBookmarkCache(); break;
        case 8: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->removeItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->removeItem(); break;
        case 11: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarkManagerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkManagerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookmarkManagerWidget,
      qt_meta_data_BookmarkManagerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManagerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManagerWidget))
        return static_cast<void*>(const_cast< BookmarkManagerWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BookmarkManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManagerWidget::setSource(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BookmarkManagerWidget::setSourceInNewTab(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarkManagerWidget::managerWidgetAboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
