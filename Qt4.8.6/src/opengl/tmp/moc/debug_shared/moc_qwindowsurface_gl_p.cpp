/****************************************************************************
** Meta object code from reading C++ file 'qwindowsurface_gl_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qwindowsurface_gl_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsurface_gl_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGLWindowSurface[] = {

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
      25,   18,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QGLWindowSurface[] = {
    "QGLWindowSurface\0\0object\0deleted(QObject*)\0"
};

void QGLWindowSurface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGLWindowSurface *_t = static_cast<QGLWindowSurface *>(_o);
        switch (_id) {
        case 0: _t->deleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGLWindowSurface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGLWindowSurface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGLWindowSurface,
      qt_meta_data_QGLWindowSurface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGLWindowSurface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGLWindowSurface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGLWindowSurface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGLWindowSurface))
        return static_cast<void*>(const_cast< QGLWindowSurface*>(this));
    if (!strcmp(_clname, "QWindowSurface"))
        return static_cast< QWindowSurface*>(const_cast< QGLWindowSurface*>(this));
    return QObject::qt_metacast(_clname);
}

int QGLWindowSurface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
