#include "spear.h"

Spear::Spear()
    : Weapon{":/resources/img/weapon_spear.png"}
{Logger::get().print(__FILE__, __LINE__, "Object \"Spear\" constructed");}
Spear::~Spear() {Logger::get().print(__FILE__, __LINE__, "Object \"Spear\" destructed");}
std::string Spear::GetName(){return weapon_name;}
std::string Spear::GetDamageType(){return damage_type;}
int Spear::GetAmountOfDices() {return amountOfDices;}
int Spear::GetDiceSize(){return diceSize;}
int Spear::GetPureDamage(){return pure_damage;}
