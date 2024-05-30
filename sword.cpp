#include "sword.h"

Sword::Sword() : Weapon{":/resources/img/weapon_sword.png"}
{Logger::get().print(__FILE__, __LINE__, "Object \"Sword\" constructed");}
Sword::~Sword() {Logger::get().print(__FILE__, __LINE__, "Object \"Sword\" destructed");}
std::string Sword::GetName(){return weapon_name;}
std::string Sword::GetDamageType(){return damage_type;}
int Sword::GetAmountOfDices() {return amountOfDices;}
int Sword::GetDiceSize(){return diceSize;}
int Sword::GetPureDamage(){return pure_damage;}

