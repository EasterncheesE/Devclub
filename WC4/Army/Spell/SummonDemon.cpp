#include "SummonDemon.h"


SummonDemon::SummonDemon(int manaCost) : DefaultSpell("SummonDemon", manaCost, 0) {}

void SummonDemon::useSpell(Warlock* owner, Unit* target) {
    if ( owner->getMP() > this->manaCost ) {
        owner->reduceMP(this->manaCost);
        owner->addDemon();
    }
    
}
SummonDemon::~SummonDemon() {}