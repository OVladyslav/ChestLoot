#ifndef HONINGWEAPONWRAPPER_H
#define HONINGWEAPONWRAPPER_H

#include "weaponwrapper.h"

class HoningWeaponWrapper : public WeaponWrapper
{
public:
    HoningWeaponWrapper(Weapon *);
    ~HoningWeaponWrapper();
    virtual std::string GetName();
    virtual int GetPureDamage();
    virtual QPixmap Draw();
};

#endif // HONINGWEAPONWRAPPER_H
