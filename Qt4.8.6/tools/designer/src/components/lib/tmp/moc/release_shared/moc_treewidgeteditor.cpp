/****************************************************************************
** Meta object code from reading C++ file 'treewidgeteditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../taskmenu/treewidgeteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treewidgeteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__TreeWidgetEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x08,
      65,   37,   37,   37, 0x08,
      95,   37,   37,   37, 0x08,
     125,   37,   37,   37, 0x08,
     155,   37,   37,   37, 0x08,
     187,   37,   37,   37, 0x08,
     220,   37,   37,   37, 0x08,
     252,   37,   37,   37, 0x08,
     299,  287,   37,   37, 0x08,
     351,  347,   37,   37, 0x08,
     396,  385,   37,   37, 0x08,
     442,  347,   37,   37, 0x08,
     476,  347,   37,   37, 0x08,
     509,  347,   37,   37, 0x08,
     542,  347,   37,   37, 0x08,
     577,   37,   37,   37, 0x08,
     601,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__TreeWidgetEditor[] = {
    "qdesigner_internal::TreeWidgetEditor\0"
    "\0on_newItemButton_clicked()\0"
    "on_newSubItemButton_clicked()\0"
    "on_deleteItemButton_clicked()\0"
    "on_moveItemUpButton_clicked()\0"
    "on_moveItemDownButton_clicked()\0"
    "on_moveItemRightButton_clicked()\0"
    "on_moveItemLeftButton_clicked()\0"
    "on_treeWidget_currentItemChanged()\0"
    "item,column\0on_treeWidget_itemChanged(QTreeWidgetItem*,int)\0"
    "idx\0on_columnEditor_indexChanged(int)\0"
    "idx,role,v\0on_columnEditor_itemChanged(int,int,QVariant)\0"
    "on_columnEditor_itemInserted(int)\0"
    "on_columnEditor_itemDeleted(int)\0"
    "on_columnEditor_itemMovedUp(int)\0"
    "on_columnEditor_itemMovedDown(int)\0"
    "togglePropertyBrowser()\0cacheReloaded()\0"
};

void qdesigner_internal::TreeWidgetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeWidgetEditor *_t = static_cast<TreeWidgetEditor *>(_o);
        switch (_id) {
        case 0: _t->on_newItemButton_clicked(); break;
        case 1: _t->on_newSubItemButton_clicked(); break;
        case 2: _t->on_deleteItemButton_clicked(); break;
        case 3: _t->on_moveItemUpButton_clicked(); break;
        case 4: _t->on_moveItemDownButton_clicked(); break;
        case 5: _t->on_moveItemRightButton_clicked(); break;
        case 6: _t->on_moveItemLeftButton_clicked(); break;
        case 7: _t->on_treeWidget_currentItemChanged(); break;
        case 8: _t->on_treeWidget_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_columnEditor_indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_columnEditor_itemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 11: _t->on_columnEditor_itemInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_columnEditor_itemDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_columnEditor_itemMovedUp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_columnEditor_itemMovedDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->togglePropertyBrowser(); break;
        case 16: _t->cacheReloaded(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::TreeWidgetEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::TreeWidgetEditor::staticMetaObject = {
    { &AbstractItemEditor::staticMetaObject, qt_meta_stringdata_qdesigner_internal__TreeWidgetEditor,
      qt_meta_data_qdesigner_internal__TreeWidgetEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::TreeWidgetEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::TreeWidgetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::TreeWidgetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__TreeWidgetEditor))
        return static_cast<void*>(const_cast< TreeWidgetEditor*>(this));
    return AbstractItemEditor::qt_metacast(_clname);
}

int qdesigner_internal::TreeWidgetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractItemEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_qdesigner_internal__TreeWidgetEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__TreeWidgetEditorDialog[] = {
    "qdesigner_internal::TreeWidgetEditorDialog\0"
};

void qdesigner_internal::TreeWidgetEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qdesigner_internal::TreeWidgetEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::TreeWidgetEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__TreeWidgetEditorDialog,
      qt_meta_data_qdesigner_internal__TreeWidgetEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::TreeWidgetEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::TreeWidgetEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::TreeWidgetEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__TreeWidgetEditorDialog))
        return static_cast<void*>(const_cast< TreeWidgetEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::TreeWidgetEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
