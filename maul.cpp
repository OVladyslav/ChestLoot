#include "maul.h"


Maul::Maul()
    : Weapon{":/resources/img/weapon_maul.png"}
{Logger::get().print(__FILE__, __LINE__, "Object \"Maul\" constructed");}
Maul::~Maul() {Logger::get().print(__FILE__, __LINE__, "Object \"Maul\" destructed");}
std::string Maul::GetName(){return weapon_name;}
std::string Maul::GetDamageType(){return damage_type;}
int Maul::GetAmountOfDices() {return amountOfDices;}
int Maul::GetDiceSize(){return diceSize;}
int Maul::GetPureDamage(){return pure_damage;}
