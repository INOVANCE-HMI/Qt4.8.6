/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_promotiondialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_promotiondialog_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_promotiondialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__NewPromotedClassPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   43,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   42,   42,   42, 0x0a,
     103,   42,   42,   42, 0x0a,
     128,   42,   42,   42, 0x08,
     153,   42,   42,   42, 0x08,
     185,   42,   42,   42, 0x08,
     195,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel[] = {
    "qdesigner_internal::NewPromotedClassPanel\0"
    "\0,ok\0newPromotedClass(PromotionParameters,bool*)\0"
    "grabFocus()\0chooseBaseClass(QString)\0"
    "slotNameChanged(QString)\0"
    "slotIncludeFileChanged(QString)\0"
    "slotAdd()\0slotReset()\0"
};

void qdesigner_internal::NewPromotedClassPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewPromotedClassPanel *_t = static_cast<NewPromotedClassPanel *>(_o);
        switch (_id) {
        case 0: _t->newPromotedClass((*reinterpret_cast< const PromotionParameters(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 1: _t->grabFocus(); break;
        case 2: _t->chooseBaseClass((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotIncludeFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotAdd(); break;
        case 6: _t->slotReset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::NewPromotedClassPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::NewPromotedClassPanel::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel,
      qt_meta_data_qdesigner_internal__NewPromotedClassPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::NewPromotedClassPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::NewPromotedClassPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::NewPromotedClassPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel))
        return static_cast<void*>(const_cast< NewPromotedClassPanel*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int qdesigner_internal::NewPromotedClassPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::NewPromotedClassPanel::newPromotedClass(const PromotionParameters & _t1, bool * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_qdesigner_internal__QDesignerPromotionDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   45,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   45,   45,   45, 0x08,
      93,   45,   45,   45, 0x08,
     117,  115,   45,   45, 0x08,
     173,  169,   45,   45, 0x08,
     234,  221,   45,   45, 0x08,
     313,  304,   45,   45, 0x08,
     381,   45,   45,   45, 0x08,
     412,   45,   45,   45, 0x08,
     444,   45,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog[] = {
    "qdesigner_internal::QDesignerPromotionDialog\0"
    "\0selectedBaseClassChanged(QString)\0"
    "slotRemove()\0slotAcceptPromoteTo()\0,\0"
    "slotSelectionChanged(QItemSelection,QItemSelection)\0"
    ",ok\0slotNewPromotedClass(PromotionParameters,bool*)\0"
    ",includeFile\0"
    "slotIncludeFileChanged(QDesignerWidgetDataBaseItemInterface*,QString)\0"
    ",newName\0"
    "slotClassNameChanged(QDesignerWidgetDataBaseItemInterface*,QString)\0"
    "slotUpdateFromWidgetDatabase()\0"
    "slotTreeViewContextMenu(QPoint)\0"
    "slotEditSignalsSlots()\0"
};

void qdesigner_internal::QDesignerPromotionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerPromotionDialog *_t = static_cast<QDesignerPromotionDialog *>(_o);
        switch (_id) {
        case 0: _t->selectedBaseClassChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotRemove(); break;
        case 2: _t->slotAcceptPromoteTo(); break;
        case 3: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->slotNewPromotedClass((*reinterpret_cast< const PromotionParameters(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->slotIncludeFileChanged((*reinterpret_cast< QDesignerWidgetDataBaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->slotClassNameChanged((*reinterpret_cast< QDesignerWidgetDataBaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->slotUpdateFromWidgetDatabase(); break;
        case 8: _t->slotTreeViewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->slotEditSignalsSlots(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::QDesignerPromotionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::QDesignerPromotionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog,
      qt_meta_data_qdesigner_internal__QDesignerPromotionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::QDesignerPromotionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::QDesignerPromotionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::QDesignerPromotionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog))
        return static_cast<void*>(const_cast< QDesignerPromotionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerPromotionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::QDesignerPromotionDialog::selectedBaseClassChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
