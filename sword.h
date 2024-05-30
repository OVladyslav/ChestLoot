#ifndef SWORD_H
#define SWORD_H

#include "weapon.h"

class Sword : public Weapon
{
    std::string weapon_name = "Sword";
    std::string damage_type = "Slash";
    int amountOfDices = 4;
    int diceSize = 6;
    int pure_damage = 4;
public:
    Sword();
    ~Sword();
    virtual std::string GetName();
    virtual std::string GetDamageType();
    virtual int GetAmountOfDices();
    virtual int GetDiceSize();
    virtual int GetPureDamage();
};

#endif // SWORD_H
