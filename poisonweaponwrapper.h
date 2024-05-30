#ifndef POISONWEAPONWRAPPER_H
#define POISONWEAPONWRAPPER_H

#include "weaponwrapper.h"

class PoisonWeaponWrapper : public WeaponWrapper
{
public:
    PoisonWeaponWrapper(Weapon *);
    ~PoisonWeaponWrapper();
    virtual std::string GetName();
    virtual int GetDiceSize();
    virtual QPixmap Draw();
    //std::string GetInfo();
};

#endif // POISONWEAPONWRAPPER_H
