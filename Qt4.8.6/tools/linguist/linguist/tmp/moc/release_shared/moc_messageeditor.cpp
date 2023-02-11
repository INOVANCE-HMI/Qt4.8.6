/****************************************************************************
** Meta object code from reading C++ file 'messageeditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../messageeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messageeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   15,   14,   14, 0x05,
      68,   60,   14,   14, 0x05,
     108,  102,   14,   14, 0x05,
     138,  132,   14,   14, 0x05,
     158,  132,   14,   14, 0x05,
     178,  132,   14,   14, 0x05,
     197,  132,   14,   14, 0x05,
     217,  132,   14,   14, 0x05,
     245,  238,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     276,   14,   14,   14, 0x0a,
     283,   14,   14,   14, 0x0a,
     290,   14,   14,   14, 0x0a,
     296,   14,   14,   14, 0x0a,
     303,   14,   14,   14, 0x0a,
     311,   14,   14,   14, 0x0a,
     323,   14,   14,   14, 0x0a,
     341,   14,   14,   14, 0x0a,
     382,  358,   14,   14, 0x0a,
     413,  410,   14,   14, 0x0a,
     437,   14,   14,   14, 0x08,
     463,   14,   14,   14, 0x08,
     481,   14,   14,   14, 0x08,
     510,   14,   14,   14, 0x08,
     532,   14,   14,   14, 0x08,
     567,   14,   14,   14, 0x08,
     608,   14,   14,   14, 0x08,
     625,   14,   14,   14, 0x08,
     644,   14,   14,   14, 0x08,
     667,  102,   14,   14, 0x08,
     692,   14,   14,   14, 0x08,
     711,  102,   14,   14, 0x08,
     734,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MessageEditor[] = {
    "MessageEditor\0\0translations\0"
    "translationChanged(QStringList)\0comment\0"
    "translatorCommentChanged(QString)\0"
    "model\0activeModelChanged(int)\0avail\0"
    "undoAvailable(bool)\0redoAvailable(bool)\0"
    "cutAvailable(bool)\0copyAvailable(bool)\0"
    "pasteAvailable(bool)\0enable\0"
    "beginFromSourceAvailable(bool)\0undo()\0"
    "redo()\0cut()\0copy()\0paste()\0selectAll()\0"
    "beginFromSource()\0setEditorFocus()\0"
    "latestModel,translation\0"
    "setTranslation(int,QString)\0on\0"
    "setLengthVariants(bool)\0"
    "editorCreated(QTextEdit*)\0editorDestroyed()\0"
    "selectionChanged(QTextEdit*)\0"
    "resetHoverSelection()\0"
    "emitTranslationChanged(QTextEdit*)\0"
    "emitTranslatorCommentChanged(QTextEdit*)\0"
    "updateCanPaste()\0clipboardChanged()\0"
    "messageModelAppended()\0messageModelDeleted(int)\0"
    "allModelsDeleted()\0setTargetLanguage(int)\0"
    "reallyFixTabOrder()\0"
};

void MessageEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageEditor *_t = static_cast<MessageEditor *>(_o);
        switch (_id) {
        case 0: _t->translationChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->translatorCommentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->activeModelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->cutAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->pasteAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->beginFromSourceAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->undo(); break;
        case 10: _t->redo(); break;
        case 11: _t->cut(); break;
        case 12: _t->copy(); break;
        case 13: _t->paste(); break;
        case 14: _t->selectAll(); break;
        case 15: _t->beginFromSource(); break;
        case 16: _t->setEditorFocus(); break;
        case 17: _t->setTranslation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->setLengthVariants((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->editorCreated((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 20: _t->editorDestroyed(); break;
        case 21: _t->selectionChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 22: _t->resetHoverSelection(); break;
        case 23: _t->emitTranslationChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 24: _t->emitTranslatorCommentChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 25: _t->updateCanPaste(); break;
        case 26: _t->clipboardChanged(); break;
        case 27: _t->messageModelAppended(); break;
        case 28: _t->messageModelDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->allModelsDeleted(); break;
        case 30: _t->setTargetLanguage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->reallyFixTabOrder(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessageEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageEditor::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_MessageEditor,
      qt_meta_data_MessageEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageEditor))
        return static_cast<void*>(const_cast< MessageEditor*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int MessageEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void MessageEditor::translationChanged(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessageEditor::translatorCommentChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessageEditor::activeModelChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MessageEditor::undoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MessageEditor::redoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MessageEditor::cutAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MessageEditor::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MessageEditor::pasteAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MessageEditor::beginFromSourceAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
