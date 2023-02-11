/****************************************************************************
** Meta object code from reading C++ file 'qtgradientstopsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../shared/qtgradienteditor/qtgradientstopsmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtgradientstopsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtGradientStopsModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      54,   22,   21,   21, 0x05,
      95,   83,   21,   21, 0x05,
     140,  128,   21,   21, 0x05,
     200,  186,   21,   21, 0x05,
     250,  236,   21,   21, 0x05,
     285,   22,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QtGradientStopsModel[] = {
    "QtGradientStopsModel\0\0stop\0"
    "stopAdded(QtGradientStop*)\0"
    "stopRemoved(QtGradientStop*)\0stop,newPos\0"
    "stopMoved(QtGradientStop*,qreal)\0"
    "stop1,stop2\0stopsSwapped(QtGradientStop*,QtGradientStop*)\0"
    "stop,newColor\0stopChanged(QtGradientStop*,QColor)\0"
    "stop,selected\0stopSelected(QtGradientStop*,bool)\0"
    "currentStopChanged(QtGradientStop*)\0"
};

void QtGradientStopsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtGradientStopsModel *_t = static_cast<QtGradientStopsModel *>(_o);
        switch (_id) {
        case 0: _t->stopAdded((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 1: _t->stopRemoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 2: _t->stopMoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: _t->stopsSwapped((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< QtGradientStop*(*)>(_a[2]))); break;
        case 4: _t->stopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 5: _t->stopSelected((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->currentStopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtGradientStopsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtGradientStopsModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtGradientStopsModel,
      qt_meta_data_QtGradientStopsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtGradientStopsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtGradientStopsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtGradientStopsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientStopsModel))
        return static_cast<void*>(const_cast< QtGradientStopsModel*>(this));
    return QObject::qt_metacast(_clname);
}

int QtGradientStopsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QtGradientStopsModel::stopAdded(QtGradientStop * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtGradientStopsModel::stopRemoved(QtGradientStop * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtGradientStopsModel::stopMoved(QtGradientStop * _t1, qreal _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtGradientStopsModel::stopsSwapped(QtGradientStop * _t1, QtGradientStop * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtGradientStopsModel::stopChanged(QtGradientStop * _t1, const QColor & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtGradientStopsModel::stopSelected(QtGradientStop * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtGradientStopsModel::currentStopChanged(QtGradientStop * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
