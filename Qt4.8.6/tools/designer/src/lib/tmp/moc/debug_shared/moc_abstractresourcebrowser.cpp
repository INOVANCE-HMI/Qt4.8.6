/****************************************************************************
** Meta object code from reading C++ file 'abstractresourcebrowser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sdk/abstractresourcebrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractresourcebrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerResourceBrowserInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   35,   34,   34, 0x05,
      72,   35,   34,   34, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerResourceBrowserInterface[] = {
    "QDesignerResourceBrowserInterface\0\0"
    "filePath\0currentPathChanged(QString)\0"
    "pathActivated(QString)\0"
};

void QDesignerResourceBrowserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerResourceBrowserInterface *_t = static_cast<QDesignerResourceBrowserInterface *>(_o);
        switch (_id) {
        case 0: _t->currentPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pathActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerResourceBrowserInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerResourceBrowserInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesignerResourceBrowserInterface,
      qt_meta_data_QDesignerResourceBrowserInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerResourceBrowserInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerResourceBrowserInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerResourceBrowserInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerResourceBrowserInterface))
        return static_cast<void*>(const_cast< QDesignerResourceBrowserInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesignerResourceBrowserInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QDesignerResourceBrowserInterface::currentPathChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesignerResourceBrowserInterface::pathActivated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
