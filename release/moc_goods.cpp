/****************************************************************************
** Meta object code from reading C++ file 'goods.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../goods.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'goods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Goods[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      31,    6,    6,    6, 0x08,
      57,    6,    6,    6, 0x08,
      83,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Goods[] = {
    "Goods\0\0on_saveButton_clicked()\0"
    "on_updateButton_clicked()\0"
    "on_deleteButton_clicked()\0"
    "on_findButton_clicked()\0"
};

void Goods::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Goods *_t = static_cast<Goods *>(_o);
        switch (_id) {
        case 0: _t->on_saveButton_clicked(); break;
        case 1: _t->on_updateButton_clicked(); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->on_findButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Goods::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Goods::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Goods,
      qt_meta_data_Goods, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Goods::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Goods::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Goods::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Goods))
        return static_cast<void*>(const_cast< Goods*>(this));
    return QDialog::qt_metacast(_clname);
}

int Goods::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
