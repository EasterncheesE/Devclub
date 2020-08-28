#ifndef SOLDIER_ATTACK_H
#define SOLDIER_ATTACK_H

#include "DefaultPhysAttack.h"

class SoldierPhysAttack : public DefaultPhysAttack {
public:
        SoldierPhysAttack(Unit* owner, int dmg);
        ~SoldierPhysAttack();
};

#endif // SOLDIER_ATTACK_H