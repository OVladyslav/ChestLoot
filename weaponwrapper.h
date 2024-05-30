#ifndef WEAPONWRAPPER_H
#define WEAPONWRAPPER_H
#include "weapon.h"

class WeaponWrapper : public Weapon
{
protected:
    Weapon *wrapped_weapon;
public:
    WeaponWrapper(Weapon *);
    virtual ~WeaponWrapper();
    const char* GetPicPath();
    virtual std::string GetName();
    virtual std::string GetDamageType();
    virtual int GetAmountOfDices();
    virtual int GetDiceSize();
    virtual int GetPureDamage();
    virtual QPixmap Draw();

    //const char* GetRarity();

};

#endif // WEAPONWRAPPER_H
