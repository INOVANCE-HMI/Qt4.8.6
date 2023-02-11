/****************************************************************************
** Meta object code from reading C++ file 'openpagesmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../openpagesmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openpagesmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenPagesManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   30,   18,   17, 0x0a,
      71,   67,   18,   17, 0x2a,
      88,   67,   18,   17, 0x0a,
     118,   17,   18,   17, 0x0a,
     131,   17,   17,   17, 0x0a,
     150,   17,   17,   17, 0x0a,
     161,   17,   17,   17, 0x0a,
     184,   17,   17,   17, 0x0a,
     199,   17,   17,   17, 0x0a,
     231,  226,   17,   17, 0x0a,
     254,  226,   17,   17, 0x0a,
     288,  282,   17,   17, 0x08,
     316,  282,   17,   17, 0x08,
     339,  282,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenPagesManager[] = {
    "OpenPagesManager\0\0HelpViewer*\0"
    "url,fromSearch\0createPage(QUrl,bool)\0"
    "url\0createPage(QUrl)\0createNewPageFromSearch(QUrl)\0"
    "createPage()\0closeCurrentPage()\0"
    "nextPage()\0nextPageWithSwitcher()\0"
    "previousPage()\0previousPageWithSwitcher()\0"
    "page\0closePage(HelpViewer*)\0"
    "setCurrentPage(HelpViewer*)\0index\0"
    "setCurrentPage(QModelIndex)\0"
    "closePage(QModelIndex)\0"
    "closePagesExcept(QModelIndex)\0"
};

void OpenPagesManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenPagesManager *_t = static_cast<OpenPagesManager *>(_o);
        switch (_id) {
        case 0: { HelpViewer* _r = _t->createPage((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = _r; }  break;
        case 1: { HelpViewer* _r = _t->createPage((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = _r; }  break;
        case 2: { HelpViewer* _r = _t->createNewPageFromSearch((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = _r; }  break;
        case 3: { HelpViewer* _r = _t->createPage();
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = _r; }  break;
        case 4: _t->closeCurrentPage(); break;
        case 5: _t->nextPage(); break;
        case 6: _t->nextPageWithSwitcher(); break;
        case 7: _t->previousPage(); break;
        case 8: _t->previousPageWithSwitcher(); break;
        case 9: _t->closePage((*reinterpret_cast< HelpViewer*(*)>(_a[1]))); break;
        case 10: _t->setCurrentPage((*reinterpret_cast< HelpViewer*(*)>(_a[1]))); break;
        case 11: _t->setCurrentPage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->closePage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->closePagesExcept((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenPagesManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenPagesManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenPagesManager,
      qt_meta_data_OpenPagesManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenPagesManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenPagesManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenPagesManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenPagesManager))
        return static_cast<void*>(const_cast< OpenPagesManager*>(this));
    return QObject::qt_metacast(_clname);
}

int OpenPagesManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
