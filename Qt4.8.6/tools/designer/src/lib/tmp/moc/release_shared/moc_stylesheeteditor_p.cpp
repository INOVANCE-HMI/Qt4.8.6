/****************************************************************************
** Meta object code from reading C++ file 'stylesheeteditor_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/stylesheeteditor_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stylesheeteditor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__StyleSheetEditor[] = {

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

static const char qt_meta_stringdata_qdesigner_internal__StyleSheetEditor[] = {
    "qdesigner_internal::StyleSheetEditor\0"
};

void qdesigner_internal::StyleSheetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qdesigner_internal::StyleSheetEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::StyleSheetEditor::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StyleSheetEditor,
      qt_meta_data_qdesigner_internal__StyleSheetEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::StyleSheetEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::StyleSheetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::StyleSheetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StyleSheetEditor))
        return static_cast<void*>(const_cast< StyleSheetEditor*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int qdesigner_internal::StyleSheetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_qdesigner_internal__StyleSheetEditorDialog[] = {

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
      44,   43,   43,   43, 0x08,
      69,   65,   43,   43, 0x08,
     111,  102,   43,   43, 0x08,
     136,  102,   43,   43, 0x08,
     161,  102,   43,   43, 0x08,
     183,   43,   43,   43, 0x08,
     197,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog[] = {
    "qdesigner_internal::StyleSheetEditorDialog\0"
    "\0validateStyleSheet()\0pos\0"
    "slotContextMenuRequested(QPoint)\0"
    "property\0slotAddResource(QString)\0"
    "slotAddGradient(QString)\0slotAddColor(QString)\0"
    "slotAddFont()\0slotRequestHelp()\0"
};

void qdesigner_internal::StyleSheetEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StyleSheetEditorDialog *_t = static_cast<StyleSheetEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->validateStyleSheet(); break;
        case 1: _t->slotContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->slotAddResource((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotAddGradient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotAddColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotAddFont(); break;
        case 6: _t->slotRequestHelp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::StyleSheetEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::StyleSheetEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog,
      qt_meta_data_qdesigner_internal__StyleSheetEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::StyleSheetEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::StyleSheetEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::StyleSheetEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog))
        return static_cast<void*>(const_cast< StyleSheetEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::StyleSheetEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_qdesigner_internal__StyleSheetPropertyEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      52,   51,   51,   51, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog[] = {
    "qdesigner_internal::StyleSheetPropertyEditorDialog\0"
    "\0applyStyleSheet()\0"
};

void qdesigner_internal::StyleSheetPropertyEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StyleSheetPropertyEditorDialog *_t = static_cast<StyleSheetPropertyEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->applyStyleSheet(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qdesigner_internal::StyleSheetPropertyEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::StyleSheetPropertyEditorDialog::staticMetaObject = {
    { &StyleSheetEditorDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog,
      qt_meta_data_qdesigner_internal__StyleSheetPropertyEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::StyleSheetPropertyEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::StyleSheetPropertyEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::StyleSheetPropertyEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog))
        return static_cast<void*>(const_cast< StyleSheetPropertyEditorDialog*>(this));
    return StyleSheetEditorDialog::qt_metacast(_clname);
}

int qdesigner_internal::StyleSheetPropertyEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleSheetEditorDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
