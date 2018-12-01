/****************************************************************************
** Meta object code from reading C++ file 'gamewidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gamewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gamewidget[] = {

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
      12,   11,   11,   11, 0x0a,
      24,   11,   11,   11, 0x0a,
      44,   38,   11,   11, 0x0a,
      63,   11,   11,   11, 0x0a,
      76,   11,   11,   11, 0x0a,
      90,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gamewidget[] = {
    "Gamewidget\0\0M_timeout()\0M_startPush()\0"
    "index\0M_setDiretion(int)\0M_exitPush()\0"
    "M_pausePush()\0M_CheckGameOver()\0"
};

void Gamewidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Gamewidget *_t = static_cast<Gamewidget *>(_o);
        switch (_id) {
        case 0: _t->M_timeout(); break;
        case 1: _t->M_startPush(); break;
        case 2: _t->M_setDiretion((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->M_exitPush(); break;
        case 4: _t->M_pausePush(); break;
        case 5: _t->M_CheckGameOver(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gamewidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gamewidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gamewidget,
      qt_meta_data_Gamewidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gamewidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gamewidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gamewidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gamewidget))
        return static_cast<void*>(const_cast< Gamewidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gamewidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
