/****************************************************************************
** Meta object code from reading C++ file 'lecteurvue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../v3_version_graphique_mode_auto/lecteurvue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurvue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LecteurVue_t {
    const uint offsetsAndSize[40];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LecteurVue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LecteurVue_t qt_meta_stringdata_LecteurVue = {
    {
QT_MOC_LITERAL(0, 10), // "LecteurVue"
QT_MOC_LITERAL(11, 15), // "boutonPrecedent"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 22), // "arretDefilementSuivant"
QT_MOC_LITERAL(51, 24), // "arretDefilementPrecedent"
QT_MOC_LITERAL(76, 13), // "boutonSuivant"
QT_MOC_LITERAL(90, 12), // "boutonLancer"
QT_MOC_LITERAL(103, 11), // "boutonArret"
QT_MOC_LITERAL(115, 7), // "aPropos"
QT_MOC_LITERAL(123, 7), // "quitter"
QT_MOC_LITERAL(131, 8), // "nbImages"
QT_MOC_LITERAL(140, 13), // "imageCourante"
QT_MOC_LITERAL(154, 6), // "Image*"
QT_MOC_LITERAL(161, 19), // "numDiaporamaCourant"
QT_MOC_LITERAL(181, 8), // "afficher"
QT_MOC_LITERAL(190, 14), // "viderDiaporama"
QT_MOC_LITERAL(205, 16), // "chargerDiaporama"
QT_MOC_LITERAL(222, 16), // "changerDiaporama"
QT_MOC_LITERAL(239, 13), // "pNumDiaporama"
QT_MOC_LITERAL(253, 17) // "actualiserInfoImg"

    },
    "LecteurVue\0boutonPrecedent\0\0"
    "arretDefilementSuivant\0arretDefilementPrecedent\0"
    "boutonSuivant\0boutonLancer\0boutonArret\0"
    "aPropos\0quitter\0nbImages\0imageCourante\0"
    "Image*\0numDiaporamaCourant\0afficher\0"
    "viderDiaporama\0chargerDiaporama\0"
    "changerDiaporama\0pNumDiaporama\0"
    "actualiserInfoImg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LecteurVue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    0,  117,    2, 0x08,    8 /* Private */,
      10,    0,  118,    2, 0x08,    9 /* Private */,
      11,    0,  119,    2, 0x08,   10 /* Private */,
      13,    0,  120,    2, 0x08,   11 /* Private */,
      14,    0,  121,    2, 0x08,   12 /* Private */,
      15,    0,  122,    2, 0x08,   13 /* Private */,
      16,    0,  123,    2, 0x08,   14 /* Private */,
      17,    1,  124,    2, 0x08,   15 /* Private */,
      19,    0,  127,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UInt,
    0x80000000 | 12,
    QMetaType::UInt,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   18,
    QMetaType::Void,

       0        // eod
};

void LecteurVue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LecteurVue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->boutonPrecedent(); break;
        case 1: _t->arretDefilementSuivant(); break;
        case 2: _t->arretDefilementPrecedent(); break;
        case 3: _t->boutonSuivant(); break;
        case 4: _t->boutonLancer(); break;
        case 5: _t->boutonArret(); break;
        case 6: _t->aPropos(); break;
        case 7: _t->quitter(); break;
        case 8: { uint _r = _t->nbImages();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 9: { Image* _r = _t->imageCourante();
            if (_a[0]) *reinterpret_cast< Image**>(_a[0]) = std::move(_r); }  break;
        case 10: { uint _r = _t->numDiaporamaCourant();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->afficher(); break;
        case 12: _t->viderDiaporama(); break;
        case 13: _t->chargerDiaporama(); break;
        case 14: _t->changerDiaporama((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 15: _t->actualiserInfoImg(); break;
        default: ;
        }
    }
}

const QMetaObject LecteurVue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_LecteurVue.offsetsAndSize,
    qt_meta_data_LecteurVue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LecteurVue_t
, QtPrivate::TypeAndForceComplete<LecteurVue, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<Image *, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LecteurVue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurVue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LecteurVue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LecteurVue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
