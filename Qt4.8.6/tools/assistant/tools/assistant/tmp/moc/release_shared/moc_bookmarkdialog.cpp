/****************************************************************************
** Meta object code from reading C++ file 'bookmarkdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bookmarkdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x08,
      47,   16,   15,   15, 0x08,
      80,   15,   15,   15, 0x08,
      91,   15,   15,   15, 0x08,
     102,   15,   15,   15, 0x08,
     114,   15,   15,   15, 0x08,
     139,  134,   15,   15, 0x08,
     166,  160,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkDialog[] = {
    "BookmarkDialog\0\0index\0currentIndexChanged(int)\0"
    "currentIndexChanged(QModelIndex)\0"
    "accepted()\0rejected()\0addFolder()\0"
    "toolButtonClicked()\0text\0textChanged(QString)\0"
    "point\0customContextMenuRequested(QPoint)\0"
};

void BookmarkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkDialog *_t = static_cast<BookmarkDialog *>(_o);
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->accepted(); break;
        case 3: _t->rejected(); break;
        case 4: _t->addFolder(); break;
        case 5: _t->toolButtonClicked(); break;
        case 6: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarkDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BookmarkDialog,
      qt_meta_data_BookmarkDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkDialog))
        return static_cast<void*>(const_cast< BookmarkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BookmarkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
