/****************************************************************************
** Meta object code from reading C++ file 'lecteurvue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../v2_version_graphique_avec_evenements/lecteurvue.h"
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
    const uint offsetsAndSize[36];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LecteurVue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LecteurVue_t qt_meta_stringdata_LecteurVue = {
    {
QT_MOC_LITERAL(0, 10), // "LecteurVue"
QT_MOC_LITERAL(11, 15), // "boutonPrecedent"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 13), // "boutonSuivant"
QT_MOC_LITERAL(42, 12), // "boutonLancer"
QT_MOC_LITERAL(55, 11), // "boutonArret"
QT_MOC_LITERAL(67, 7), // "aPropos"
QT_MOC_LITERAL(75, 7), // "quitter"
QT_MOC_LITERAL(83, 8), // "nbImages"
QT_MOC_LITERAL(92, 13), // "imageCourante"
QT_MOC_LITERAL(106, 6), // "Image*"
QT_MOC_LITERAL(113, 19), // "numDiaporamaCourant"
QT_MOC_LITERAL(133, 8), // "afficher"
QT_MOC_LITERAL(142, 14), // "viderDiaporama"
QT_MOC_LITERAL(157, 16), // "chargerDiaporama"
QT_MOC_LITERAL(174, 16), // "changerDiaporama"
QT_MOC_LITERAL(191, 13), // "pNumDiaporama"
QT_MOC_LITERAL(205, 17) // "actualiserInfoImg"

    },
    "LecteurVue\0boutonPrecedent\0\0boutonSuivant\0"
    "boutonLancer\0boutonArret\0aPropos\0"
    "quitter\0nbImages\0imageCourante\0Image*\0"
    "numDiaporamaCourant\0afficher\0"
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
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    0,  103,    2, 0x08,    6 /* Private */,
       8,    0,  104,    2, 0x08,    7 /* Private */,
       9,    0,  105,    2, 0x08,    8 /* Private */,
      11,    0,  106,    2, 0x08,    9 /* Private */,
      12,    0,  107,    2, 0x08,   10 /* Private */,
      13,    0,  108,    2, 0x08,   11 /* Private */,
      14,    0,  109,    2, 0x08,   12 /* Private */,
      15,    1,  110,    2, 0x08,   13 /* Private */,
      17,    0,  113,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UInt,
    0x80000000 | 10,
    QMetaType::UInt,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   16,
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
        case 1: _t->boutonSuivant(); break;
        case 2: _t->boutonLancer(); break;
        case 3: _t->boutonArret(); break;
        case 4: _t->aPropos(); break;
        case 5: _t->quitter(); break;
        case 6: { uint _r = _t->nbImages();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 7: { Image* _r = _t->imageCourante();
            if (_a[0]) *reinterpret_cast< Image**>(_a[0]) = std::move(_r); }  break;
        case 8: { uint _r = _t->numDiaporamaCourant();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->afficher(); break;
        case 10: _t->viderDiaporama(); break;
        case 11: _t->chargerDiaporama(); break;
        case 12: _t->changerDiaporama((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 13: _t->actualiserInfoImg(); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<Image *, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
