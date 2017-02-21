#ifndef ITEM_H
#define ITEM_H
#include <vector>
#include <string>
#include "attributes.h"
#include "livingcreature.h"
#include "specialeffect.h"

// Representation of an in-game item
class Item
{
public:
    std::string name;
    std::string description = "";
    LivingCreature::SLOT slot;
    Attributes stats;
    std::vector<SpecialEffect> effects;
    unsigned int cost;
    bool isTwoHanded = false;
    Item(std::string _name, LivingCreature::SLOT _slot, Attributes _stats, unsigned int _cost = 0) : name(_name), slot(_slot), stats(_stats), cost(_cost){}
};

#endif // ITEM_H
