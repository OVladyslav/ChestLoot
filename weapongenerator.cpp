#include "loot_system.h"
#include "weapongenerator.h"




Weapon* WeaponGenerator::generate_a_weapon()
{

    Weapon *w;
    Logger::get().print(__FILE__, __LINE__, "Randomizing weapon type...");
    Weapon_Type weapon_type = static_cast<Weapon_Type>(rand() % Weapon::weapon_types_count);
    switch (weapon_type)
    {
    case Weapon_Type::SWORD:
        w = new Sword(); break;
    case Weapon_Type::SPEAR:
        w = new Spear(); break;
    case Weapon_Type::MAUL:
        w = new Maul(); break;
    default:
        throw "Unknown Weapon Type";
    }

    Logger::get().print(__FILE__, __LINE__, "Randomizing rarity...");
    std::vector<int> arr = {1, 2, 3, 4};
    std::random_shuffle(std::begin(arr), std::end(arr));
    int rarityCount = 0;
    while (true)
    {
        // if X from recurments == 30%
        if ((rand() % 10) < 3)
        {
            ++rarityCount;
            if (rarityCount == 4) break;
        }
        else break;
    }
    Logger::get().print(__FILE__, __LINE__, "Rarity is " + RarityNames[rarityCount]);
    if(rarityCount >= 1)
    {
        Logger::get().print(__FILE__, __LINE__, "Randomizing and aplying effects...");
        std::sort(arr.begin(), arr.begin() + rarityCount);
        for (int i = 0; i < rarityCount; ++i)
        {
            switch(arr[i])
            {
            case 1: w = new FireWeaponWrapper(w); break;
            case 2: w = new SlayerWeaponWrapper(w); break;
            case 3: w = new PoisonWeaponWrapper(w); break;
            case 4: w = new HoningWeaponWrapper(w); break;
            }
        }
    }
    w->SetRarity(rarityCount);
    return w;
}
