/****************************************************************************
** Meta object code from reading C++ file 'q3iconview_extrainfo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../q3iconview/q3iconview_extrainfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3iconview_extrainfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3IconViewExtraInfo[] = {

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

static const char qt_meta_stringdata_Q3IconViewExtraInfo[] = {
    "Q3IconViewExtraInfo\0"
};

void Q3IconViewExtraInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3IconViewExtraInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3IconViewExtraInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3IconViewExtraInfo,
      qt_meta_data_Q3IconViewExtraInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3IconViewExtraInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3IconViewExtraInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3IconViewExtraInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3IconViewExtraInfo))
        return static_cast<void*>(const_cast< Q3IconViewExtraInfo*>(this));
    if (!strcmp(_clname, "QDesignerExtraInfoExtension"))
        return static_cast< QDesignerExtraInfoExtension*>(const_cast< Q3IconViewExtraInfo*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.ExtraInfo.2"))
        return static_cast< QDesignerExtraInfoExtension*>(const_cast< Q3IconViewExtraInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3IconViewExtraInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Q3IconViewExtraInfoFactory[] = {

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

static const char qt_meta_stringdata_Q3IconViewExtraInfoFactory[] = {
    "Q3IconViewExtraInfoFactory\0"
};

void Q3IconViewExtraInfoFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Q3IconViewExtraInfoFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3IconViewExtraInfoFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_Q3IconViewExtraInfoFactory,
      qt_meta_data_Q3IconViewExtraInfoFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3IconViewExtraInfoFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3IconViewExtraInfoFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3IconViewExtraInfoFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3IconViewExtraInfoFactory))
        return static_cast<void*>(const_cast< Q3IconViewExtraInfoFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int Q3IconViewExtraInfoFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
