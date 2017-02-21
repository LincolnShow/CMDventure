#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

// A container class for storing information about living creature's attributes
class Attributes
{
public:
    unsigned int maxHP = 0, maxMP = 0, atk = 0, def = 0, spellpower = 0, capacity = 0;
    float dodge = 0.0f, crit = 0.0f, critScale = 0.0f;
    Attributes(unsigned int _maxHP, unsigned int _maxMP, unsigned int _atk, unsigned int _def, unsigned int _spellpower, unsigned int _capacity, float _dodge, float _crit, float _critScale);
    Attributes() = default;

    // Merges another Attributes object values with the current object
    void merge(const Attributes& stats, int multiplier);
};

#endif // ATTRIBUTES_H
