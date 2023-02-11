/****************************************************************************
** Meta object code from reading C++ file 'newformwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/newformwidget_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newformwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__NewFormWidget[] = {

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
      40,   35,   34,   34, 0x08,
      95,   86,   34,   34, 0x08,
     163,   35,   34,   34, 0x08,
     211,  207,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__NewFormWidget[] = {
    "qdesigner_internal::NewFormWidget\0\0"
    "item\0on_treeWidget_itemActivated(QTreeWidgetItem*)\0"
    "current,\0"
    "on_treeWidget_currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "on_treeWidget_itemPressed(QTreeWidgetItem*)\0"
    "idx\0slotDeviceProfileIndexChanged(int)\0"
};

void qdesigner_internal::NewFormWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewFormWidget *_t = static_cast<NewFormWidget *>(_o);
        switch (_id) {
        case 0: _t->on_treeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_treeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->on_treeWidget_itemPressed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->slotDeviceProfileIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::NewFormWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::NewFormWidget::staticMetaObject = {
    { &QDesignerNewFormWidgetInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__NewFormWidget,
      qt_meta_data_qdesigner_internal__NewFormWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::NewFormWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::NewFormWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::NewFormWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__NewFormWidget))
        return static_cast<void*>(const_cast< NewFormWidget*>(this));
    return QDesignerNewFormWidgetInterface::qt_metacast(_clname);
}

int qdesigner_internal::NewFormWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerNewFormWidgetInterface::qt_metacall(_c, _id, _a);
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
