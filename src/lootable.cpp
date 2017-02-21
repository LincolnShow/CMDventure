#include "lootable.h"


std::vector<Item> Lootable::getLoot(unsigned char initialDropChance)
{
    unsigned char rollForItem = std::rand() % 100 + 1;
    std::vector<Item> result;
    std::vector<Item> mayDrop;
    while(rollForItem <= initialDropChance){
        unsigned char rollForWhatItem = std::rand() % 100 + 1;
        for(auto iter = dropTable.begin(); iter != dropTable.end(); ++iter){
        }

        mayDrop.clear();
        rollForItem = std::rand() % 100 + 1;
    }
}
