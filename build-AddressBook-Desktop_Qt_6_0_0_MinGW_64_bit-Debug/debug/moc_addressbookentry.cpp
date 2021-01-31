/****************************************************************************
** Meta object code from reading C++ file 'addressbookentry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../AddressBook/addressbookentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddressBookEntry_t {
    const uint offsetsAndSize[20];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AddressBookEntry_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AddressBookEntry_t qt_meta_stringdata_AddressBookEntry = {
    {
QT_MOC_LITERAL(0, 16), // "AddressBookEntry"
QT_MOC_LITERAL(17, 11), // "nameChanged"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 14), // "addressChanged"
QT_MOC_LITERAL(45, 15), // "birthdayChanged"
QT_MOC_LITERAL(61, 19), // "phoneNumbersChanged"
QT_MOC_LITERAL(81, 4), // "name"
QT_MOC_LITERAL(86, 7), // "address"
QT_MOC_LITERAL(94, 8), // "birthday"
QT_MOC_LITERAL(103, 12) // "phoneNumbers"

    },
    "AddressBookEntry\0nameChanged\0\0"
    "addressChanged\0birthdayChanged\0"
    "phoneNumbersChanged\0name\0address\0"
    "birthday\0phoneNumbers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressBookEntry[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    4 /* Public */,
       3,    0,   39,    2, 0x06,    5 /* Public */,
       4,    0,   40,    2, 0x06,    6 /* Public */,
       5,    0,   41,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015103, uint(0), 0,
       7, QMetaType::QString, 0x00015103, uint(1), 0,
       8, QMetaType::QDate, 0x00015103, uint(2), 0,
       9, QMetaType::QStringList, 0x00015103, uint(3), 0,

       0        // eod
};

void AddressBookEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddressBookEntry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->addressChanged(); break;
        case 2: _t->birthdayChanged(); break;
        case 3: _t->phoneNumbersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddressBookEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookEntry::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddressBookEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookEntry::addressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AddressBookEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookEntry::birthdayChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AddressBookEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookEntry::phoneNumbersChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AddressBookEntry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 2: *reinterpret_cast< QDate*>(_v) = _t->birthday(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->phoneNumbers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AddressBookEntry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBirthday(*reinterpret_cast< QDate*>(_v)); break;
        case 3: _t->setPhoneNumbers(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject AddressBookEntry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AddressBookEntry.offsetsAndSize,
    qt_meta_data_AddressBookEntry,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AddressBookEntry_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QDate, std::true_type>, QtPrivate::TypeAndForceComplete<QStringList, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *AddressBookEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressBookEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddressBookEntry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AddressBookEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AddressBookEntry::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddressBookEntry::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AddressBookEntry::birthdayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AddressBookEntry::phoneNumbersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
