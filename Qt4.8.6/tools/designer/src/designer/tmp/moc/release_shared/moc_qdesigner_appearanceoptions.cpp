/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_appearanceoptions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdesigner_appearanceoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_appearanceoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerAppearanceOptionsWidget[] = {

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
      43,   34,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerAppearanceOptionsWidget[] = {
    "QDesignerAppearanceOptionsWidget\0\0"
    "modified\0uiModeChanged(bool)\0"
    "slotUiModeComboChanged()\0"
};

void QDesignerAppearanceOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerAppearanceOptionsWidget *_t = static_cast<QDesignerAppearanceOptionsWidget *>(_o);
        switch (_id) {
        case 0: _t->uiModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotUiModeComboChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerAppearanceOptionsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerAppearanceOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesignerAppearanceOptionsWidget,
      qt_meta_data_QDesignerAppearanceOptionsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerAppearanceOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerAppearanceOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerAppearanceOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerAppearanceOptionsWidget))
        return static_cast<void*>(const_cast< QDesignerAppearanceOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesignerAppearanceOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QDesignerAppearanceOptionsWidget::uiModeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QDesignerAppearanceOptionsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerAppearanceOptionsPage[] = {
    "QDesignerAppearanceOptionsPage\0\0"
    "settingsChangedDelayed()\0"
};

void QDesignerAppearanceOptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerAppearanceOptionsPage *_t = static_cast<QDesignerAppearanceOptionsPage *>(_o);
        switch (_id) {
        case 0: _t->settingsChangedDelayed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDesignerAppearanceOptionsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerAppearanceOptionsPage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerAppearanceOptionsPage,
      qt_meta_data_QDesignerAppearanceOptionsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerAppearanceOptionsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerAppearanceOptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerAppearanceOptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerAppearanceOptionsPage))
        return static_cast<void*>(const_cast< QDesignerAppearanceOptionsPage*>(this));
    if (!strcmp(_clname, "QDesignerOptionsPageInterface"))
        return static_cast< QDesignerOptionsPageInterface*>(const_cast< QDesignerAppearanceOptionsPage*>(this));
    return QObject::qt_metacast(_clname);
}

int QDesignerAppearanceOptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QDesignerAppearanceOptionsPage::settingsChangedDelayed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
