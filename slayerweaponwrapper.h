#ifndef SLAYERWEAPONWRAPPER_H
#define SLAYERWEAPONWRAPPER_H

#include "weaponwrapper.h"

class SlayerWeaponWrapper : public WeaponWrapper
{
public:
    SlayerWeaponWrapper(Weapon *);
    ~SlayerWeaponWrapper();
    virtual std::string GetName();
    virtual int GetAmountOfDices();
    virtual int GetDiceSize();
    virtual QPixmap Draw();
};

#endif // SLAYERWEAPONWRAPPER_H
