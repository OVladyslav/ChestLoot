#ifndef FIREWEAPONWRAPPER_H
#define FIREWEAPONWRAPPER_H

#include "weaponwrapper.h"

class FireWeaponWrapper: public WeaponWrapper
{

public:
    FireWeaponWrapper(Weapon *);
    ~FireWeaponWrapper();
    //std::string GetInfo();
    virtual std::string GetName();
    virtual std::string GetDamageType();
    virtual int GetAmountOfDices();
    virtual QPixmap Draw();
};

#endif // FIREWEAPONWRAPPER_H
