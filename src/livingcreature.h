#ifndef LIVINGCREATURE_H
#define LIVINGCREATURE_H
#include <string>
#include "attributes.h"
#include <map>
#include "item.h"

// Parent class for all living creatures
class LivingCreature
{
public:
    enum SLOT { HAND = 0, HEAD, SHOULDER, BODY, ARM, HAND, LEG, FOOT, FINGER };

protected:
    std::string name = "";
    Attributes attributes;
    std::map<SLOT, Item> slots;
    LivingCreature(const std::string& _name) : name(_name){}
};

#endif // LIVINGCREATURE_H
