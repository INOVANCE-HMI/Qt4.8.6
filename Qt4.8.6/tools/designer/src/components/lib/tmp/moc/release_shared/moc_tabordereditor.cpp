/****************************************************************************
** Meta object code from reading C++ file 'tabordereditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tabordereditor/tabordereditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabordereditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__TabOrderEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   36,   35,   35, 0x0a,
      71,   35,   35,   35, 0x0a,
      90,   35,   35,   35, 0x0a,
     114,   35,   35,   35, 0x0a,
     129,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__TabOrderEditor[] = {
    "qdesigner_internal::TabOrderEditor\0\0"
    "background\0setBackground(QWidget*)\0"
    "updateBackground()\0widgetRemoved(QWidget*)\0"
    "initTabOrder()\0showTabOrderDialog()\0"
};

void qdesigner_internal::TabOrderEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabOrderEditor *_t = static_cast<TabOrderEditor *>(_o);
        switch (_id) {
        case 0: _t->setBackground((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->updateBackground(); break;
        case 2: _t->widgetRemoved((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->initTabOrder(); break;
        case 4: _t->showTabOrderDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::TabOrderEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::TabOrderEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__TabOrderEditor,
      qt_meta_data_qdesigner_internal__TabOrderEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::TabOrderEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::TabOrderEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::TabOrderEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__TabOrderEditor))
        return static_cast<void*>(const_cast< TabOrderEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::TabOrderEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
