/****************************************************************************
** Meta object code from reading C++ file 'q3action.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/q3action.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3action.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3Action[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      11,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      22,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,    9,    9,    9, 0x0a,
      47,    9,    9,    9, 0x0a,
      56,    9,    9,    9, 0x0a,
      68,    9,    9,    9, 0x0a,
      85,    9,    9,    9, 0x0a,
     103,    9,    9,    9, 0x0a,
     120,    9,    9,    9, 0x08,
     141,    9,    9,    9, 0x08,
     165,    9,    9,    9, 0x08,
     186,  183,    9,    9, 0x08,
     206,    9,    9,    9, 0x08,
     230,    9,    9,    9, 0x08,

 // properties: name, type, flags
     253,  248, 0x01095103,
     266,  248, 0x01095103,
     269,  248, 0x01095103,
     283,  277, 0x45095103,
     299,  291, 0x0a095103,
     304,  291, 0x0a095103,
     313,  291, 0x0a095103,
     321,  291, 0x0a095103,
     331,  291, 0x0a095103,
     354,  341, 0x4c095103,
     360,  248, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_Q3Action[] = {
    "Q3Action\0\0activated()\0toggled(bool)\0"
    "activate()\0toggle()\0setOn(bool)\0"
    "setEnabled(bool)\0setDisabled(bool)\0"
    "setVisible(bool)\0internalActivation()\0"
    "toolButtonToggled(bool)\0objectDestroyed()\0"
    "id\0menuStatusText(int)\0showStatusText(QString)\0"
    "clearStatusText()\0bool\0toggleAction\0"
    "on\0enabled\0QIcon\0iconSet\0QString\0text\0"
    "menuText\0toolTip\0statusTip\0whatsThis\0"
    "QKeySequence\0accel\0visible\0"
};

void Q3Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3Action *_t = static_cast<Q3Action *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->activate(); break;
        case 3: _t->toggle(); break;
        case 4: _t->setOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->internalActivation(); break;
        case 9: _t->toolButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->objectDestroyed(); break;
        case 11: _t->menuStatusText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->showStatusText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->clearStatusText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3Action::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3Action::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3Action,
      qt_meta_data_Q3Action, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3Action::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3Action::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3Action))
        return static_cast<void*>(const_cast< Q3Action*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isToggleAction(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isOn(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = iconSet(); break;
        case 4: *reinterpret_cast< QString*>(_v) = text(); break;
        case 5: *reinterpret_cast< QString*>(_v) = menuText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = toolTip(); break;
        case 7: *reinterpret_cast< QString*>(_v) = statusTip(); break;
        case 8: *reinterpret_cast< QString*>(_v) = whatsThis(); break;
        case 9: *reinterpret_cast< QKeySequence*>(_v) = accel(); break;
        case 10: *reinterpret_cast< bool*>(_v) = isVisible(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setToggleAction(*reinterpret_cast< bool*>(_v)); break;
        case 1: setOn(*reinterpret_cast< bool*>(_v)); break;
        case 2: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setIconSet(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: setText(*reinterpret_cast< QString*>(_v)); break;
        case 5: setMenuText(*reinterpret_cast< QString*>(_v)); break;
        case 6: setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 7: setStatusTip(*reinterpret_cast< QString*>(_v)); break;
        case 8: setWhatsThis(*reinterpret_cast< QString*>(_v)); break;
        case 9: setAccel(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 10: setVisible(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Q3Action::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Q3Action::toggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Q3ActionGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      35,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   14,   14,   14, 0x08,
      75,   14,   14,   14, 0x08,
      92,   14,   14,   14, 0x08,
     109,   14,   14,   14, 0x08,
     140,   14,   14,   14, 0x08,
     173,   14,   14,   14, 0x08,
     199,   14,   14,   14, 0x08,

 // properties: name, type, flags
     222,  217, 0x01095103,
     232,  217, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_Q3ActionGroup[] = {
    "Q3ActionGroup\0\0selected(Q3Action*)\0"
    "activated(Q3Action*)\0childToggled(bool)\0"
    "childActivated()\0childDestroyed()\0"
    "internalComboBoxActivated(int)\0"
    "internalComboBoxHighlighted(int)\0"
    "internalToggle(Q3Action*)\0objectDestroyed()\0"
    "bool\0exclusive\0usesDropDown\0"
};

void Q3ActionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3ActionGroup *_t = static_cast<Q3ActionGroup *>(_o);
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< Q3Action*(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< Q3Action*(*)>(_a[1]))); break;
        case 2: _t->childToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->childActivated(); break;
        case 4: _t->childDestroyed(); break;
        case 5: _t->internalComboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->internalComboBoxHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->internalToggle((*reinterpret_cast< Q3Action*(*)>(_a[1]))); break;
        case 8: _t->objectDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3ActionGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3ActionGroup::staticMetaObject = {
    { &Q3Action::staticMetaObject, qt_meta_stringdata_Q3ActionGroup,
      qt_meta_data_Q3ActionGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3ActionGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3ActionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3ActionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3ActionGroup))
        return static_cast<void*>(const_cast< Q3ActionGroup*>(this));
    return Q3Action::qt_metacast(_clname);
}

int Q3ActionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isExclusive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = usesDropDown(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setExclusive(*reinterpret_cast< bool*>(_v)); break;
        case 1: setUsesDropDown(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Q3ActionGroup::selected(Q3Action * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q3ActionGroup::activated(Q3Action * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
