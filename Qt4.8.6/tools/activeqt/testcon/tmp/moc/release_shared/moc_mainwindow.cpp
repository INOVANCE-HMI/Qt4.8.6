/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      41,   11,   11,   11, 0x09,
      71,   11,   11,   11, 0x09,
     101,   11,   11,   11, 0x09,
     135,   11,   11,   11, 0x09,
     171,   11,   11,   11, 0x09,
     212,   11,   11,   11, 0x09,
     245,   11,   11,   11, 0x09,
     287,   11,   11,   11, 0x09,
     322,   11,   11,   11, 0x09,
     361,   11,   11,   11, 0x09,
     397,   11,   11,   11, 0x09,
     423,   11,   11,   11, 0x09,
     458,   11,   11,   11, 0x09,
     492,   11,   11,   11, 0x08,
     509,  504,   11,   11, 0x08,
     554,  537,   11,   11, 0x08,
     605,  583,   11,   11, 0x08,
     690,  647,   11,   11, 0x08,
     731,  724,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionFileNew_triggered()\0"
    "on_actionFileLoad_triggered()\0"
    "on_actionFileSave_triggered()\0"
    "on_actionContainerSet_triggered()\0"
    "on_actionContainerClear_triggered()\0"
    "on_actionContainerProperties_triggered()\0"
    "on_actionControlInfo_triggered()\0"
    "on_actionControlDocumentation_triggered()\0"
    "on_actionControlPixmap_triggered()\0"
    "on_actionControlProperties_triggered()\0"
    "on_actionControlMethods_triggered()\0"
    "on_VerbMenu_aboutToShow()\0"
    "on_actionScriptingLoad_triggered()\0"
    "on_actionScriptingRun_triggered()\0"
    "updateGUI()\0prop\0logPropertyChanged(QString)\0"
    "signal,argc,argv\0logSignal(QString,int,void*)\0"
    "code,source,desc,help\0"
    "logException(int,QString,QString,QString)\0"
    "code,description,sourcePosition,sourceText\0"
    "logMacro(int,QString,int,QString)\0"
    "action\0on_VerbMenu_triggered(QAction*)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionFileNew_triggered(); break;
        case 1: _t->on_actionFileLoad_triggered(); break;
        case 2: _t->on_actionFileSave_triggered(); break;
        case 3: _t->on_actionContainerSet_triggered(); break;
        case 4: _t->on_actionContainerClear_triggered(); break;
        case 5: _t->on_actionContainerProperties_triggered(); break;
        case 6: _t->on_actionControlInfo_triggered(); break;
        case 7: _t->on_actionControlDocumentation_triggered(); break;
        case 8: _t->on_actionControlPixmap_triggered(); break;
        case 9: _t->on_actionControlProperties_triggered(); break;
        case 10: _t->on_actionControlMethods_triggered(); break;
        case 11: _t->on_VerbMenu_aboutToShow(); break;
        case 12: _t->on_actionScriptingLoad_triggered(); break;
        case 13: _t->on_actionScriptingRun_triggered(); break;
        case 14: _t->updateGUI(); break;
        case 15: _t->logPropertyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->logSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        case 17: _t->logException((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 18: _t->logMacro((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 19: _t->on_VerbMenu_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
