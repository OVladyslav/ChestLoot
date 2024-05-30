#include "poisonweaponwrapper.h"

PoisonWeaponWrapper::PoisonWeaponWrapper(Weapon *weapon_to_wrap)
: WeaponWrapper(weapon_to_wrap)
{Logger::get().print(__FILE__, __LINE__, "Object \"PoisonWeaponWrapper\" constructed");}
PoisonWeaponWrapper::~PoisonWeaponWrapper()
{
    Logger::get().print(__FILE__, __LINE__, "Object \"PoisonWeaponDecorator\" destructed");
}
std::string PoisonWeaponWrapper::GetName()
{
    return "Poisonous " + wrapped_weapon->GetName();
}
int PoisonWeaponWrapper::GetDiceSize() {return wrapped_weapon->GetDiceSize() + 2;}
QPixmap PoisonWeaponWrapper::Draw()
{
    QPixmap poison(":/resources/img/effect_poison_Spear.png");
    QPixmap temp = wrapped_weapon->Draw();
    QPainter painter(&temp);
    painter.drawPixmap(0, 0, poison);
    return temp;
}

/*
std::string PoisonWeaponWrapper::GetInfo()
{

    std::string temp = wrapped_weapon->GetInfo();
    if (temp.substr(0, 5) == "Fire ")
    {
        return "Fire Poisoned " + temp.substr(5);
    }
    else
        return "Poisoned " + temp;

    return wrapped_weapon->GetInfo();
}
*/
