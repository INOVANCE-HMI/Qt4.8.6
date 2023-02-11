/****************************************************************************
** Meta object code from reading C++ file 'bookmarkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bookmarkmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      37,   33,   16,   16, 0x05,
      53,   33,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   77,   16,   16, 0x0a,
     116,   16,   16,   16, 0x08,
     132,   16,   16,   16, 0x08,
     146,   16,   16,   16, 0x08,
     163,   16,   16,   16, 0x08,
     181,   16,   16,   16, 0x08,
     203,   16,   16,   16, 0x08,
     234,  228,   16,   16, 0x08,
     262,   16,   16,   16, 0x08,
     291,  284,   16,   16, 0x08,
     334,  321,   16,   16, 0x08,
     371,  228,   16,   16, 0x28,
     403,   16,   16,   16, 0x08,
     418,   16,   16,   16, 0x08,
     451,  446,   16,   16, 0x08,
     478,  472,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManager[] = {
    "BookmarkManager\0\0escapePressed()\0url\0"
    "setSource(QUrl)\0setSourceInNewTab(QUrl)\0"
    "title,url\0addBookmark(QString,QString)\0"
    "setupFinished()\0addBookmark()\0"
    "removeBookmark()\0manageBookmarks()\0"
    "refreshBookmarkMenu()\0refreshBookmarkToolBar()\0"
    "index\0renameBookmark(QModelIndex)\0"
    "setSourceFromAction()\0action\0"
    "setSourceFromAction(QAction*)\0"
    "index,newTab\0setSourceFromIndex(QModelIndex,bool)\0"
    "setSourceFromIndex(QModelIndex)\0"
    "focusInEvent()\0managerWidgetAboutToClose()\0"
    "text\0textChanged(QString)\0point\0"
    "customContextMenuRequested(QPoint)\0"
};

void BookmarkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkManager *_t = static_cast<BookmarkManager *>(_o);
        switch (_id) {
        case 0: _t->escapePressed(); break;
        case 1: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setupFinished(); break;
        case 5: _t->addBookmark(); break;
        case 6: _t->removeBookmark(); break;
        case 7: _t->manageBookmarks(); break;
        case 8: _t->refreshBookmarkMenu(); break;
        case 9: _t->refreshBookmarkToolBar(); break;
        case 10: _t->renameBookmark((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->setSourceFromAction(); break;
        case 12: _t->setSourceFromAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->focusInEvent(); break;
        case 16: _t->managerWidgetAboutToClose(); break;
        case 17: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarkManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BookmarkManager,
      qt_meta_data_BookmarkManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager))
        return static_cast<void*>(const_cast< BookmarkManager*>(this));
    return QObject::qt_metacast(_clname);
}

int BookmarkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManager::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BookmarkManager::setSource(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarkManager::setSourceInNewTab(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_BookmarkManager__BookmarkWidget[] = {

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
      33,   32,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManager__BookmarkWidget[] = {
    "BookmarkManager::BookmarkWidget\0\0"
    "focusInEvent()\0"
};

void BookmarkManager::BookmarkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkWidget *_t = static_cast<BookmarkWidget *>(_o);
        switch (_id) {
        case 0: _t->focusInEvent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BookmarkManager::BookmarkWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkManager::BookmarkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookmarkManager__BookmarkWidget,
      qt_meta_data_BookmarkManager__BookmarkWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManager::BookmarkWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManager::BookmarkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManager::BookmarkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager__BookmarkWidget))
        return static_cast<void*>(const_cast< BookmarkWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BookmarkManager::BookmarkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BookmarkManager::BookmarkWidget::focusInEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_BookmarkManager__BookmarkTreeView[] = {

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
      41,   35,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManager__BookmarkTreeView[] = {
    "BookmarkManager::BookmarkTreeView\0\0"
    "index\0setExpandedData(QModelIndex)\0"
};

void BookmarkManager::BookmarkTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkTreeView *_t = static_cast<BookmarkTreeView *>(_o);
        switch (_id) {
        case 0: _t->setExpandedData((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarkManager::BookmarkTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkManager::BookmarkTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_BookmarkManager__BookmarkTreeView,
      qt_meta_data_BookmarkManager__BookmarkTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManager::BookmarkTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManager::BookmarkTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManager::BookmarkTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager__BookmarkTreeView))
        return static_cast<void*>(const_cast< BookmarkTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int BookmarkManager::BookmarkTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
