#include "fireweaponwrapper.h"

FireWeaponWrapper::FireWeaponWrapper(Weapon *weapon_to_wrap)
    : WeaponWrapper(weapon_to_wrap)
{Logger::get().print(__FILE__, __LINE__, "Object \"FireWeaponWrapper\" constructed");}

FireWeaponWrapper::~FireWeaponWrapper()
{
    Logger::get().print(__FILE__, __LINE__, "Object \"FireWeaponDecorator\" destructed");
}

std::string FireWeaponWrapper::GetName()
{
    return "Fire " + wrapped_weapon->GetName();
}

std::string FireWeaponWrapper::GetDamageType()
{
    return wrapped_weapon->GetDamageType() + ", Fire";
}

int FireWeaponWrapper::GetAmountOfDices()
{
    return wrapped_weapon->GetAmountOfDices() + 1;
}

QPixmap FireWeaponWrapper::Draw()
{
    QPixmap fire(":/resources/img/effect_fire_Spear.png");
    QPainter painter(&fire);
    painter.drawPixmap(0, 0, wrapped_weapon->Draw());
    return fire;
}
