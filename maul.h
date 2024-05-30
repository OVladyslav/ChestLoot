#ifndef MAUL_H
#define MAUL_H

#include "weapon.h"

class Maul : public Weapon
{
    std::string weapon_name = "Maul";
    std::string damage_type = "Blunt";
    int amountOfDices = 3;
    int diceSize = 20;
    int pure_damage = 1;
public:
    Maul();
    ~Maul();
    virtual std::string GetName();
    virtual std::string GetDamageType();
    virtual int GetAmountOfDices();
    virtual int GetDiceSize();
    virtual int GetPureDamage();
};

#endif // MAUL_H
