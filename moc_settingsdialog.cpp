/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_settingsdialog_t {
    QByteArrayData data[15];
    char stringdata[404];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_settingsdialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_settingsdialog_t qt_meta_stringdata_settingsdialog = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 3),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 4),
QT_MOC_LITERAL(4, 25, 34),
QT_MOC_LITERAL(5, 60, 5),
QT_MOC_LITERAL(6, 66, 34),
QT_MOC_LITERAL(7, 101, 24),
QT_MOC_LITERAL(8, 126, 24),
QT_MOC_LITERAL(9, 151, 24),
QT_MOC_LITERAL(10, 176, 44),
QT_MOC_LITERAL(11, 221, 44),
QT_MOC_LITERAL(12, 266, 45),
QT_MOC_LITERAL(13, 312, 45),
QT_MOC_LITERAL(14, 358, 45)
    },
    "settingsdialog\0set\0\0radi\0"
    "on_horizontalSlider_3_valueChanged\0"
    "value\0on_horizontalSlider_1_valueChanged\0"
    "on_radioButton_2_clicked\0"
    "on_radioButton_1_clicked\0"
    "on_radioButton_3_clicked\0"
    "on_horizontalSliderLocBrMutRate_valueChanged\0"
    "on_horizontalSliderGloBrMutRate_valueChanged\0"
    "on_horizontalSliderLocPoiMutRate_valueChanged\0"
    "on_horizontalSliderGloPoiMutRate_valueChanged\0"
    "on_horizontalSliderGloPolMutRate_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_settingsdialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void settingsdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        settingsdialog *_t = static_cast<settingsdialog *>(_o);
        switch (_id) {
        case 0: _t->set(); break;
        case 1: _t->radi(); break;
        case 2: _t->on_horizontalSlider_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_horizontalSlider_1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_radioButton_2_clicked(); break;
        case 5: _t->on_radioButton_1_clicked(); break;
        case 6: _t->on_radioButton_3_clicked(); break;
        case 7: _t->on_horizontalSliderLocBrMutRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSliderGloBrMutRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_horizontalSliderLocPoiMutRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_horizontalSliderGloPoiMutRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_horizontalSliderGloPolMutRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (settingsdialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&settingsdialog::set)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject settingsdialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_settingsdialog.data,
      qt_meta_data_settingsdialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *settingsdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *settingsdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_settingsdialog.stringdata))
        return static_cast<void*>(const_cast< settingsdialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int settingsdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void settingsdialog::set()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
