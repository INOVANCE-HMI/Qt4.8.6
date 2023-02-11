/****************************************************************************
** Meta object code from reading C++ file 'semantic.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../semantic.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'semantic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Semantic[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x05,
      36,   10,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Semantic[] = {
    "Semantic\0\0message\0error(QByteArray)\0"
    "warning(QByteArray)\0"
};

void Semantic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Semantic *_t = static_cast<Semantic *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->warning((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Semantic::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Semantic::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Semantic,
      qt_meta_data_Semantic, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Semantic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Semantic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Semantic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Semantic))
        return static_cast<void*>(const_cast< Semantic*>(this));
    if (!strcmp(_clname, "TreeWalker"))
        return static_cast< TreeWalker*>(const_cast< Semantic*>(this));
    return QObject::qt_metacast(_clname);
}

int Semantic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Semantic::error(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Semantic::warning(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
