#include "weaponwrapper.h"

WeaponWrapper::WeaponWrapper(Weapon *weapon_to_wrap)
{
    wrapped_weapon = weapon_to_wrap;
    Logger::get().print(__FILE__, __LINE__,
    "Object \"WeaponWrapper\" constructed for " + wrapped_weapon->GetName());
}
WeaponWrapper::~WeaponWrapper()
{
    Logger::get().print(__FILE__, __LINE__, "Object \"WeaponWrapper\" begins destruction");
    delete wrapped_weapon;
    Logger::get().print(__FILE__, __LINE__, "Object \"WeaponWrapper\" destructed");
}
/*
WeaponWrapper::~WeaponWrapper()
{
    delete wrapped_weapon;
}
*/
const char* WeaponWrapper::GetPicPath(){return wrapped_weapon->GetPicPath();}
std::string WeaponWrapper::GetName(){return wrapped_weapon->GetName();}
std::string WeaponWrapper::GetDamageType(){return wrapped_weapon->GetDamageType();}
int WeaponWrapper::GetAmountOfDices(){return wrapped_weapon->GetAmountOfDices();}
int WeaponWrapper::GetDiceSize(){return wrapped_weapon->GetDiceSize();}
int WeaponWrapper::GetPureDamage(){return wrapped_weapon->GetPureDamage();}
QPixmap WeaponWrapper::Draw() { return wrapped_weapon->Draw();}
