#include "slayerweaponwrapper.h"

SlayerWeaponWrapper::SlayerWeaponWrapper(Weapon *weapon_to_wrap)
    : WeaponWrapper(weapon_to_wrap)
{Logger::get().print(__FILE__, __LINE__, "Object \"SlayerWeaponWrapper\" constructed");}
SlayerWeaponWrapper::~SlayerWeaponWrapper()
{
    Logger::get().print(__FILE__, __LINE__, "Object \"SlayerWeaponDecorator\" destructed");
}
std::string SlayerWeaponWrapper::GetName()
{
    return wrapped_weapon->GetName() + " of the Slayer";
}

int SlayerWeaponWrapper::GetAmountOfDices(){return wrapped_weapon->GetDiceSize() + 1;}
int SlayerWeaponWrapper::GetDiceSize() {return wrapped_weapon->GetAmountOfDices() + 1;}
QPixmap SlayerWeaponWrapper::Draw()
{
    QPixmap slayer(":/resources/img/effect_slayer.png");
    QPainter painter(&slayer);
    painter.drawPixmap(0, 0, wrapped_weapon->Draw());
    return slayer;
}
