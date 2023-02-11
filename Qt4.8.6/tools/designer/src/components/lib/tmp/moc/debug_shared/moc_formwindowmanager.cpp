/****************************************************************************
** Meta object code from reading C++ file 'formwindowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../formeditor/formwindowmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formwindowmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__FormWindowManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   39,   38,   38, 0x0a,
      95,   39,   38,   38, 0x0a,
     143,   39,   38,   38, 0x0a,
     194,   38,   38,   38, 0x0a,
     213,   38,   38,   38, 0x0a,
     237,   38,   38,   38, 0x08,
     262,   38,   38,   38, 0x08,
     288,   38,   38,   38, 0x08,
     315,   38,   38,   38, 0x08,
     343,   38,   38,   38, 0x08,
     374,   38,   38,   38, 0x08,
     401,   38,   38,   38, 0x08,
     428,   38,   38,   38, 0x08,
     443,   38,   38,   38, 0x08,
     476,   38,   38,   38, 0x08,
     508,   38,   38,   38, 0x08,
     544,   38,   38,   38, 0x08,
     605,  580,   38,   38, 0x08,
     648,   38,   38,   38, 0x08,
     689,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__FormWindowManager[] = {
    "qdesigner_internal::FormWindowManager\0"
    "\0formWindow\0addFormWindow(QDesignerFormWindowInterface*)\0"
    "removeFormWindow(QDesignerFormWindowInterface*)\0"
    "setActiveFormWindow(QDesignerFormWindowInterface*)\0"
    "closeAllPreviews()\0deviceProfilesChanged()\0"
    "slotActionCutActivated()\0"
    "slotActionCopyActivated()\0"
    "slotActionPasteActivated()\0"
    "slotActionDeleteActivated()\0"
    "slotActionSelectAllActivated()\0"
    "slotActionLowerActivated()\0"
    "slotActionRaiseActivated()\0createLayout()\0"
    "slotActionBreakLayoutActivated()\0"
    "slotActionAdjustSizeActivated()\0"
    "slotActionSimplifyLayoutActivated()\0"
    "slotActionDefaultPreviewActivated()\0"
    "style,deviceProfileIndex\0"
    "slotActionGroupPreviewInStyle(QString,int)\0"
    "slotActionShowFormWindowSettingsDialog()\0"
    "slotUpdateActions()\0"
};

void qdesigner_internal::FormWindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormWindowManager *_t = static_cast<FormWindowManager *>(_o);
        switch (_id) {
        case 0: _t->addFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 1: _t->removeFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 2: _t->setActiveFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 3: _t->closeAllPreviews(); break;
        case 4: _t->deviceProfilesChanged(); break;
        case 5: _t->slotActionCutActivated(); break;
        case 6: _t->slotActionCopyActivated(); break;
        case 7: _t->slotActionPasteActivated(); break;
        case 8: _t->slotActionDeleteActivated(); break;
        case 9: _t->slotActionSelectAllActivated(); break;
        case 10: _t->slotActionLowerActivated(); break;
        case 11: _t->slotActionRaiseActivated(); break;
        case 12: _t->createLayout(); break;
        case 13: _t->slotActionBreakLayoutActivated(); break;
        case 14: _t->slotActionAdjustSizeActivated(); break;
        case 15: _t->slotActionSimplifyLayoutActivated(); break;
        case 16: _t->slotActionDefaultPreviewActivated(); break;
        case 17: _t->slotActionGroupPreviewInStyle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->slotActionShowFormWindowSettingsDialog(); break;
        case 19: _t->slotUpdateActions(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::FormWindowManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::FormWindowManager::staticMetaObject = {
    { &QDesignerFormWindowManager::staticMetaObject, qt_meta_stringdata_qdesigner_internal__FormWindowManager,
      qt_meta_data_qdesigner_internal__FormWindowManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::FormWindowManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::FormWindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::FormWindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__FormWindowManager))
        return static_cast<void*>(const_cast< FormWindowManager*>(this));
    return QDesignerFormWindowManager::qt_metacast(_clname);
}

int qdesigner_internal::FormWindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerFormWindowManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
