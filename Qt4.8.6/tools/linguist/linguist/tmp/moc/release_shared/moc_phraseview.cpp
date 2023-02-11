/****************************************************************************
** Meta object code from reading C++ file 'phraseview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../phraseview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phraseview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuessShortcut[] = {

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
      20,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GuessShortcut[] = {
    "GuessShortcut\0\0nkey\0activated(int)\0"
    "keyActivated()\0"
};

void GuessShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GuessShortcut *_t = static_cast<GuessShortcut *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->keyActivated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GuessShortcut::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GuessShortcut::staticMetaObject = {
    { &QShortcut::staticMetaObject, qt_meta_stringdata_GuessShortcut,
      qt_meta_data_GuessShortcut, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuessShortcut::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuessShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuessShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuessShortcut))
        return static_cast<void*>(const_cast< GuessShortcut*>(this));
    return QShortcut::qt_metacast(_clname);
}

int GuessShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QShortcut::qt_metacall(_c, _id, _a);
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
void GuessShortcut::activated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PhraseView[] = {

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
      31,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   11,   11,   11, 0x0a,
      76,   11,   11,   11, 0x0a,
      90,   85,   11,   11, 0x08,
     115,  109,   11,   11, 0x08,
     141,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PhraseView[] = {
    "PhraseView\0\0latestModel,phrase\0"
    "phraseSelected(int,QString)\0"
    "toggleGuessing()\0update()\0nkey\0"
    "guessShortcut(int)\0index\0"
    "selectPhrase(QModelIndex)\0selectPhrase()\0"
    "editPhrase()\0"
};

void PhraseView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PhraseView *_t = static_cast<PhraseView *>(_o);
        switch (_id) {
        case 0: _t->phraseSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->toggleGuessing(); break;
        case 2: _t->update(); break;
        case 3: _t->guessShortcut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->selectPhrase((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->selectPhrase(); break;
        case 6: _t->editPhrase(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PhraseView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PhraseView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_PhraseView,
      qt_meta_data_PhraseView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PhraseView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PhraseView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PhraseView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PhraseView))
        return static_cast<void*>(const_cast< PhraseView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int PhraseView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void PhraseView::phraseSelected(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
