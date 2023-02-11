/****************************************************************************
** Meta object code from reading C++ file 'widgetboxcategorylistview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../widgetbox/widgetboxcategorylistview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetboxcategorylistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__WidgetBoxCategoryListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   46,   46,   46, 0x05,
      86,   67,   46,   46, 0x05,
     118,   46,   46,   46, 0x05,
     132,   46,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
     153,  150,   46,   46, 0x0a,
     175,  169,   46,   46, 0x08,
     200,   46,   46,   46, 0x08,
     220,   46,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView[] = {
    "qdesigner_internal::WidgetBoxCategoryListView\0"
    "\0scratchPadChanged()\0name,xml,globalPos\0"
    "pressed(QString,QString,QPoint)\0"
    "itemRemoved()\0lastItemRemoved()\0re\0"
    "filter(QRegExp)\0index\0slotPressed(QModelIndex)\0"
    "removeCurrentItem()\0editCurrentItem()\0"
};

void qdesigner_internal::WidgetBoxCategoryListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetBoxCategoryListView *_t = static_cast<WidgetBoxCategoryListView *>(_o);
        switch (_id) {
        case 0: _t->scratchPadChanged(); break;
        case 1: _t->pressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 2: _t->itemRemoved(); break;
        case 3: _t->lastItemRemoved(); break;
        case 4: _t->filter((*reinterpret_cast< const QRegExp(*)>(_a[1]))); break;
        case 5: _t->slotPressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->removeCurrentItem(); break;
        case 7: _t->editCurrentItem(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::WidgetBoxCategoryListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::WidgetBoxCategoryListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView,
      qt_meta_data_qdesigner_internal__WidgetBoxCategoryListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::WidgetBoxCategoryListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::WidgetBoxCategoryListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::WidgetBoxCategoryListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView))
        return static_cast<void*>(const_cast< WidgetBoxCategoryListView*>(this));
    return QListView::qt_metacast(_clname);
}

int qdesigner_internal::WidgetBoxCategoryListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
void qdesigner_internal::WidgetBoxCategoryListView::scratchPadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qdesigner_internal::WidgetBoxCategoryListView::pressed(const QString & _t1, const QString & _t2, const QPoint & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::WidgetBoxCategoryListView::itemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void qdesigner_internal::WidgetBoxCategoryListView::lastItemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
