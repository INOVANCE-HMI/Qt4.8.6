/****************************************************************************
** Meta object code from reading C++ file 'q3listview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviews/q3listview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3listview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3ListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      12,  204, // properties
       3,  240, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      31,   11,   11,   11, 0x05,
      65,   11,   11,   11, 0x05,
      97,   11,   11,   11, 0x05,
     125,  122,   11,   11, 0x05,
     161,   11,   11,   11, 0x05,
     186,  122,   11,   11, 0x05,
     222,   11,   11,   11, 0x05,
     253,  122,   11,   11, 0x05,
     295,   11,   11,   11, 0x05,
     326,   11,   11,   11, 0x05,
     356,  122,   11,   11, 0x05,
     403,  122,   11,   11, 0x05,
     454,  450,   11,   11, 0x05,
     505,  450,   11,   11, 0x05,
     556,  122,   11,   11, 0x05,
     610,  605,   11,   11, 0x05,
     634,   11,   11,   11, 0x05,
     647,  605,   11,   11, 0x05,
     673,  605,   11,   11, 0x05,
     702,  700,   11,   11, 0x05,
     733,  723,   11,   11, 0x05,
     783,  774,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     816,   11,   11,   11, 0x0a,
     824,   11,   11,   11, 0x0a,
     849,  842,   11,   11, 0x0a,
     865,   11,   11,   11, 0x0a,
     885,  881,   11,   11, 0x0a,
     913,  909,   11,   11, 0x0a,
     931,   11,   11,   11, 0x09,
     948,   11,   11,   11, 0x09,
     963,   11,   11,   11, 0x08,
     985,   11,   11,   11, 0x08,
    1005,   11,   11,   11, 0x08,
    1024,   11,   11,   11, 0x08,
    1038,  122,   11,   11, 0x08,
    1068,   11,   11,   11, 0x08,
    1082,   11,   11,   11, 0x08,

 // properties: name, type, flags
    1102, 1098, 0x02095001,
    1115, 1110, 0x01094103,
    1144, 1130, 0x0009510b,
    1158, 1098, 0x02095001,
    1169, 1110, 0x01095103,
    1189, 1110, 0x01095103,
    1207, 1098, 0x02095103,
    1218, 1110, 0x01095103,
    1234, 1110, 0x01095103,
    1258, 1247, 0x0009510b,
    1269, 1098, 0x02095103,
    1295, 1282, 0x0009510b,

 // enums: name, flags, count, data
    1130, 0x0,    4,  252,
    1247, 0x0,    3,  260,
    1282, 0x0,    2,  266,

 // enum data: key, value
    1315, uint(Q3ListView::Single),
    1322, uint(Q3ListView::Multi),
    1328, uint(Q3ListView::Extended),
    1337, uint(Q3ListView::NoSelection),
    1349, uint(Q3ListView::NoColumn),
    1358, uint(Q3ListView::AllColumns),
    1369, uint(Q3ListView::LastColumn),
    1380, uint(Q3ListView::Accept),
    1387, uint(Q3ListView::Reject),

       0        // eod
};

static const char qt_meta_stringdata_Q3ListView[] = {
    "Q3ListView\0\0selectionChanged()\0"
    "selectionChanged(Q3ListViewItem*)\0"
    "currentChanged(Q3ListViewItem*)\0"
    "clicked(Q3ListViewItem*)\0,,\0"
    "clicked(Q3ListViewItem*,QPoint,int)\0"
    "pressed(Q3ListViewItem*)\0"
    "pressed(Q3ListViewItem*,QPoint,int)\0"
    "doubleClicked(Q3ListViewItem*)\0"
    "doubleClicked(Q3ListViewItem*,QPoint,int)\0"
    "returnPressed(Q3ListViewItem*)\0"
    "spacePressed(Q3ListViewItem*)\0"
    "rightButtonClicked(Q3ListViewItem*,QPoint,int)\0"
    "rightButtonPressed(Q3ListViewItem*,QPoint,int)\0"
    ",,,\0mouseButtonPressed(int,Q3ListViewItem*,QPoint,int)\0"
    "mouseButtonClicked(int,Q3ListViewItem*,QPoint,int)\0"
    "contextMenuRequested(Q3ListViewItem*,QPoint,int)\0"
    "item\0onItem(Q3ListViewItem*)\0onViewport()\0"
    "expanded(Q3ListViewItem*)\0"
    "collapsed(Q3ListViewItem*)\0e\0"
    "dropped(QDropEvent*)\0item,col,\0"
    "itemRenamed(Q3ListViewItem*,int,QString)\0"
    "item,col\0itemRenamed(Q3ListViewItem*,int)\0"
    "clear()\0invertSelection()\0select\0"
    "selectAll(bool)\0triggerUpdate()\0x,y\0"
    "setContentsPos(int,int)\0col\0"
    "adjustColumn(int)\0updateContents()\0"
    "doAutoScroll()\0changeSortColumn(int)\0"
    "handleIndexChange()\0updateDirtyItems()\0"
    "makeVisible()\0handleSizeChange(int,int,int)\0"
    "startRename()\0openFocusItem()\0int\0"
    "columns\0bool\0multiSelection\0SelectionMode\0"
    "selectionMode\0childCount\0allColumnsShowFocus\0"
    "showSortIndicator\0itemMargin\0"
    "rootIsDecorated\0showToolTips\0ResizeMode\0"
    "resizeMode\0treeStepSize\0RenameAction\0"
    "defaultRenameAction\0Single\0Multi\0"
    "Extended\0NoSelection\0NoColumn\0AllColumns\0"
    "LastColumn\0Accept\0Reject\0"
};

void Q3ListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3ListView *_t = static_cast<Q3ListView *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->selectionChanged((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 3: _t->clicked((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 4: _t->clicked((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->pressed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 6: _t->pressed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->doubleClicked((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 8: _t->doubleClicked((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->returnPressed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 10: _t->spacePressed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 11: _t->rightButtonClicked((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->rightButtonPressed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->mouseButtonPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Q3ListViewItem*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: _t->mouseButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Q3ListViewItem*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 15: _t->contextMenuRequested((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->onItem((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 17: _t->onViewport(); break;
        case 18: _t->expanded((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 19: _t->collapsed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 20: _t->dropped((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 21: _t->itemRenamed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 22: _t->itemRenamed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->clear(); break;
        case 24: _t->invertSelection(); break;
        case 25: _t->selectAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->triggerUpdate(); break;
        case 27: _t->setContentsPos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->adjustColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->updateContents(); break;
        case 30: _t->doAutoScroll(); break;
        case 31: _t->changeSortColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->handleIndexChange(); break;
        case 33: _t->updateDirtyItems(); break;
        case 34: _t->makeVisible(); break;
        case 35: _t->handleSizeChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 36: _t->startRename(); break;
        case 37: _t->openFocusItem(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3ListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3ListView::staticMetaObject = {
    { &Q3ScrollView::staticMetaObject, qt_meta_stringdata_Q3ListView,
      qt_meta_data_Q3ListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3ListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3ListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3ListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3ListView))
        return static_cast<void*>(const_cast< Q3ListView*>(this));
    return Q3ScrollView::qt_metacast(_clname);
}

int Q3ListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ScrollView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = columns(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isMultiSelection(); break;
        case 2: *reinterpret_cast< SelectionMode*>(_v) = selectionMode(); break;
        case 3: *reinterpret_cast< int*>(_v) = childCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = allColumnsShowFocus(); break;
        case 5: *reinterpret_cast< bool*>(_v) = showSortIndicator(); break;
        case 6: *reinterpret_cast< int*>(_v) = itemMargin(); break;
        case 7: *reinterpret_cast< bool*>(_v) = rootIsDecorated(); break;
        case 8: *reinterpret_cast< bool*>(_v) = showToolTips(); break;
        case 9: *reinterpret_cast< ResizeMode*>(_v) = resizeMode(); break;
        case 10: *reinterpret_cast< int*>(_v) = treeStepSize(); break;
        case 11: *reinterpret_cast< RenameAction*>(_v) = defaultRenameAction(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setMultiSelection(*reinterpret_cast< bool*>(_v)); break;
        case 2: setSelectionMode(*reinterpret_cast< SelectionMode*>(_v)); break;
        case 4: setAllColumnsShowFocus(*reinterpret_cast< bool*>(_v)); break;
        case 5: setShowSortIndicator(*reinterpret_cast< bool*>(_v)); break;
        case 6: setItemMargin(*reinterpret_cast< int*>(_v)); break;
        case 7: setRootIsDecorated(*reinterpret_cast< bool*>(_v)); break;
        case 8: setShowToolTips(*reinterpret_cast< bool*>(_v)); break;
        case 9: setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 10: setTreeStepSize(*reinterpret_cast< int*>(_v)); break;
        case 11: setDefaultRenameAction(*reinterpret_cast< RenameAction*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Q3ListView::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Q3ListView::selectionChanged(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Q3ListView::currentChanged(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Q3ListView::clicked(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Q3ListView::clicked(Q3ListViewItem * _t1, const QPoint & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Q3ListView::pressed(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Q3ListView::pressed(Q3ListViewItem * _t1, const QPoint & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Q3ListView::doubleClicked(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Q3ListView::doubleClicked(Q3ListViewItem * _t1, const QPoint & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Q3ListView::returnPressed(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Q3ListView::spacePressed(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Q3ListView::rightButtonClicked(Q3ListViewItem * _t1, const QPoint & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Q3ListView::rightButtonPressed(Q3ListViewItem * _t1, const QPoint & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Q3ListView::mouseButtonPressed(int _t1, Q3ListViewItem * _t2, const QPoint & _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Q3ListView::mouseButtonClicked(int _t1, Q3ListViewItem * _t2, const QPoint & _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Q3ListView::contextMenuRequested(Q3ListViewItem * _t1, const QPoint & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Q3ListView::onItem(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Q3ListView::onViewport()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void Q3ListView::expanded(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Q3ListView::collapsed(Q3ListViewItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Q3ListView::dropped(QDropEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Q3ListView::itemRenamed(Q3ListViewItem * _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Q3ListView::itemRenamed(Q3ListViewItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_END_MOC_NAMESPACE
