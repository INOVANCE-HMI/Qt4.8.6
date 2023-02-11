/****************************************************************************
** Meta object code from reading C++ file 'centralwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../centralwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centralwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabBar[] = {

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
      15,    8,    7,    7, 0x05,
      56,   46,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      85,    7,    7,    7, 0x0a,
     106,  100,    7,    7, 0x08,
     130,  100,    7,    7, 0x08,
     161,  157,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TabBar[] = {
    "TabBar\0\0viewer\0currentTabChanged(HelpViewer*)\0"
    "title,url\0addBookmark(QString,QString)\0"
    "titleChanged()\0index\0slotCurrentChanged(int)\0"
    "slotTabCloseRequested(int)\0pos\0"
    "slotCustomContextMenuRequested(QPoint)\0"
};

void TabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabBar *_t = static_cast<TabBar *>(_o);
        switch (_id) {
        case 0: _t->currentTabChanged((*reinterpret_cast< HelpViewer*(*)>(_a[1]))); break;
        case 1: _t->addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->titleChanged(); break;
        case 3: _t->slotCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotTabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_TabBar,
      qt_meta_data_TabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabBar))
        return static_cast<void*>(const_cast< TabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int TabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
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
void TabBar::currentTabChanged(HelpViewer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TabBar::addBookmark(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_CentralWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      42,   38,   14,   14, 0x05,
      66,   62,   14,   14, 0x05,
      91,   86,   14,   14, 0x05,
     122,  112,   14,   14, 0x05,
     145,  112,   14,   14, 0x05,
     179,  169,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     208,   14,   14,   14, 0x0a,
     215,   14,   14,   14, 0x0a,
     222,   14,   14,   14, 0x0a,
     231,   14,   14,   14, 0x0a,
     241,   14,   14,   14, 0x0a,
     253,   14,   14,   14, 0x0a,
     263,   14,   14,   14, 0x0a,
     274,   14,   14,   14, 0x0a,
     285,   14,   14,   14, 0x0a,
     300,   14,   14,   14, 0x0a,
     308,   14,   14,   14, 0x0a,
     320,   14,   14,   14, 0x0a,
     335,   62,   14,   14, 0x0a,
     351,   62,   14,   14, 0x0a,
     377,   14,   14,   14, 0x0a,
     388,   14,   14,   14, 0x0a,
     428,  403,   14,   14, 0x0a,
     452,   14,   14,   14, 0x0a,
     466,   14,   14,   14, 0x0a,
     483,   14,   14,   14, 0x0a,
     503,   14,   14,   14, 0x0a,
     525,   14,   14,   14, 0x08,
     556,  548,   14,   14, 0x08,
     580,   62,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CentralWidget[] = {
    "CentralWidget\0\0currentViewerChanged()\0"
    "yes\0copyAvailable(bool)\0url\0"
    "sourceChanged(QUrl)\0link\0highlighted(QString)\0"
    "available\0forwardAvailable(bool)\0"
    "backwardAvailable(bool)\0title,url\0"
    "addBookmark(QString,QString)\0copy()\0"
    "home()\0zoomIn()\0zoomOut()\0resetZoom()\0"
    "forward()\0nextPage()\0backward()\0"
    "previousPage()\0print()\0pageSetup()\0"
    "printPreview()\0setSource(QUrl)\0"
    "setSourceFromSearch(QUrl)\0findNext()\0"
    "findPrevious()\0text,forward,incremental\0"
    "find(QString,bool,bool)\0activateTab()\0"
    "showTextSearch()\0updateBrowserFont()\0"
    "updateUserInterface()\0highlightSearchTerms()\0"
    "printer\0printPreview(QPrinter*)\0"
    "handleSourceChanged(QUrl)\0"
};

void CentralWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CentralWidget *_t = static_cast<CentralWidget *>(_o);
        switch (_id) {
        case 0: _t->currentViewerChanged(); break;
        case 1: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->forwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->backwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->copy(); break;
        case 8: _t->home(); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->resetZoom(); break;
        case 12: _t->forward(); break;
        case 13: _t->nextPage(); break;
        case 14: _t->backward(); break;
        case 15: _t->previousPage(); break;
        case 16: _t->print(); break;
        case 17: _t->pageSetup(); break;
        case 18: _t->printPreview(); break;
        case 19: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 20: _t->setSourceFromSearch((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 21: _t->findNext(); break;
        case 22: _t->findPrevious(); break;
        case 23: _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->activateTab(); break;
        case 25: _t->showTextSearch(); break;
        case 26: _t->updateBrowserFont(); break;
        case 27: _t->updateUserInterface(); break;
        case 28: _t->highlightSearchTerms(); break;
        case 29: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 30: _t->handleSourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CentralWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CentralWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CentralWidget,
      qt_meta_data_CentralWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CentralWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CentralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CentralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CentralWidget))
        return static_cast<void*>(const_cast< CentralWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CentralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void CentralWidget::currentViewerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CentralWidget::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CentralWidget::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CentralWidget::highlighted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CentralWidget::forwardAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CentralWidget::backwardAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CentralWidget::addBookmark(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
