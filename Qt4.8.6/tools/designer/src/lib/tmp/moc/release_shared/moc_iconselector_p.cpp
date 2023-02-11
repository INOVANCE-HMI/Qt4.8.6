/****************************************************************************
** Meta object code from reading C++ file 'iconselector_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/iconselector_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iconselector_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__LanguageResourceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   43,   43,   43, 0x08,
      59,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__LanguageResourceDialog[] = {
    "qdesigner_internal::LanguageResourceDialog\0"
    "\0slotAccepted()\0slotPathChanged(QString)\0"
};

void qdesigner_internal::LanguageResourceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LanguageResourceDialog *_t = static_cast<LanguageResourceDialog *>(_o);
        switch (_id) {
        case 0: _t->d_func()->slotAccepted(); break;
        case 1: _t->d_func()->slotPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::LanguageResourceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::LanguageResourceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__LanguageResourceDialog,
      qt_meta_data_qdesigner_internal__LanguageResourceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::LanguageResourceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::LanguageResourceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::LanguageResourceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__LanguageResourceDialog))
        return static_cast<void*>(const_cast< LanguageResourceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::LanguageResourceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_qdesigner_internal__IconSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   34,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   33,   33,   33, 0x08,
      96,   33,   33,   33, 0x08,
     115,   33,   33,   33, 0x08,
     142,   33,   33,   33, 0x08,
     165,   33,   33,   33, 0x08,
     186,   33,   33,   33, 0x08,
     210,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__IconSelector[] = {
    "qdesigner_internal::IconSelector\0\0"
    "icon\0iconChanged(PropertySheetIconValue)\0"
    "slotStateActivated()\0slotSetActivated()\0"
    "slotSetResourceActivated()\0"
    "slotSetFileActivated()\0slotResetActivated()\0"
    "slotResetAllActivated()\0slotUpdate()\0"
};

void qdesigner_internal::IconSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IconSelector *_t = static_cast<IconSelector *>(_o);
        switch (_id) {
        case 0: _t->iconChanged((*reinterpret_cast< const PropertySheetIconValue(*)>(_a[1]))); break;
        case 1: _t->d_func()->slotStateActivated(); break;
        case 2: _t->d_func()->slotSetActivated(); break;
        case 3: _t->d_func()->slotSetResourceActivated(); break;
        case 4: _t->d_func()->slotSetFileActivated(); break;
        case 5: _t->d_func()->slotResetActivated(); break;
        case 6: _t->d_func()->slotResetAllActivated(); break;
        case 7: _t->d_func()->slotUpdate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::IconSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::IconSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__IconSelector,
      qt_meta_data_qdesigner_internal__IconSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::IconSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::IconSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::IconSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__IconSelector))
        return static_cast<void*>(const_cast< IconSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::IconSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::IconSelector::iconChanged(const PropertySheetIconValue & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_qdesigner_internal__IconThemeEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   36,   36,   36, 0x0a,
      61,   36,   36,   36, 0x08,

 // properties: name, type, flags
      90,   82, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__IconThemeEditor[] = {
    "qdesigner_internal::IconThemeEditor\0"
    "\0edited(QString)\0reset()\0slotChanged(QString)\0"
    "QString\0theme\0"
};

void qdesigner_internal::IconThemeEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IconThemeEditor *_t = static_cast<IconThemeEditor *>(_o);
        switch (_id) {
        case 0: _t->edited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->reset(); break;
        case 2: _t->slotChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::IconThemeEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::IconThemeEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__IconThemeEditor,
      qt_meta_data_qdesigner_internal__IconThemeEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::IconThemeEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::IconThemeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::IconThemeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__IconThemeEditor))
        return static_cast<void*>(const_cast< IconThemeEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::IconThemeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = theme(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTheme(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qdesigner_internal::IconThemeEditor::edited(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
