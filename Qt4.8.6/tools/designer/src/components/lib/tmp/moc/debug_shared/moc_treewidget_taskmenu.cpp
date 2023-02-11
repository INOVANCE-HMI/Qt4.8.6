/****************************************************************************
** Meta object code from reading C++ file 'treewidget_taskmenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../taskmenu/treewidget_taskmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treewidget_taskmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__TreeWidgetTaskMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   39,   39,   39, 0x08,
      52,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__TreeWidgetTaskMenu[] = {
    "qdesigner_internal::TreeWidgetTaskMenu\0"
    "\0editItems()\0updateSelection()\0"
};

void qdesigner_internal::TreeWidgetTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeWidgetTaskMenu *_t = static_cast<TreeWidgetTaskMenu *>(_o);
        switch (_id) {
        case 0: _t->editItems(); break;
        case 1: _t->updateSelection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qdesigner_internal::TreeWidgetTaskMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::TreeWidgetTaskMenu::staticMetaObject = {
    { &QDesignerTaskMenu::staticMetaObject, qt_meta_stringdata_qdesigner_internal__TreeWidgetTaskMenu,
      qt_meta_data_qdesigner_internal__TreeWidgetTaskMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::TreeWidgetTaskMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::TreeWidgetTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::TreeWidgetTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__TreeWidgetTaskMenu))
        return static_cast<void*>(const_cast< TreeWidgetTaskMenu*>(this));
    return QDesignerTaskMenu::qt_metacast(_clname);
}

int qdesigner_internal::TreeWidgetTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerTaskMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
