#include "attributes.h"

Attributes::Attributes(unsigned int _maxHP, unsigned int _maxMP, unsigned int _atk, unsigned int _def, unsigned int _spellpower, unsigned int _capacity, float _dodge, float _crit, float _critScale)
{
    maxHP = _maxHP;
    maxMP = _maxMP;
    atk = _atk;
    def = _def;
    spellpower = _spellpower;
    capacity = _capacity;
    dodge = _dodge;
    crit = _crit;
    critScale = _critScale;
}

void Attributes::merge(const Attributes &stats, int multiplier)
{
    maxHP += (stats.maxHP*multiplier);
    maxMP += (stats.maxMP*multiplier);
    atk += (stats.atk*multiplier);
    def += (stats.def*multiplier);
    spellpower += (stats.spellpower*multiplier);
    dodge += (stats.dodge*multiplier);
    crit += (stats.crit*multiplier);
    critScale += (stats.critScale*multiplier);
    capacity += (stats.capacity*multiplier);
}
