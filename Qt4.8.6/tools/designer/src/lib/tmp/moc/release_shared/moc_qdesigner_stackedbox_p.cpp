/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_stackedbox_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_stackedbox_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_stackedbox_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStackedWidgetPreviewEventFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x0a,
      50,   33,   33,   33, 0x0a,
      61,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QStackedWidgetPreviewEventFilter[] = {
    "QStackedWidgetPreviewEventFilter\0\0"
    "updateButtons()\0prevPage()\0nextPage()\0"
};

void QStackedWidgetPreviewEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QStackedWidgetPreviewEventFilter *_t = static_cast<QStackedWidgetPreviewEventFilter *>(_o);
        switch (_id) {
        case 0: _t->updateButtons(); break;
        case 1: _t->prevPage(); break;
        case 2: _t->nextPage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QStackedWidgetPreviewEventFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QStackedWidgetPreviewEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QStackedWidgetPreviewEventFilter,
      qt_meta_data_QStackedWidgetPreviewEventFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QStackedWidgetPreviewEventFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QStackedWidgetPreviewEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QStackedWidgetPreviewEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStackedWidgetPreviewEventFilter))
        return static_cast<void*>(const_cast< QStackedWidgetPreviewEventFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int QStackedWidgetPreviewEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_QStackedWidgetEventFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      47,   26,   26,   26, 0x08,
      57,   26,   26,   26, 0x08,
      72,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QStackedWidgetEventFilter[] = {
    "QStackedWidgetEventFilter\0\0"
    "removeCurrentPage()\0addPage()\0"
    "addPageAfter()\0changeOrder()\0"
};

void QStackedWidgetEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QStackedWidgetEventFilter *_t = static_cast<QStackedWidgetEventFilter *>(_o);
        switch (_id) {
        case 0: _t->removeCurrentPage(); break;
        case 1: _t->addPage(); break;
        case 2: _t->addPageAfter(); break;
        case 3: _t->changeOrder(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QStackedWidgetEventFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QStackedWidgetEventFilter::staticMetaObject = {
    { &QStackedWidgetPreviewEventFilter::staticMetaObject, qt_meta_stringdata_QStackedWidgetEventFilter,
      qt_meta_data_QStackedWidgetEventFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QStackedWidgetEventFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QStackedWidgetEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QStackedWidgetEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStackedWidgetEventFilter))
        return static_cast<void*>(const_cast< QStackedWidgetEventFilter*>(this));
    return QStackedWidgetPreviewEventFilter::qt_metacast(_clname);
}

int QStackedWidgetEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidgetPreviewEventFilter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
