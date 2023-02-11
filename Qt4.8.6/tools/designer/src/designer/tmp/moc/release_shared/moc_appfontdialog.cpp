/****************************************************************************
** Meta object code from reading C++ file 'appfontdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../appfontdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appfontdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppFontWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      26,   14,   14,   14, 0x08,
      44,   14,   14,   14, 0x08,
      80,   60,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AppFontWidget[] = {
    "AppFontWidget\0\0addFiles()\0slotRemoveFiles()\0"
    "slotRemoveAll()\0selected,deselected\0"
    "selectionChanged(QItemSelection,QItemSelection)\0"
};

void AppFontWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AppFontWidget *_t = static_cast<AppFontWidget *>(_o);
        switch (_id) {
        case 0: _t->addFiles(); break;
        case 1: _t->slotRemoveFiles(); break;
        case 2: _t->slotRemoveAll(); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AppFontWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppFontWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_AppFontWidget,
      qt_meta_data_AppFontWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppFontWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppFontWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppFontWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppFontWidget))
        return static_cast<void*>(const_cast< AppFontWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int AppFontWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_AppFontDialog[] = {

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

static const char qt_meta_stringdata_AppFontDialog[] = {
    "AppFontDialog\0"
};

void AppFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AppFontDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppFontDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AppFontDialog,
      qt_meta_data_AppFontDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppFontDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppFontDialog))
        return static_cast<void*>(const_cast< AppFontDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AppFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
