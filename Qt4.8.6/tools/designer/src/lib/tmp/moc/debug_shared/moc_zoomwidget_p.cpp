/****************************************************************************
** Meta object code from reading C++ file 'zoomwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/zoomwidget_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__ZoomMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   47,   29,   29, 0x0a,
      68,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ZoomMenu[] = {
    "qdesigner_internal::ZoomMenu\0\0"
    "zoomChanged(int)\0percent\0setZoom(int)\0"
    "slotZoomMenu(QAction*)\0"
};

void qdesigner_internal::ZoomMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoomMenu *_t = static_cast<ZoomMenu *>(_o);
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotZoomMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ZoomMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ZoomMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ZoomMenu,
      qt_meta_data_qdesigner_internal__ZoomMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ZoomMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ZoomMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ZoomMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ZoomMenu))
        return static_cast<void*>(const_cast< ZoomMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::ZoomMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ZoomMenu::zoomChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_qdesigner_internal__ZoomView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   30,   29,   29, 0x0a,
      61,   51,   29,   29, 0x0a,

 // properties: name, type, flags
      89,   85, 0x02095103,
      99,   94, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ZoomView[] = {
    "qdesigner_internal::ZoomView\0\0percent\0"
    "setZoom(int)\0globalPos\0showContextMenu(QPoint)\0"
    "int\0zoom\0bool\0zoomContextMenuEnabled\0"
};

void qdesigner_internal::ZoomView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoomView *_t = static_cast<ZoomView *>(_o);
        switch (_id) {
        case 0: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ZoomView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ZoomView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ZoomView,
      qt_meta_data_qdesigner_internal__ZoomView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ZoomView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ZoomView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ZoomView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ZoomView))
        return static_cast<void*>(const_cast< ZoomView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int qdesigner_internal::ZoomView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = zoom(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isZoomContextMenuEnabled(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setZoom(*reinterpret_cast< int*>(_v)); break;
        case 1: setZoomContextMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_qdesigner_internal__ZoomWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x0a,

 // properties: name, type, flags
      44,   39, 0x01095103,
      73,   39, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ZoomWidget[] = {
    "qdesigner_internal::ZoomWidget\0\0dump()\0"
    "bool\0widgetZoomContextMenuEnabled\0"
    "itemAcceptDrops\0"
};

void qdesigner_internal::ZoomWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoomWidget *_t = static_cast<ZoomWidget *>(_o);
        switch (_id) {
        case 0: _t->dump(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qdesigner_internal::ZoomWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ZoomWidget::staticMetaObject = {
    { &ZoomView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ZoomWidget,
      qt_meta_data_qdesigner_internal__ZoomWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ZoomWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ZoomWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ZoomWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ZoomWidget))
        return static_cast<void*>(const_cast< ZoomWidget*>(this));
    return ZoomView::qt_metacast(_clname);
}

int qdesigner_internal::ZoomWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZoomView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isWidgetZoomContextMenuEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = itemAcceptDrops(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWidgetZoomContextMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setItemAcceptDrops(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
