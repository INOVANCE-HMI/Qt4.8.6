/****************************************************************************
** Meta object code from reading C++ file 'preferencesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../preferencesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferencesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreferencesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      39,   18,   18,   18, 0x05,
      63,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   85,   18,   18, 0x08,
     125,   18,   18,   18, 0x08,
     143,   18,   18,   18, 0x08,
     155,   18,   18,   18, 0x08,
     170,   18,   18,   18, 0x08,
     194,   18,   18,   18, 0x08,
     216,   18,   18,   18, 0x08,
     234,  231,   18,   18, 0x08,
     268,  262,   18,   18, 0x08,
     295,  231,   18,   18, 0x08,
     327,  262,   18,   18, 0x08,
     358,   18,   18,   18, 0x08,
     373,   18,   18,   18, 0x08,
     390,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PreferencesDialog[] = {
    "PreferencesDialog\0\0updateBrowserFont()\0"
    "updateApplicationFont()\0updateUserInterface()\0"
    "item\0updateAttributes(QListWidgetItem*)\0"
    "updateFilterMap()\0addFilter()\0"
    "removeFilter()\0addDocumentationLocal()\0"
    "removeDocumentation()\0applyChanges()\0"
    "on\0appFontSettingToggled(bool)\0index\0"
    "appFontSettingChanged(int)\0"
    "browserFontSettingToggled(bool)\0"
    "browserFontSettingChanged(int)\0"
    "setBlankPage()\0setCurrentPage()\0"
    "setDefaultPage()\0"
};

void PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        switch (_id) {
        case 0: _t->updateBrowserFont(); break;
        case 1: _t->updateApplicationFont(); break;
        case 2: _t->updateUserInterface(); break;
        case 3: _t->updateAttributes((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->updateFilterMap(); break;
        case 5: _t->addFilter(); break;
        case 6: _t->removeFilter(); break;
        case 7: _t->addDocumentationLocal(); break;
        case 8: _t->removeDocumentation(); break;
        case 9: _t->applyChanges(); break;
        case 10: _t->appFontSettingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->appFontSettingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->browserFontSettingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->browserFontSettingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setBlankPage(); break;
        case 15: _t->setCurrentPage(); break;
        case 16: _t->setDefaultPage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreferencesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreferencesDialog,
      qt_meta_data_PreferencesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreferencesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreferencesDialog))
        return static_cast<void*>(const_cast< PreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PreferencesDialog::updateBrowserFont()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PreferencesDialog::updateApplicationFont()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PreferencesDialog::updateUserInterface()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
