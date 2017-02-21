#ifndef LEVELABLE_H
#define LEVELABLE_H
#include "attributes.h"
#include <queue>

// Interface for all things that have level
class Levelable
{
public:
    virtual void levelUp() = 0;
protected:
    Levelable();
    unsigned int level = 1;
    std::queue<unsigned int> xpTable;
    Attributes newLevelBonus;
};

#endif // LEVELABLE_H
