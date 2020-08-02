#ifndef SOLDIER_ATTACK_H
#define SOLDIER_ATTACK_H

#include "DefaultAttack.h"

class Unit;

class SoldierAttack : public DefaultAttack {
    public:
        SoldierAttack(Unit* owner, int dmg);
        ~SoldierAttack();
};

#endif // SOLDIER_ATTACK_H