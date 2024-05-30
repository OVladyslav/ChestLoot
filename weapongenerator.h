#ifndef WEAPONGENERATOR_H
#define WEAPONGENERATOR_H

#include "weapon.h"

class WeaponGenerator
{
public:
    WeaponGenerator() = delete;
    static Weapon* generate_a_weapon();
};

#endif // WEAPONGENERATOR_H
