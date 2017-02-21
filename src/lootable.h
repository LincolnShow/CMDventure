#ifndef LOOTABLE_H
#define LOOTABLE_H
#include "item.h"
#include <vector>
#include <map>
#include <time.h>

// Interface for those objects that can drop items
class Lootable
{
protected:
    std::map<Item, unsigned char> dropTable; // ITEM -- %
    Lootable() { srand(time(0)); }
public:
    std::vector<Item> getLoot(unsigned char initialDropChance);
};

#endif // LOOTABLE_H
