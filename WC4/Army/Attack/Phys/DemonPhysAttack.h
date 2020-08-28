#ifndef DEMON_ATTACK_H
#define DEMON_ATTACK_H

#include "SoldierPhysAttack.h"

class DemonPhysAttack : public SoldierPhysAttack {
public:
    DemonPhysAttack(Unit* owner, int dmg);
    ~DemonPhysAttack();
};

#endif // DEMON_ATTACK_H