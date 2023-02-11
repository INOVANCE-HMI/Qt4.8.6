/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_membersheet_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qdesigner_membersheet_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_membersheet_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerMemberSheet[] = {

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

static const char qt_meta_stringdata_QDesignerMemberSheet[] = {
    "QDesignerMemberSheet\0"
};

void QDesignerMemberSheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDesignerMemberSheet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerMemberSheet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerMemberSheet,
      qt_meta_data_QDesignerMemberSheet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerMemberSheet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerMemberSheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerMemberSheet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerMemberSheet))
        return static_cast<void*>(const_cast< QDesignerMemberSheet*>(this));
    if (!strcmp(_clname, "QDesignerMemberSheetExtension"))
        return static_cast< QDesignerMemberSheetExtension*>(const_cast< QDesignerMemberSheet*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.MemberSheet"))
        return static_cast< QDesignerMemberSheetExtension*>(const_cast< QDesignerMemberSheet*>(this));
    return QObject::qt_metacast(_clname);
}

int QDesignerMemberSheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDesignerMemberSheetFactory[] = {

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

static const char qt_meta_stringdata_QDesignerMemberSheetFactory[] = {
    "QDesignerMemberSheetFactory\0"
};

void QDesignerMemberSheetFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDesignerMemberSheetFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerMemberSheetFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_QDesignerMemberSheetFactory,
      qt_meta_data_QDesignerMemberSheetFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerMemberSheetFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerMemberSheetFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerMemberSheetFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerMemberSheetFactory))
        return static_cast<void*>(const_cast< QDesignerMemberSheetFactory*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QAbstractExtensionFactory"))
        return static_cast< QAbstractExtensionFactory*>(const_cast< QDesignerMemberSheetFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int QDesignerMemberSheetFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
