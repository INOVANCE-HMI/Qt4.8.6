/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   23,   11,   11, 0x0a,
      56,   23,   11,   11, 0x0a,
      78,   23,   11,   11, 0x0a,
     104,   23,   11,   11, 0x0a,
     127,   11,   11,   11, 0x0a,
     142,   11,   11,   11, 0x0a,
     183,  176,   11,   11, 0x0a,
     213,   11,   11,   11, 0x08,
     228,   11,   11,   11, 0x08,
     240,   11,   11,   11, 0x08,
     253,   11,   11,   11, 0x08,
     269,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,
     301,   11,   11,   11, 0x08,
     319,   11,   11,   11, 0x08,
     336,   11,   11,   11, 0x08,
     358,  354,   11,   11, 0x08,
     393,  379,   11,   11, 0x08,
     438,   11,   11,   11, 0x08,
     475,  462,   11,   11, 0x08,
     504,   11,   11,   11, 0x08,
     523,   11,   11,   11, 0x08,
     551,   11,   11,   11, 0x08,
     569,   11,   11,   11, 0x08,
     588,   11,   11,   11, 0x08,
     637,  615,   11,   11, 0x08,
     686,  676,   11,   11, 0x08,
     710,   11,   11,   11, 0x08,
     741,  727,   11,   11, 0x08,
     771,  727,   11,   11, 0x08,
     801,   11,   11,   11, 0x08,
     827,   11,   11,   11, 0x08,
     853,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0initDone()\0visible\0"
    "setContentsVisible(bool)\0setIndexVisible(bool)\0"
    "setBookmarksVisible(bool)\0"
    "setSearchVisible(bool)\0syncContents()\0"
    "activateCurrentCentralWidgetTab()\0"
    "filter\0currentFilterChanged(QString)\0"
    "showContents()\0showIndex()\0showSearch()\0"
    "showOpenPages()\0insertLastPages()\0"
    "gotoAddress()\0showPreferences()\0"
    "showNewAddress()\0showAboutDialog()\0"
    "url\0showNewAddress(QUrl)\0links,keyword\0"
    "showTopicChooser(QMap<QString,QUrl>,QString)\0"
    "updateApplicationFont()\0customFilter\0"
    "filterDocumentation(QString)\0"
    "setupFilterCombo()\0lookForNewQtDocumentation()\0"
    "indexingStarted()\0indexingFinished()\0"
    "qtDocumentationInstalled()\0"
    "component,absFileName\0"
    "registerDocumentation(QString,QString)\0"
    "component\0resetQtDocInfo(QString)\0"
    "checkInitState()\0namespaceName\0"
    "documentationRemoved(QString)\0"
    "documentationUpdated(QString)\0"
    "showBookmarksDockWidget()\0"
    "hideBookmarksDockWidget()\0"
    "aboutToShowFileMenu()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->initDone(); break;
        case 1: _t->setContentsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setIndexVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setBookmarksVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setSearchVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->syncContents(); break;
        case 6: _t->activateCurrentCentralWidgetTab(); break;
        case 7: _t->currentFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->showContents(); break;
        case 9: _t->showIndex(); break;
        case 10: _t->showSearch(); break;
        case 11: _t->showOpenPages(); break;
        case 12: _t->insertLastPages(); break;
        case 13: _t->gotoAddress(); break;
        case 14: _t->showPreferences(); break;
        case 15: _t->showNewAddress(); break;
        case 16: _t->showAboutDialog(); break;
        case 17: _t->showNewAddress((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 18: _t->showTopicChooser((*reinterpret_cast< const QMap<QString,QUrl>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->updateApplicationFont(); break;
        case 20: _t->filterDocumentation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->setupFilterCombo(); break;
        case 22: _t->lookForNewQtDocumentation(); break;
        case 23: _t->indexingStarted(); break;
        case 24: _t->indexingFinished(); break;
        case 25: _t->qtDocumentationInstalled(); break;
        case 26: _t->registerDocumentation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 27: _t->resetQtDocInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->checkInitState(); break;
        case 29: _t->documentationRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->documentationUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->showBookmarksDockWidget(); break;
        case 32: _t->hideBookmarksDockWidget(); break;
        case 33: _t->aboutToShowFileMenu(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::initDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
