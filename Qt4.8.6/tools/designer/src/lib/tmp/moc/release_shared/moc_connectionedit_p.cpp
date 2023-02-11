/****************************************************************************
** Meta object code from reading C++ file 'connectionedit_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/connectionedit_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionedit_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__ConnectionEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   36,   35,   35, 0x05,
      70,   66,   35,   35, 0x05,
      99,   66,   35,   35, 0x05,
     136,   36,   35,   35, 0x05,
     159,   66,   35,   35, 0x05,
     195,  191,   35,   35, 0x05,
     221,   66,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     252,   35,   35,   35, 0x0a,
     265,   35,   35,   35, 0x0a,
     277,   35,   35,   35, 0x0a,
     305,  294,   35,   35, 0x0a,
     329,   35,   35,   35, 0x0a,
     350,  348,   35,   35, 0x0a,
     376,  374,   35,   35, 0x0a,
     400,   35,   35,   35, 0x0a,
     421,  414,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ConnectionEdit[] = {
    "qdesigner_internal::ConnectionEdit\0\0"
    "idx\0aboutToAddConnection(int)\0con\0"
    "connectionAdded(Connection*)\0"
    "aboutToRemoveConnection(Connection*)\0"
    "connectionRemoved(int)\0"
    "connectionSelected(Connection*)\0wgt\0"
    "widgetActivated(QWidget*)\0"
    "connectionChanged(Connection*)\0"
    "selectNone()\0selectAll()\0deleteSelected()\0"
    "background\0setBackground(QWidget*)\0"
    "updateBackground()\0w\0widgetRemoved(QWidget*)\0"
    "o\0objectRemoved(QObject*)\0updateLines()\0"
    "enable\0enableUpdateBackground(bool)\0"
};

void qdesigner_internal::ConnectionEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectionEdit *_t = static_cast<ConnectionEdit *>(_o);
        switch (_id) {
        case 0: _t->aboutToAddConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->connectionAdded((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 2: _t->aboutToRemoveConnection((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 3: _t->connectionRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->connectionSelected((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 5: _t->widgetActivated((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: _t->connectionChanged((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 7: _t->selectNone(); break;
        case 8: _t->selectAll(); break;
        case 9: _t->deleteSelected(); break;
        case 10: _t->setBackground((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 11: _t->updateBackground(); break;
        case 12: _t->widgetRemoved((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 13: _t->objectRemoved((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 14: _t->updateLines(); break;
        case 15: _t->enableUpdateBackground((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::ConnectionEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::ConnectionEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ConnectionEdit,
      qt_meta_data_qdesigner_internal__ConnectionEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ConnectionEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ConnectionEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ConnectionEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ConnectionEdit))
        return static_cast<void*>(const_cast< ConnectionEdit*>(this));
    if (!strcmp(_clname, "CETypes"))
        return static_cast< CETypes*>(const_cast< ConnectionEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::ConnectionEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ConnectionEdit::aboutToAddConnection(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ConnectionEdit::connectionAdded(Connection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ConnectionEdit::aboutToRemoveConnection(Connection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qdesigner_internal::ConnectionEdit::connectionRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qdesigner_internal::ConnectionEdit::connectionSelected(Connection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qdesigner_internal::ConnectionEdit::widgetActivated(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qdesigner_internal::ConnectionEdit::connectionChanged(Connection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
