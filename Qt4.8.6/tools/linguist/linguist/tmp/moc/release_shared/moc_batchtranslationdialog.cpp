/****************************************************************************
** Meta object code from reading C++ file 'batchtranslationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../batchtranslationdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchtranslationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BatchTranslationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   23,   23,   23, 0x08,
      54,   23,   23,   23, 0x08,
      73,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BatchTranslationDialog[] = {
    "BatchTranslationDialog\0\0finished()\0"
    "startTranslation()\0movePhraseBookUp()\0"
    "movePhraseBookDown()\0"
};

void BatchTranslationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchTranslationDialog *_t = static_cast<BatchTranslationDialog *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->startTranslation(); break;
        case 2: _t->movePhraseBookUp(); break;
        case 3: _t->movePhraseBookDown(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BatchTranslationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BatchTranslationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchTranslationDialog,
      qt_meta_data_BatchTranslationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BatchTranslationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BatchTranslationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BatchTranslationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatchTranslationDialog))
        return static_cast<void*>(const_cast< BatchTranslationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchTranslationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BatchTranslationDialog::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
