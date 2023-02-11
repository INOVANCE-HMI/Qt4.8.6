/****************************************************************************
** Meta object code from reading C++ file 'promotiontaskmenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/promotiontaskmenu_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'promotiontaskmenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__PromotionTaskMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      55,   39,   38,   38, 0x08,
      90,   38,   38,   38, 0x08,
     119,   38,   38,   38, 0x08,
     145,   38,   38,   38, 0x08,
     165,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__PromotionTaskMenu[] = {
    "qdesigner_internal::PromotionTaskMenu\0"
    "\0customClassName\0slotPromoteToCustomWidget(QString)\0"
    "slotDemoteFromCustomWidget()\0"
    "slotEditPromotedWidgets()\0slotEditPromoteTo()\0"
    "slotEditSignalsSlots()\0"
};

void qdesigner_internal::PromotionTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PromotionTaskMenu *_t = static_cast<PromotionTaskMenu *>(_o);
        switch (_id) {
        case 0: _t->slotPromoteToCustomWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotDemoteFromCustomWidget(); break;
        case 2: _t->slotEditPromotedWidgets(); break;
        case 3: _t->slotEditPromoteTo(); break;
        case 4: _t->slotEditSignalsSlots(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::PromotionTaskMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::PromotionTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__PromotionTaskMenu,
      qt_meta_data_qdesigner_internal__PromotionTaskMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::PromotionTaskMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::PromotionTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::PromotionTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__PromotionTaskMenu))
        return static_cast<void*>(const_cast< PromotionTaskMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::PromotionTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
