/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_formwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdesigner_formwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_formwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerFormWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   21,   20,   20, 0x05,
     103,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     119,   20,   20,   20, 0x0a,
     144,  135,   20,   20, 0x08,
     171,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerFormWindow[] = {
    "QDesignerFormWindow\0\0formWindow,minimized\0"
    "minimizationStateChanged(QDesignerFormWindowInterface*,bool)\0"
    "triggerAction()\0updateChanged()\0"
    "fileName\0updateWindowTitle(QString)\0"
    "geometryChanged()\0"
};

void QDesignerFormWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerFormWindow *_t = static_cast<QDesignerFormWindow *>(_o);
        switch (_id) {
        case 0: _t->minimizationStateChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->triggerAction(); break;
        case 2: _t->updateChanged(); break;
        case 3: _t->updateWindowTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->geometryChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerFormWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerFormWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesignerFormWindow,
      qt_meta_data_QDesignerFormWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerFormWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerFormWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerFormWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerFormWindow))
        return static_cast<void*>(const_cast< QDesignerFormWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesignerFormWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QDesignerFormWindow::minimizationStateChanged(QDesignerFormWindowInterface * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesignerFormWindow::triggerAction()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
