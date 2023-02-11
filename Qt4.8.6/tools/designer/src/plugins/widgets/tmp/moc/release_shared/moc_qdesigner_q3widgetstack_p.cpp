/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_q3widgetstack_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../q3widgetstack/qdesigner_q3widgetstack_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_q3widgetstack_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerQ3WidgetStack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   23,   23,   23, 0x0a,
      66,   24,   23,   23, 0x0a,
      96,   87,   23,   23, 0x0a,
     124,   23,   23,   23, 0x08,
     135,   23,   23,   23, 0x08,
     146,   24,   23,   23, 0x08,

 // properties: name, type, flags
     174,  170, 0x02085103,
     195,  187, 0x0a085103,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerQ3WidgetStack[] = {
    "QDesignerQ3WidgetStack\0\0index\0"
    "currentChanged(int)\0updateButtons()\0"
    "setCurrentIndex(int)\0pageName\0"
    "setCurrentPageName(QString)\0prevPage()\0"
    "nextPage()\0slotCurrentChanged(int)\0"
    "int\0currentIndex\0QString\0currentPageName\0"
};

void QDesignerQ3WidgetStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerQ3WidgetStack *_t = static_cast<QDesignerQ3WidgetStack *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateButtons(); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCurrentPageName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->prevPage(); break;
        case 5: _t->nextPage(); break;
        case 6: _t->slotCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerQ3WidgetStack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerQ3WidgetStack::staticMetaObject = {
    { &Q3WidgetStack::staticMetaObject, qt_meta_stringdata_QDesignerQ3WidgetStack,
      qt_meta_data_QDesignerQ3WidgetStack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerQ3WidgetStack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerQ3WidgetStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerQ3WidgetStack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerQ3WidgetStack))
        return static_cast<void*>(const_cast< QDesignerQ3WidgetStack*>(this));
    return Q3WidgetStack::qt_metacast(_clname);
}

int QDesignerQ3WidgetStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3WidgetStack::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 1: *reinterpret_cast< QString*>(_v) = currentPageName(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: setCurrentPageName(*reinterpret_cast< QString*>(_v)); break;
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

// SIGNAL 0
void QDesignerQ3WidgetStack::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
