/****************************************************************************
** Meta object code from reading C++ file 'q3gridview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/q3gridview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3gridview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3GridView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      15,   11, 0x02095103,
      23,   11, 0x02095103,
      31,   11, 0x02095103,
      41,   11, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_Q3GridView[] = {
    "Q3GridView\0int\0numRows\0numCols\0cellWidth\0"
    "cellHeight\0"
};

void Q3GridView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3GridView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3GridView::staticMetaObject = {
    { &Q3ScrollView::staticMetaObject, qt_meta_stringdata_Q3GridView,
      qt_meta_data_Q3GridView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3GridView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3GridView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3GridView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3GridView))
        return static_cast<void*>(const_cast< Q3GridView*>(this));
    return Q3ScrollView::qt_metacast(_clname);
}

int Q3GridView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ScrollView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = numRows(); break;
        case 1: *reinterpret_cast< int*>(_v) = numCols(); break;
        case 2: *reinterpret_cast< int*>(_v) = cellWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = cellHeight(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNumRows(*reinterpret_cast< int*>(_v)); break;
        case 1: setNumCols(*reinterpret_cast< int*>(_v)); break;
        case 2: setCellWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: setCellHeight(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
