/****************************************************************************
** Meta object code from reading C++ file 'messageeditorwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../messageeditorwidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messageeditorwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExpandingTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   19,   18,   18, 0x08,
      53,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExpandingTextEdit[] = {
    "ExpandingTextEdit\0\0documentSize\0"
    "updateHeight(QSizeF)\0reallyEnsureCursorVisible()\0"
};

void ExpandingTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExpandingTextEdit *_t = static_cast<ExpandingTextEdit *>(_o);
        switch (_id) {
        case 0: _t->updateHeight((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 1: _t->reallyEnsureCursorVisible(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExpandingTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExpandingTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_ExpandingTextEdit,
      qt_meta_data_ExpandingTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExpandingTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExpandingTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExpandingTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExpandingTextEdit))
        return static_cast<void*>(const_cast< ExpandingTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int ExpandingTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_FormatTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   34,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FormatTextEdit[] = {
    "FormatTextEdit\0\0editorDestroyed()\0"
    "text,userAction\0setPlainText(QString,bool)\0"
};

void FormatTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormatTextEdit *_t = static_cast<FormatTextEdit *>(_o);
        switch (_id) {
        case 0: _t->editorDestroyed(); break;
        case 1: _t->setPlainText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FormatTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FormatTextEdit::staticMetaObject = {
    { &ExpandingTextEdit::staticMetaObject, qt_meta_stringdata_FormatTextEdit,
      qt_meta_data_FormatTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormatTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormatTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormatTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormatTextEdit))
        return static_cast<void*>(const_cast< FormatTextEdit*>(this));
    return ExpandingTextEdit::qt_metacast(_clname);
}

int FormatTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExpandingTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FormatTextEdit::editorDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_FormWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      36,   11,   11,   11, 0x05,
      65,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   11,   11,   11, 0x08,
     112,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormWidget[] = {
    "FormWidget\0\0textChanged(QTextEdit*)\0"
    "selectionChanged(QTextEdit*)\0"
    "cursorPositionChanged()\0slotSelectionChanged()\0"
    "slotTextChanged()\0"
};

void FormWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormWidget *_t = static_cast<FormWidget *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 2: _t->cursorPositionChanged(); break;
        case 3: _t->slotSelectionChanged(); break;
        case 4: _t->slotTextChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FormWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FormWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormWidget,
      qt_meta_data_FormWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormWidget))
        return static_cast<void*>(const_cast< FormWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FormWidget::textChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormWidget::selectionChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormWidget::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_FormMultiWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      43,   16,   16,   16, 0x05,
      67,   16,   16,   16, 0x05,
      96,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,   16,   16,   16, 0x08,
     138,   16,   16,   16, 0x08,
     161,   16,   16,   16, 0x08,
     182,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormMultiWidget[] = {
    "FormMultiWidget\0\0editorCreated(QTextEdit*)\0"
    "textChanged(QTextEdit*)\0"
    "selectionChanged(QTextEdit*)\0"
    "cursorPositionChanged()\0slotTextChanged()\0"
    "slotSelectionChanged()\0minusButtonClicked()\0"
    "plusButtonClicked()\0"
};

void FormMultiWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormMultiWidget *_t = static_cast<FormMultiWidget *>(_o);
        switch (_id) {
        case 0: _t->editorCreated((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 3: _t->cursorPositionChanged(); break;
        case 4: _t->slotTextChanged(); break;
        case 5: _t->slotSelectionChanged(); break;
        case 6: _t->minusButtonClicked(); break;
        case 7: _t->plusButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FormMultiWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FormMultiWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormMultiWidget,
      qt_meta_data_FormMultiWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormMultiWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormMultiWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormMultiWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormMultiWidget))
        return static_cast<void*>(const_cast< FormMultiWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormMultiWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FormMultiWidget::editorCreated(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormMultiWidget::textChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormMultiWidget::selectionChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FormMultiWidget::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
