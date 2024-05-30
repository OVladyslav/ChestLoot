#ifndef WEAPON_H
#define WEAPON_H

#include "loot.h"
#include <QPixmap>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QPainter>

/*
3, 1, 0, 2
*/

enum Rarity
{
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary
};

enum class Weapon_Type
{
    SWORD,
    SPEAR,
    MAUL
};

class Weapon : public Loot
{
protected:
    const char *pic_path;
public:
    virtual const char* GetPicPath();
    static const int weapon_types_count = 3;
    Weapon();
    Weapon(const char *);
    virtual ~Weapon();
    virtual std::string GetName() = 0;
    virtual std::string GetDamageType() = 0;
    virtual int GetAmountOfDices() = 0;
    virtual int GetDiceSize() = 0;
    virtual int GetPureDamage() = 0;
    virtual QPixmap Draw();
    void SetRarity(int);
    int GetRarityCount();
    std::string GetInfo();
};
#endif // WEAPON_H
