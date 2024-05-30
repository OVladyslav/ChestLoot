#include "honingweaponwrapper.h"

HoningWeaponWrapper::HoningWeaponWrapper (Weapon *weapon_to_wrap)
    : WeaponWrapper(weapon_to_wrap)
{Logger::get().print(__FILE__, __LINE__, "Object \"HoningWeaponWrapper\" constructed");}
HoningWeaponWrapper::~HoningWeaponWrapper()
{
    Logger::get().print(__FILE__, __LINE__, "Object \"HoningWeaponDecorator\" destructed");
}
std::string HoningWeaponWrapper::GetName() {return "Honed " + wrapped_weapon->GetName();}
int HoningWeaponWrapper::GetPureDamage() {return wrapped_weapon->GetPureDamage() + 3;}
QPixmap HoningWeaponWrapper::Draw()
{
    QPixmap temp = wrapped_weapon->Draw();
    QPainter painter(&temp);
    QPixmap hone(":/resources/img/effect_star.png");
    painter.drawPixmap(0, 0, hone);
    return temp;
}
