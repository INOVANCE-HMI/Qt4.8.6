/****************************************************************************
** Meta object code from reading C++ file 'signalsloteditorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../signalsloteditor/signalsloteditorwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalsloteditorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__SignalSlotEditorWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   44,   43,   43, 0x0a,
     104,  100,   43,   43, 0x08,
     145,  139,   43,   43, 0x08,
     214,  180,   43,   43, 0x08,
     288,   43,   43,   43, 0x08,
     304,   43,   43,   43, 0x08,
     323,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow[] = {
    "qdesigner_internal::SignalSlotEditorWindow\0"
    "\0form\0setActiveFormWindow(QDesignerFormWindowInterface*)\0"
    "con\0updateDialogSelection(Connection*)\0"
    "index\0updateEditorSelection(QModelIndex)\0"
    "formWindow,object,newName,oldName\0"
    "objectNameChanged(QDesignerFormWindowInterface*,QObject*,QString,QStri"
    "ng)\0"
    "addConnection()\0removeConnection()\0"
    "updateUi()\0"
};

void qdesigner_internal::SignalSlotEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SignalSlotEditorWindow *_t = static_cast<SignalSlotEditorWindow *>(_o);
        switch (_id) {
        case 0: _t->setActiveFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 1: _t->updateDialogSelection((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 2: _t->updateEditorSelection((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->objectNameChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: _t->addConnection(); break;
        case 5: _t->removeConnection(); break;
        case 6: _t->updateUi(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::SignalSlotEditorWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::SignalSlotEditorWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow,
      qt_meta_data_qdesigner_internal__SignalSlotEditorWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::SignalSlotEditorWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::SignalSlotEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::SignalSlotEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow))
        return static_cast<void*>(const_cast< SignalSlotEditorWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::SignalSlotEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
