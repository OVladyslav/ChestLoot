#include "weapon.h"

Weapon::Weapon()
{
    Logger::get().print(__FILE__, __LINE__, "Object \"Weapon\" constructed");
}

Weapon::Weapon(const char * path)
    : pic_path{path}
{
    Logger::get().print(__FILE__, __LINE__, "Object \"Weapon\" constructed");
}

Weapon::~Weapon()
{
    Logger::get().print(__FILE__, __LINE__, "Object \"Weapon\" destructed");
}

const char* Weapon::GetPicPath()
{
    return pic_path;
}

std::string Weapon::GetInfo()
{
    return (GetName() +
            "\n" + rarity +
            "\nDamage type: " + GetDamageType() +
            "\nDamage: " + std::to_string(GetAmountOfDices()) +
            "d" + std::to_string(GetDiceSize()) +
            "+" + std::to_string(GetPureDamage()));
}

QPixmap Weapon::Draw()
{
    QPixmap pix(pic_path);
    return pix;
}

void Weapon::SetRarity(int i)
{
    rarity = RarityNames[i];
    rarity_count = i;
}
int Weapon::GetRarityCount(){return rarity_count;}
