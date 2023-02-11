/****************************************************************************
** Meta object code from reading C++ file 'qdesigner.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdesigner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesigner[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   25,   10,   10, 0x0a,
      63,   10,   10,   10, 0x08,
      76,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDesigner[] = {
    "QDesigner\0\0initialized()\0message\0"
    "showErrorMessage(const char*)\0"
    "initialize()\0callCreateForm()\0"
};

void QDesigner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesigner *_t = static_cast<QDesigner *>(_o);
        switch (_id) {
        case 0: _t->initialized(); break;
        case 1: _t->showErrorMessage((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->initialize(); break;
        case 3: _t->callCreateForm(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesigner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesigner::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_QDesigner,
      qt_meta_data_QDesigner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesigner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesigner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesigner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesigner))
        return static_cast<void*>(const_cast< QDesigner*>(this));
    return QApplication::qt_metacast(_clname);
}

int QDesigner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QDesigner::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
