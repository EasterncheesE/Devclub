#ifndef DEMON_ATTACK_H
#define DEMON_ATTACK_H

#include "SoldierAttack.h"

class DemonAttack : public SoldierAttack {
public:
    DemonAttack(Unit* owner, int dmg);
    ~DemonAttack();
};

#endif // DEMON_ATTACK_H