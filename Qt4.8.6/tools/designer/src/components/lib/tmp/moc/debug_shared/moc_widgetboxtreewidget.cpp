/****************************************************************************
** Meta object code from reading C++ file 'widgetboxtreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../widgetbox/widgetboxtreewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetboxtreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__WidgetBoxTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      71,   41,   40,   40, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   40,   40,   40, 0x0a,
     119,   40,   40,   40, 0x08,
     130,   40,   40,   40, 0x08,
     158,   40,   40,   40, 0x08,
     195,  190,   40,   40, 0x08,
     230,   40,   40,   40, 0x08,
     249,   40,   40,   40, 0x08,
     264,   40,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget[] = {
    "qdesigner_internal::WidgetBoxTreeWidget\0"
    "\0name,dom_xml,global_mouse_pos\0"
    "pressed(QString,QString,QPoint)\0"
    "filter(QString)\0slotSave()\0"
    "slotScratchPadItemDeleted()\0"
    "slotLastScratchPadItemDeleted()\0item\0"
    "handleMousePress(QTreeWidgetItem*)\0"
    "deleteScratchpad()\0slotListMode()\0"
    "slotIconMode()\0"
};

void qdesigner_internal::WidgetBoxTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetBoxTreeWidget *_t = static_cast<WidgetBoxTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 1: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotSave(); break;
        case 3: _t->slotScratchPadItemDeleted(); break;
        case 4: _t->slotLastScratchPadItemDeleted(); break;
        case 5: _t->handleMousePress((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->deleteScratchpad(); break;
        case 7: _t->slotListMode(); break;
        case 8: _t->slotIconMode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::WidgetBoxTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::WidgetBoxTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget,
      qt_meta_data_qdesigner_internal__WidgetBoxTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::WidgetBoxTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::WidgetBoxTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::WidgetBoxTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget))
        return static_cast<void*>(const_cast< WidgetBoxTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int qdesigner_internal::WidgetBoxTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::WidgetBoxTreeWidget::pressed(const QString _t1, const QString _t2, const QPoint & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
