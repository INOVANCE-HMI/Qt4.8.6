/****************************************************************************
** Meta object code from reading C++ file 'helpviewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../helpviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,
      50,   41,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   11,   11,   11, 0x0a,
      76,   11,   11,   11, 0x0a,
      83,   11,   11,   11, 0x0a,
      93,   11,   11,   11, 0x0a,
     104,   11,   11,   11, 0x08,
     120,   11,   11,   11, 0x08,
     140,  137,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HelpViewer[] = {
    "HelpViewer\0\0titleChanged()\0loadStarted()\0"
    "finished\0loadFinished(bool)\0copy()\0"
    "home()\0forward()\0backward()\0actionChanged()\0"
    "setLoadStarted()\0ok\0setLoadFinished(bool)\0"
};

void HelpViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelpViewer *_t = static_cast<HelpViewer *>(_o);
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->loadStarted(); break;
        case 2: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->copy(); break;
        case 4: _t->home(); break;
        case 5: _t->forward(); break;
        case 6: _t->backward(); break;
        case 7: _t->actionChanged(); break;
        case 8: _t->setLoadStarted(); break;
        case 9: _t->setLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HelpViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelpViewer::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_HelpViewer,
      qt_meta_data_HelpViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpViewer))
        return static_cast<void*>(const_cast< HelpViewer*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int HelpViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HelpViewer::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HelpViewer::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void HelpViewer::loadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
