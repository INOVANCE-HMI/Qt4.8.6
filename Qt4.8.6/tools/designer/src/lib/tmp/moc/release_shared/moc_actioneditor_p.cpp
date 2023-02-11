/****************************************************************************
** Meta object code from reading C++ file 'actioneditor_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/actioneditor_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actioneditor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__ActionEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   34,   33,   33, 0x05,
      73,   63,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
     118,  111,   33,   33, 0x0a,
     137,   33,   33,   33, 0x0a,
     160,   34,   33,   33, 0x08,
     213,  193,   33,   33, 0x08,
     265,   34,   33,   33, 0x08,
     286,   33,   33,   33, 0x08,
     306,   33,   33,   33, 0x08,
     336,   33,   33,   33, 0x08,
     356,   33,   33,   33, 0x08,
     372,   33,   33,   33, 0x08,
     397,  385,   33,   33, 0x08,
     438,  436,   33,   33, 0x08,
     494,  492,   33,   33, 0x08,
     519,  517,   33,   33, 0x08,
     556,   33,   33,   33, 0x08,
     567,   33,   33,   33, 0x08,
     577,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ActionEditor[] = {
    "qdesigner_internal::ActionEditor\0\0"
    "item\0itemActivated(QAction*)\0menu,item\0"
    "contextMenuRequested(QMenu*,QAction*)\0"
    "filter\0setFilter(QString)\0"
    "mainContainerChanged()\0"
    "slotCurrentItemChanged(QAction*)\0"
    "selected,deselected\0"
    "slotSelectionChanged(QItemSelection,QItemSelection)\0"
    "editAction(QAction*)\0editCurrentAction()\0"
    "navigateToSlotCurrentAction()\0"
    "slotActionChanged()\0slotNewAction()\0"
    "slotDelete()\0path,action\0"
    "resourceImageDropped(QString,QAction*)\0"
    ",\0slotContextMenuRequested(QContextMenuEvent*,QAction*)\0"
    "a\0slotViewMode(QAction*)\0w\0"
    "slotSelectAssociatedWidget(QWidget*)\0"
    "slotCopy()\0slotCut()\0slotPaste()\0"
};

void qdesigner_internal::ActionEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionEditor *_t = static_cast<ActionEditor *>(_o);
        switch (_id) {
        case 0: _t->itemActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->contextMenuRequested((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 2: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mainContainerChanged(); break;
        case 4: _t->slotCurrentItemChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 6: _t->editAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->editCurrentAction(); break;
        case 8: _t->navigateToSlotCurrentAction(); break;
        case 9: _t->slotActionChanged(); break;
        case 10: _t->slotNewAction(); break;
        case 11: _t->slotDelete(); break;
        case 12: _t->resourceImageDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 13: _t->slotContextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 14: _t->slotViewMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: _t->slotSelectAssociatedWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 16: _t->slotCopy(); break;
        case 17: _t->slotCut(); break;
        case 18: _t->slotPaste(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ActionEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ActionEditor::staticMetaObject = {
    { &QDesignerActionEditorInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionEditor,
      qt_meta_data_qdesigner_internal__ActionEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ActionEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ActionEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ActionEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionEditor))
        return static_cast<void*>(const_cast< ActionEditor*>(this));
    return QDesignerActionEditorInterface::qt_metacast(_clname);
}

int qdesigner_internal::ActionEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerActionEditorInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ActionEditor::itemActivated(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ActionEditor::contextMenuRequested(QMenu * _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
