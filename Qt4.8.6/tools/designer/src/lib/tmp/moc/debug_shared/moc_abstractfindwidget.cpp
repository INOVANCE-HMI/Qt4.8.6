/****************************************************************************
** Meta object code from reading C++ file 'abstractfindwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../shared/findwidget/abstractfindwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractfindwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractFindWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      31,   19,   19,   19, 0x0a,
      44,   19,   19,   19, 0x0a,
      55,   19,   19,   19, 0x0a,
      70,   19,   19,   19, 0x0a,
      88,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AbstractFindWidget[] = {
    "AbstractFindWidget\0\0activate()\0"
    "deactivate()\0findNext()\0findPrevious()\0"
    "findCurrentText()\0updateButtons()\0"
};

void AbstractFindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractFindWidget *_t = static_cast<AbstractFindWidget *>(_o);
        switch (_id) {
        case 0: _t->activate(); break;
        case 1: _t->deactivate(); break;
        case 2: _t->findNext(); break;
        case 3: _t->findPrevious(); break;
        case 4: _t->findCurrentText(); break;
        case 5: _t->updateButtons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AbstractFindWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractFindWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AbstractFindWidget,
      qt_meta_data_AbstractFindWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractFindWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractFindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractFindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractFindWidget))
        return static_cast<void*>(const_cast< AbstractFindWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AbstractFindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
