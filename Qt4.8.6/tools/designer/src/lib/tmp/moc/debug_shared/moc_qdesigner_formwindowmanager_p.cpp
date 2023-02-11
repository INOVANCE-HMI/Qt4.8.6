/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_formwindowmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_formwindowmanager_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_formwindowmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__QDesignerFormWindowManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      51,   48,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   47,   47,   47, 0x0a,
     127,   47,   47,   47, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager[] = {
    "qdesigner_internal::QDesignerFormWindowManager\0"
    "\0fw\0formWindowSettingsChanged(QDesignerFormWindowInterface*)\0"
    "closeAllPreviews()\0aboutPlugins()\0"
};

void qdesigner_internal::QDesignerFormWindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerFormWindowManager *_t = static_cast<QDesignerFormWindowManager *>(_o);
        switch (_id) {
        case 0: _t->formWindowSettingsChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 1: _t->closeAllPreviews(); break;
        case 2: _t->aboutPlugins(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::QDesignerFormWindowManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::QDesignerFormWindowManager::staticMetaObject = {
    { &QDesignerFormWindowManagerInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager,
      qt_meta_data_qdesigner_internal__QDesignerFormWindowManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::QDesignerFormWindowManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::QDesignerFormWindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::QDesignerFormWindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager))
        return static_cast<void*>(const_cast< QDesignerFormWindowManager*>(this));
    return QDesignerFormWindowManagerInterface::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerFormWindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerFormWindowManagerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::QDesignerFormWindowManager::formWindowSettingsChanged(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
