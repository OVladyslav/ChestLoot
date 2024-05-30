#ifndef LOOT_H
#define LOOT_H

#include <string>
#include "logger.h"


const std::string RarityNames[] = {"Common", "Uncommon", "Rare", "Epic", "Legendary"};


class Loot
{
public:
    Loot();
    std::string rarity;
    int rarity_count;
};

#endif // LOOT_H
