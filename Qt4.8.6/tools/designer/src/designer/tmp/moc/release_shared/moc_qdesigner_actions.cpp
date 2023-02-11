/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_actions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdesigner_actions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_actions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerActions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   36,   17,   17, 0x0a,
     102,   17,   17,   17, 0x0a,
     115,   17,   17,   17, 0x0a,
     146,  130,   17,   17, 0x0a,
     177,   17,   17,   17, 0x08,
     188,   17,   17,   17, 0x08,
     201,   17,   17,   17, 0x08,
     216,   17,   17,   17, 0x08,
     237,   17,   17,   17, 0x08,
     248,   17,   17,   17, 0x08,
     268,   17,   17,   17, 0x08,
     279,   17,   17,   17, 0x08,
     297,   17,   17,   17, 0x08,
     314,   17,   17,   17, 0x08,
     333,   17,   17,   17, 0x08,
     345,   17,   17,   17, 0x08,
     364,   17,   17,   17, 0x08,
     379,   17,   17,   17, 0x08,
     395,   17,   17,   17, 0x08,
     420,   17,   17,   17, 0x08,
     443,  434,   17,   17, 0x08,
     470,   17,   17,   17, 0x08,
     494,   17,   17,   17, 0x08,
     514,   17,   17,   17, 0x08,
     533,   17,   17,   17, 0x08,
     553,   17,   17,   17, 0x08,
     573,   17,   17,   17, 0x08,
     601,  598,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerActions[] = {
    "QDesignerActions\0\0useBigIcons(bool)\0"
    "formWindow\0"
    "activeFormWindowChanged(QDesignerFormWindowInterface*)\0"
    "createForm()\0slotOpenForm()\0manual,document\0"
    "helpRequested(QString,QString)\0"
    "saveForm()\0saveFormAs()\0saveAllForms()\0"
    "saveFormAsTemplate()\0viewCode()\0"
    "notImplementedYet()\0shutdown()\0"
    "editWidgetsSlot()\0openRecentForm()\0"
    "clearRecentFiles()\0closeForm()\0"
    "showDesignerHelp()\0showWhatsNew()\0"
    "aboutDesigner()\0showWidgetSpecificHelp()\0"
    "backupForms()\0fileName\0"
    "showNewFormDialog(QString)\0"
    "showPreferencesDialog()\0showAppFontDialog()\0"
    "savePreviewImage()\0printPreviewImage()\0"
    "updateCloseAction()\0formWindowCountChanged()\0"
    "fw\0formWindowSettingsChanged(QDesignerFormWindowInterface*)\0"
};

void QDesignerActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDesignerActions *_t = static_cast<QDesignerActions *>(_o);
        switch (_id) {
        case 0: _t->useBigIcons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activeFormWindowChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 2: _t->createForm(); break;
        case 3: _t->slotOpenForm(); break;
        case 4: _t->helpRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->saveForm(); break;
        case 6: _t->saveFormAs(); break;
        case 7: _t->saveAllForms(); break;
        case 8: _t->saveFormAsTemplate(); break;
        case 9: _t->viewCode(); break;
        case 10: _t->notImplementedYet(); break;
        case 11: _t->shutdown(); break;
        case 12: _t->editWidgetsSlot(); break;
        case 13: _t->openRecentForm(); break;
        case 14: _t->clearRecentFiles(); break;
        case 15: _t->closeForm(); break;
        case 16: _t->showDesignerHelp(); break;
        case 17: _t->showWhatsNew(); break;
        case 18: _t->aboutDesigner(); break;
        case 19: _t->showWidgetSpecificHelp(); break;
        case 20: _t->backupForms(); break;
        case 21: _t->showNewFormDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->showPreferencesDialog(); break;
        case 23: _t->showAppFontDialog(); break;
        case 24: _t->savePreviewImage(); break;
        case 25: _t->printPreviewImage(); break;
        case 26: _t->updateCloseAction(); break;
        case 27: _t->formWindowCountChanged(); break;
        case 28: _t->formWindowSettingsChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDesignerActions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDesignerActions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerActions,
      qt_meta_data_QDesignerActions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerActions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerActions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerActions))
        return static_cast<void*>(const_cast< QDesignerActions*>(this));
    return QObject::qt_metacast(_clname);
}

int QDesignerActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void QDesignerActions::useBigIcons(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
