/****************************************************************************
** Meta object code from reading C++ file 'abstractformwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sdk/abstractformwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractformwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerFormWindowInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   30,   29,   29, 0x05,
      85,   75,   29,   29, 0x05,
     111,  102,   29,   29, 0x05,
     138,  136,   29,   29, 0x05,
     162,   29,   29,   29, 0x05,
     181,   29,   29,   29, 0x05,
     199,   29,   29,   29, 0x05,
     229,  222,   29,   29, 0x05,
     253,  222,   29,   29, 0x05,
     279,  222,   29,   29, 0x05,
     311,  222,   29,   29, 0x05,
     331,   29,   29,   29, 0x05,
     343,  341,   29,   29, 0x05,
     369,  367,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     393,  222,   29,   29, 0x0a,
     416,  222,   29,   29, 0x0a,
     441,  136,   29,   29, 0x0a,
     468,  462,   29,   29, 0x0a,
     505,  483,   29,   29, 0x0a,
     526,   29,   29,   29, 0x2a,
     552,  543,   29,   29, 0x0a,
     580,  341,   29,   29, 0x2a,
     608,  603,   29,   29, 0x0a,
     624,  102,   29,   29, 0x0a,
     654,  645,   29,   29, 0x0a,
     675,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerFormWindowInterface[] = {
    "QDesignerFormWindowInterface\0\0"
    "mainContainer\0mainContainerChanged(QWidget*)\0"
    "toolIndex\0toolChanged(int)\0fileName\0"
    "fileNameChanged(QString)\0f\0"
    "featureChanged(Feature)\0selectionChanged()\0"
    "geometryChanged()\0resourceFilesChanged()\0"
    "widget\0widgetManaged(QWidget*)\0"
    "widgetUnmanaged(QWidget*)\0"
    "aboutToUnmanageWidget(QWidget*)\0"
    "activated(QWidget*)\0changed()\0w\0"
    "widgetRemoved(QWidget*)\0o\0"
    "objectRemoved(QObject*)\0manageWidget(QWidget*)\0"
    "unmanageWidget(QWidget*)\0setFeatures(Feature)\0"
    "dirty\0setDirty(bool)\0changePropertyDisplay\0"
    "clearSelection(bool)\0clearSelection()\0"
    "w,select\0selectWidget(QWidget*,bool)\0"
    "selectWidget(QWidget*)\0grid\0setGrid(QPoint)\0"
    "setFileName(QString)\0contents\0"
    "setContents(QString)\0editWidgets()\0"
};

void QDesignerFormWindowInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerFormWindowInterface *_t = static_cast<QDesignerFormWindowInterface *>(_o);
        switch (_id) {
        case 0: _t->mainContainerChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->toolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->featureChanged((*reinterpret_cast< Feature(*)>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->geometryChanged(); break;
        case 6: _t->resourceFilesChanged(); break;
        case 7: _t->widgetManaged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 8: _t->widgetUnmanaged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 9: _t->aboutToUnmanageWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 10: _t->activated((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 11: _t->changed(); break;
        case 12: _t->widgetRemoved((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 13: _t->objectRemoved((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 14: _t->manageWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 15: _t->unmanageWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 16: _t->setFeatures((*reinterpret_cast< Feature(*)>(_a[1]))); break;
        case 17: _t->setDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->clearSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->clearSelection(); break;
        case 20: _t->selectWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->selectWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 22: _t->setGrid((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 23: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->setContents((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->editWidgets(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerFormWindowInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerFormWindowInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesignerFormWindowInterface,
      qt_meta_data_QDesignerFormWindowInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerFormWindowInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerFormWindowInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerFormWindowInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerFormWindowInterface))
        return static_cast<void*>(const_cast< QDesignerFormWindowInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesignerFormWindowInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QDesignerFormWindowInterface::mainContainerChanged(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesignerFormWindowInterface::toolChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDesignerFormWindowInterface::fileNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDesignerFormWindowInterface::featureChanged(Feature _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDesignerFormWindowInterface::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDesignerFormWindowInterface::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDesignerFormWindowInterface::resourceFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDesignerFormWindowInterface::widgetManaged(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QDesignerFormWindowInterface::widgetUnmanaged(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QDesignerFormWindowInterface::aboutToUnmanageWidget(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QDesignerFormWindowInterface::activated(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QDesignerFormWindowInterface::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QDesignerFormWindowInterface::widgetRemoved(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QDesignerFormWindowInterface::objectRemoved(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
