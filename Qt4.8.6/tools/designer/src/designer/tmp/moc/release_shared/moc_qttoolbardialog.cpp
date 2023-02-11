/****************************************************************************
** Meta object code from reading C++ file 'qttoolbardialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../shared/qttoolbardialog/qttoolbardialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttoolbardialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtToolBarManager[] = {

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

static const char qt_meta_stringdata_QtToolBarManager[] = {
    "QtToolBarManager\0"
};

void QtToolBarManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QtToolBarManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtToolBarManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtToolBarManager,
      qt_meta_data_QtToolBarManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtToolBarManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtToolBarManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtToolBarManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtToolBarManager))
        return static_cast<void*>(const_cast< QtToolBarManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QtToolBarManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QtToolBarDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      30,   16,   16,   16, 0x08,
      46,   16,   16,   16, 0x08,
      63,   16,   16,   16, 0x08,
      75,   16,   16,   16, 0x08,
      90,   16,   16,   16, 0x08,
     106,   16,   16,   16, 0x08,
     118,   16,   16,   16, 0x08,
     132,   16,   16,   16, 0x08,
     146,   16,   16,   16, 0x08,
     161,   16,   16,   16, 0x08,
     177,   16,   16,   16, 0x08,
     210,   16,   16,   16, 0x08,
     249,   16,   16,   16, 0x08,
     289,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtToolBarDialog[] = {
    "QtToolBarDialog\0\0newClicked()\0"
    "removeClicked()\0defaultClicked()\0"
    "okClicked()\0applyClicked()\0cancelClicked()\0"
    "upClicked()\0downClicked()\0leftClicked()\0"
    "rightClicked()\0renameClicked()\0"
    "toolBarRenamed(QListWidgetItem*)\0"
    "currentActionChanged(QTreeWidgetItem*)\0"
    "currentToolBarChanged(QListWidgetItem*)\0"
    "currentToolBarActionChanged(QListWidgetItem*)\0"
};

void QtToolBarDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtToolBarDialog *_t = static_cast<QtToolBarDialog *>(_o);
        switch (_id) {
        case 0: _t->d_func()->newClicked(); break;
        case 1: _t->d_func()->removeClicked(); break;
        case 2: _t->d_func()->defaultClicked(); break;
        case 3: _t->d_func()->okClicked(); break;
        case 4: _t->d_func()->applyClicked(); break;
        case 5: _t->d_func()->cancelClicked(); break;
        case 6: _t->d_func()->upClicked(); break;
        case 7: _t->d_func()->downClicked(); break;
        case 8: _t->d_func()->leftClicked(); break;
        case 9: _t->d_func()->rightClicked(); break;
        case 10: _t->d_func()->renameClicked(); break;
        case 11: _t->d_func()->toolBarRenamed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->d_func()->currentActionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->d_func()->currentToolBarChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 14: _t->d_func()->currentToolBarActionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtToolBarDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtToolBarDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QtToolBarDialog,
      qt_meta_data_QtToolBarDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtToolBarDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtToolBarDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtToolBarDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtToolBarDialog))
        return static_cast<void*>(const_cast< QtToolBarDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QtToolBarDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
