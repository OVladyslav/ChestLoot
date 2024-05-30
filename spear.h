#ifndef SPEAR_H
#define SPEAR_H

#include "weapon.h"

class Spear : public Weapon
{
    std::string weapon_name = "Spear";
    std::string damage_type = "Thrust";
    int amountOfDices = 4;
    int diceSize = 6;
    int pure_damage = 4;
public:
    Spear();
    ~Spear();
    virtual std::string GetName();
    virtual std::string GetDamageType();
    virtual int GetAmountOfDices();
    virtual int GetDiceSize();
    virtual int GetPureDamage();
};

#endif // SPEAR_H
