/****************************************************************************
** Meta object code from reading C++ file 'indexwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../indexwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indexwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IndexWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x05,
      52,   38,   12,   12, 0x05,
      95,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     118,  111,   12,   12, 0x08,
     141,   12,   12,   12, 0x08,
     164,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IndexWindow[] = {
    "IndexWindow\0\0link\0linkActivated(QUrl)\0"
    "links,keyword\0linksActivated(QMap<QString,QUrl>,QString)\0"
    "escapePressed()\0filter\0filterIndices(QString)\0"
    "enableSearchLineEdit()\0disableSearchLineEdit()\0"
};

void IndexWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IndexWindow *_t = static_cast<IndexWindow *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->linksActivated((*reinterpret_cast< const QMap<QString,QUrl>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->escapePressed(); break;
        case 3: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->enableSearchLineEdit(); break;
        case 5: _t->disableSearchLineEdit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IndexWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IndexWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IndexWindow,
      qt_meta_data_IndexWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IndexWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IndexWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IndexWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IndexWindow))
        return static_cast<void*>(const_cast< IndexWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int IndexWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void IndexWindow::linkActivated(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IndexWindow::linksActivated(const QMap<QString,QUrl> & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IndexWindow::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
