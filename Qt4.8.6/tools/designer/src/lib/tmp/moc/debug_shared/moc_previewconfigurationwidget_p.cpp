/****************************************************************************
** Meta object code from reading C++ file 'previewconfigurationwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/previewconfigurationwidget_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewconfigurationwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__PreviewConfigurationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   47,   47,   47, 0x08,
      72,   47,   47,   47, 0x08,
      94,   47,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget[] = {
    "qdesigner_internal::PreviewConfigurationWidget\0"
    "\0slotEditAppStyleSheet()\0slotDeleteSkinEntry()\0"
    "slotSkinChanged(int)\0"
};

void qdesigner_internal::PreviewConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreviewConfigurationWidget *_t = static_cast<PreviewConfigurationWidget *>(_o);
        switch (_id) {
        case 0: _t->slotEditAppStyleSheet(); break;
        case 1: _t->slotDeleteSkinEntry(); break;
        case 2: _t->slotSkinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::PreviewConfigurationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::PreviewConfigurationWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget,
      qt_meta_data_qdesigner_internal__PreviewConfigurationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::PreviewConfigurationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::PreviewConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::PreviewConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget))
        return static_cast<void*>(const_cast< PreviewConfigurationWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int qdesigner_internal::PreviewConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
