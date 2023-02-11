/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_workbench.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdesigner_workbench.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_workbench.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerWorkbench[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x05,
      45,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   59,   19,   19, 0x0a,
     106,   59,   19,   19, 0x0a,
     145,   19,   19,   19, 0x0a,
     163,   19,   19,   19, 0x0a,
     193,   19,   19,   19, 0x08,
     215,   19,   19,   19, 0x08,
     236,   19,   19,   19, 0x08,
     259,   19,   19,   19, 0x08,
     283,   19,   19,   19, 0x08,
     317,  314,   19,   19, 0x08,
     363,  314,   19,   19, 0x08,
     413,  411,   19,   19, 0x08,
     449,   19,   19,   19, 0x08,
     495,  474,   19,   19, 0x08,
     556,   19,   19,   19, 0x08,
     578,  576,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerWorkbench[] = {
    "QDesignerWorkbench\0\0mode\0modeChanged(UIMode)\0"
    "initialized()\0formWindow\0"
    "addFormWindow(QDesignerFormWindow*)\0"
    "removeFormWindow(QDesignerFormWindow*)\0"
    "bringAllToFront()\0toggleFormMinimizationState()\0"
    "switchToNeutralMode()\0switchToDockedMode()\0"
    "switchToTopLevelMode()\0initializeCorePlugins()\0"
    "handleCloseEvent(QCloseEvent*)\0fw\0"
    "slotFormWindowActivated(QDesignerFormWindow*)\0"
    "updateWindowMenu(QDesignerFormWindowInterface*)\0"
    "a\0formWindowActionTriggered(QAction*)\0"
    "adjustMDIFormPositions()\0formWindow,minimized\0"
    "minimizationStateChanged(QDesignerFormWindowInterface*,bool)\0"
    "restoreUISettings()\0f\0slotFileDropped(QString)\0"
};

void QDesignerWorkbench::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerWorkbench *_t = static_cast<QDesignerWorkbench *>(_o);
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast< UIMode(*)>(_a[1]))); break;
        case 1: _t->initialized(); break;
        case 2: _t->addFormWindow((*reinterpret_cast< QDesignerFormWindow*(*)>(_a[1]))); break;
        case 3: _t->removeFormWindow((*reinterpret_cast< QDesignerFormWindow*(*)>(_a[1]))); break;
        case 4: _t->bringAllToFront(); break;
        case 5: _t->toggleFormMinimizationState(); break;
        case 6: _t->switchToNeutralMode(); break;
        case 7: _t->switchToDockedMode(); break;
        case 8: _t->switchToTopLevelMode(); break;
        case 9: _t->initializeCorePlugins(); break;
        case 10: _t->handleCloseEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 11: _t->slotFormWindowActivated((*reinterpret_cast< QDesignerFormWindow*(*)>(_a[1]))); break;
        case 12: _t->updateWindowMenu((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 13: _t->formWindowActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: _t->adjustMDIFormPositions(); break;
        case 15: _t->minimizationStateChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->restoreUISettings(); break;
        case 17: _t->slotFileDropped((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerWorkbench::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerWorkbench::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerWorkbench,
      qt_meta_data_QDesignerWorkbench, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerWorkbench::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerWorkbench::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerWorkbench::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerWorkbench))
        return static_cast<void*>(const_cast< QDesignerWorkbench*>(this));
    return QObject::qt_metacast(_clname);
}

int QDesignerWorkbench::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QDesignerWorkbench::modeChanged(UIMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesignerWorkbench::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
