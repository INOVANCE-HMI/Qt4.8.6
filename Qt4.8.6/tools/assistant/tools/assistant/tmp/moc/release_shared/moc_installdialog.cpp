/****************************************************************************
** Meta object code from reading C++ file 'installdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../installdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'installdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InstallDialog[] = {

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
      15,   14,   14,   14, 0x08,
      22,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      65,   49,   14,   14, 0x08,
     110,   95,   14,   14, 0x08,
     171,  150,   14,   14, 0x08,
     203,   14,   14,   14, 0x08,
     225,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InstallDialog[] = {
    "InstallDialog\0\0init()\0cancelDownload()\0"
    "install()\0requestId,error\0"
    "httpRequestFinished(int,bool)\0"
    "responseHeader\0readResponseHeader(QHttpResponseHeader)\0"
    "bytesRead,totalBytes\0"
    "updateDataReadProgress(int,int)\0"
    "updateInstallButton()\0browseDirectories()\0"
};

void InstallDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InstallDialog *_t = static_cast<InstallDialog *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cancelDownload(); break;
        case 2: _t->install(); break;
        case 3: _t->httpRequestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->readResponseHeader((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 5: _t->updateDataReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateInstallButton(); break;
        case 7: _t->browseDirectories(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InstallDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InstallDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InstallDialog,
      qt_meta_data_InstallDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InstallDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InstallDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InstallDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InstallDialog))
        return static_cast<void*>(const_cast< InstallDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int InstallDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
