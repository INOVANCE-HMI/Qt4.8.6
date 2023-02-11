/****************************************************************************
** Meta object code from reading C++ file 'qtgradientstopswidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../shared/qtgradienteditor/qtgradientstopswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtgradientstopswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtGradientStopsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,   89, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   48,   22,   22, 0x08,
      84,   48,   22,   22, 0x08,
     129,  117,   22,   22, 0x08,
     178,  166,   22,   22, 0x08,
     242,  228,   22,   22, 0x08,
     296,  282,   22,   22, 0x08,
     335,   48,   22,   22, 0x08,
     375,   22,   22,   22, 0x08,
     389,   22,   22,   22, 0x08,
     402,   22,   22,   22, 0x08,
     416,   22,   22,   22, 0x08,
     432,   22,   22,   22, 0x08,
     445,   22,   22,   22, 0x08,
     459,   22,   22,   22, 0x08,

 // properties: name, type, flags
     480,  475, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QtGradientStopsWidget[] = {
    "QtGradientStopsWidget\0\0zoom\0"
    "zoomChanged(double)\0stop\0"
    "slotStopAdded(QtGradientStop*)\0"
    "slotStopRemoved(QtGradientStop*)\0"
    "stop,newPos\0slotStopMoved(QtGradientStop*,qreal)\0"
    "stop1,stop2\0"
    "slotStopsSwapped(QtGradientStop*,QtGradientStop*)\0"
    "stop,newColor\0slotStopChanged(QtGradientStop*,QColor)\0"
    "stop,selected\0slotStopSelected(QtGradientStop*,bool)\0"
    "slotCurrentStopChanged(QtGradientStop*)\0"
    "slotNewStop()\0slotDelete()\0slotFlipAll()\0"
    "slotSelectAll()\0slotZoomIn()\0slotZoomOut()\0"
    "slotResetZoom()\0bool\0backgroundCheckered\0"
};

void QtGradientStopsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtGradientStopsWidget *_t = static_cast<QtGradientStopsWidget *>(_o);
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->d_func()->slotStopAdded((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 2: _t->d_func()->slotStopRemoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 3: _t->d_func()->slotStopMoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: _t->d_func()->slotStopsSwapped((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< QtGradientStop*(*)>(_a[2]))); break;
        case 5: _t->d_func()->slotStopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 6: _t->d_func()->slotStopSelected((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->d_func()->slotCurrentStopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 8: _t->d_func()->slotNewStop(); break;
        case 9: _t->d_func()->slotDelete(); break;
        case 10: _t->d_func()->slotFlipAll(); break;
        case 11: _t->d_func()->slotSelectAll(); break;
        case 12: _t->d_func()->slotZoomIn(); break;
        case 13: _t->d_func()->slotZoomOut(); break;
        case 14: _t->d_func()->slotResetZoom(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtGradientStopsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtGradientStopsWidget::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QtGradientStopsWidget,
      qt_meta_data_QtGradientStopsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtGradientStopsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtGradientStopsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtGradientStopsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientStopsWidget))
        return static_cast<void*>(const_cast< QtGradientStopsWidget*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QtGradientStopsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isBackgroundCheckered(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackgroundCheckered(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtGradientStopsWidget::zoomChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
