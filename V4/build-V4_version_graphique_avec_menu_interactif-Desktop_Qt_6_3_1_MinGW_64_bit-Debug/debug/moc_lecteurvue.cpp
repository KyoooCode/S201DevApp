/****************************************************************************
** Meta object code from reading C++ file 'lecteurvue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../V4_version_graphique_avec_menu_interactif/lecteurvue.h"
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
    const uint offsetsAndSize[46];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LecteurVue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LecteurVue_t qt_meta_stringdata_LecteurVue = {
    {
QT_MOC_LITERAL(0, 10), // "LecteurVue"
QT_MOC_LITERAL(11, 12), // "enleverDiapo"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 15), // "parametrerDiapo"
QT_MOC_LITERAL(41, 15), // "boutonPrecedent"
QT_MOC_LITERAL(57, 22), // "arretDefilementSuivant"
QT_MOC_LITERAL(80, 24), // "arretDefilementPrecedent"
QT_MOC_LITERAL(105, 13), // "boutonSuivant"
QT_MOC_LITERAL(119, 12), // "boutonLancer"
QT_MOC_LITERAL(132, 11), // "boutonArret"
QT_MOC_LITERAL(144, 7), // "aPropos"
QT_MOC_LITERAL(152, 7), // "quitter"
QT_MOC_LITERAL(160, 8), // "nbImages"
QT_MOC_LITERAL(169, 13), // "imageCourante"
QT_MOC_LITERAL(183, 6), // "Image*"
QT_MOC_LITERAL(190, 19), // "numDiaporamaCourant"
QT_MOC_LITERAL(210, 8), // "afficher"
QT_MOC_LITERAL(219, 14), // "viderDiaporama"
QT_MOC_LITERAL(234, 16), // "chargerDiaporama"
QT_MOC_LITERAL(251, 16), // "changerDiaporama"
QT_MOC_LITERAL(268, 13), // "pNumDiaporama"
QT_MOC_LITERAL(282, 17), // "actualiserInfoImg"
QT_MOC_LITERAL(300, 14) // "changerVitesse"

    },
    "LecteurVue\0enleverDiapo\0\0parametrerDiapo\0"
    "boutonPrecedent\0arretDefilementSuivant\0"
    "arretDefilementPrecedent\0boutonSuivant\0"
    "boutonLancer\0boutonArret\0aPropos\0"
    "quitter\0nbImages\0imageCourante\0Image*\0"
    "numDiaporamaCourant\0afficher\0"
    "viderDiaporama\0chargerDiaporama\0"
    "changerDiaporama\0pNumDiaporama\0"
    "actualiserInfoImg\0changerVitesse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LecteurVue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x08,    1 /* Private */,
       3,    0,  129,    2, 0x08,    2 /* Private */,
       4,    0,  130,    2, 0x08,    3 /* Private */,
       5,    0,  131,    2, 0x08,    4 /* Private */,
       6,    0,  132,    2, 0x08,    5 /* Private */,
       7,    0,  133,    2, 0x08,    6 /* Private */,
       8,    0,  134,    2, 0x08,    7 /* Private */,
       9,    0,  135,    2, 0x08,    8 /* Private */,
      10,    0,  136,    2, 0x08,    9 /* Private */,
      11,    0,  137,    2, 0x08,   10 /* Private */,
      12,    0,  138,    2, 0x08,   11 /* Private */,
      13,    0,  139,    2, 0x08,   12 /* Private */,
      15,    0,  140,    2, 0x08,   13 /* Private */,
      16,    0,  141,    2, 0x08,   14 /* Private */,
      17,    0,  142,    2, 0x08,   15 /* Private */,
      18,    0,  143,    2, 0x08,   16 /* Private */,
      19,    1,  144,    2, 0x08,   17 /* Private */,
      21,    0,  147,    2, 0x08,   19 /* Private */,
      22,    0,  148,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UInt,
    0x80000000 | 14,
    QMetaType::UInt,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LecteurVue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LecteurVue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enleverDiapo(); break;
        case 1: _t->parametrerDiapo(); break;
        case 2: _t->boutonPrecedent(); break;
        case 3: _t->arretDefilementSuivant(); break;
        case 4: _t->arretDefilementPrecedent(); break;
        case 5: _t->boutonSuivant(); break;
        case 6: _t->boutonLancer(); break;
        case 7: _t->boutonArret(); break;
        case 8: _t->aPropos(); break;
        case 9: _t->quitter(); break;
        case 10: { uint _r = _t->nbImages();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 11: { Image* _r = _t->imageCourante();
            if (_a[0]) *reinterpret_cast< Image**>(_a[0]) = std::move(_r); }  break;
        case 12: { uint _r = _t->numDiaporamaCourant();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->afficher(); break;
        case 14: _t->viderDiaporama(); break;
        case 15: _t->chargerDiaporama(); break;
        case 16: _t->changerDiaporama((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 17: _t->actualiserInfoImg(); break;
        case 18: _t->changerVitesse(); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<Image *, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
