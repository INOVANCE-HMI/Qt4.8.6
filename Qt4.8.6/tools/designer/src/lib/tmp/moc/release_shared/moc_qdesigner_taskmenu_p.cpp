/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_taskmenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_taskmenu_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_taskmenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__QDesignerTaskMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x08,
      58,   38,   38,   38, 0x08,
      74,   38,   38,   38, 0x08,
      92,   38,   38,   38, 0x08,
     111,   38,   38,   38, 0x08,
     127,   38,   38,   38, 0x08,
     140,   38,   38,   38, 0x08,
     158,   38,   38,   38, 0x08,
     176,   38,   38,   38, 0x08,
     191,   38,   38,   38, 0x08,
     214,   38,   38,   38, 0x08,
     237,  235,   38,   38, 0x08,
     257,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu[] = {
    "qdesigner_internal::QDesignerTaskMenu\0"
    "\0changeObjectName()\0changeToolTip()\0"
    "changeWhatsThis()\0changeStyleSheet()\0"
    "createMenuBar()\0addToolBar()\0"
    "createStatusBar()\0removeStatusBar()\0"
    "changeScript()\0containerFakeMethods()\0"
    "slotNavigateToSlot()\0a\0applySize(QAction*)\0"
    "slotLayoutAlignment()\0"
};

void qdesigner_internal::QDesignerTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerTaskMenu *_t = static_cast<QDesignerTaskMenu *>(_o);
        switch (_id) {
        case 0: _t->changeObjectName(); break;
        case 1: _t->changeToolTip(); break;
        case 2: _t->changeWhatsThis(); break;
        case 3: _t->changeStyleSheet(); break;
        case 4: _t->createMenuBar(); break;
        case 5: _t->addToolBar(); break;
        case 6: _t->createStatusBar(); break;
        case 7: _t->removeStatusBar(); break;
        case 8: _t->changeScript(); break;
        case 9: _t->containerFakeMethods(); break;
        case 10: _t->slotNavigateToSlot(); break;
        case 11: _t->applySize((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 12: _t->slotLayoutAlignment(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::QDesignerTaskMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::QDesignerTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu,
      qt_meta_data_qdesigner_internal__QDesignerTaskMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::QDesignerTaskMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::QDesignerTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::QDesignerTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu))
        return static_cast<void*>(const_cast< QDesignerTaskMenu*>(this));
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< QDesignerTaskMenu*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< QDesignerTaskMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
