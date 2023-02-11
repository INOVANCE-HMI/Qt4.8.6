/****************************************************************************
** Meta object code from reading C++ file 'qtgradientstopscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../shared/qtgradienteditor/qtgradientstopscontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtgradientstopscontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtGradientStopsController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   27,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   26,   26,   26, 0x08,
      87,   26,   26,   26, 0x08,
     109,  104,   26,   26, 0x08,
     161,  149,   26,   26, 0x08,
     210,  198,   26,   26, 0x08,
     274,  260,   26,   26, 0x08,
     328,  314,   26,   26, 0x08,
     367,  104,   26,   26, 0x08,
     398,  104,   26,   26, 0x08,
     431,   26,   26,   26, 0x08,
     465,  459,   26,   26, 0x08,
     489,  459,   26,   26, 0x08,
     511,  459,   26,   26, 0x08,
     540,  459,   26,   26, 0x08,
     564,  459,   26,   26, 0x08,
     588,   26,   26,   26, 0x08,
     607,   26,   26,   26, 0x08,
     633,   26,   26,   26, 0x08,
     654,   26,   26,   26, 0x08,
     681,  675,   26,   26, 0x08,
     708,  675,   26,   26, 0x08,
     728,   26,   26,   26, 0x08,
     741,   26,   26,   26, 0x08,
     755,   26,   26,   26, 0x08,
     769,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtGradientStopsController[] = {
    "QtGradientStopsController\0\0stops\0"
    "gradientStopsChanged(QGradientStops)\0"
    "slotHsvClicked()\0slotRgbClicked()\0"
    "stop\0slotCurrentStopChanged(QtGradientStop*)\0"
    "stop,newPos\0slotStopMoved(QtGradientStop*,qreal)\0"
    "stop1,stop2\0"
    "slotStopsSwapped(QtGradientStop*,QtGradientStop*)\0"
    "stop,newColor\0slotStopChanged(QtGradientStop*,QColor)\0"
    "stop,selected\0slotStopSelected(QtGradientStop*,bool)\0"
    "slotStopAdded(QtGradientStop*)\0"
    "slotStopRemoved(QtGradientStop*)\0"
    "slotUpdatePositionSpinBox()\0color\0"
    "slotChangeColor(QColor)\0slotChangeHue(QColor)\0"
    "slotChangeSaturation(QColor)\0"
    "slotChangeValue(QColor)\0slotChangeAlpha(QColor)\0"
    "slotChangeHue(int)\0slotChangeSaturation(int)\0"
    "slotChangeValue(int)\0slotChangeAlpha(int)\0"
    "value\0slotChangePosition(double)\0"
    "slotChangeZoom(int)\0slotZoomIn()\0"
    "slotZoomOut()\0slotZoomAll()\0"
    "slotZoomChanged(double)\0"
};

void QtGradientStopsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtGradientStopsController *_t = static_cast<QtGradientStopsController *>(_o);
        switch (_id) {
        case 0: _t->gradientStopsChanged((*reinterpret_cast< const QGradientStops(*)>(_a[1]))); break;
        case 1: _t->d_func()->slotHsvClicked(); break;
        case 2: _t->d_func()->slotRgbClicked(); break;
        case 3: _t->d_func()->slotCurrentStopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 4: _t->d_func()->slotStopMoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 5: _t->d_func()->slotStopsSwapped((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< QtGradientStop*(*)>(_a[2]))); break;
        case 6: _t->d_func()->slotStopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 7: _t->d_func()->slotStopSelected((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->d_func()->slotStopAdded((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 9: _t->d_func()->slotStopRemoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 10: _t->d_func()->slotUpdatePositionSpinBox(); break;
        case 11: _t->d_func()->slotChangeColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->d_func()->slotChangeHue((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->d_func()->slotChangeSaturation((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 14: _t->d_func()->slotChangeValue((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 15: _t->d_func()->slotChangeAlpha((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 16: _t->d_func()->slotChangeHue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->d_func()->slotChangeSaturation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->d_func()->slotChangeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->d_func()->slotChangeAlpha((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->d_func()->slotChangePosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->d_func()->slotChangeZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->d_func()->slotZoomIn(); break;
        case 23: _t->d_func()->slotZoomOut(); break;
        case 24: _t->d_func()->slotZoomAll(); break;
        case 25: _t->d_func()->slotZoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtGradientStopsController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtGradientStopsController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtGradientStopsController,
      qt_meta_data_QtGradientStopsController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtGradientStopsController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtGradientStopsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtGradientStopsController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientStopsController))
        return static_cast<void*>(const_cast< QtGradientStopsController*>(this));
    return QObject::qt_metacast(_clname);
}

int QtGradientStopsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QtGradientStopsController::gradientStopsChanged(const QGradientStops & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
