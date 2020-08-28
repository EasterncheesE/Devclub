#ifndef SUMMON_DEMON_H
#define SUMMON_DEMON_H

#include "DefaultSpell.h"
#include "../Unit/Warlock.h"

class Warlock;

class SummonDemon : public DefaultSpell {
public:
    SummonDemon(int manaCost);
    ~SummonDemon();
    void useSpell(Warlock* owner, Unit* target);
};

#endif // SUMMON_DEMON_H