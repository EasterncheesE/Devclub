#ifndef VAMPIRE_ATTACK_H
#define VAMPIRE_ATTACK_H

#include <cstdlib>
#include "DefaultPhysAttack.h"
#include "../../Unit/Vampire.h"


class Unit;

class VampirePhysAttack : public DefaultPhysAttack {
public:
    VampirePhysAttack(Unit* owner, int dmg);
    ~VampirePhysAttack();
    
    void attack(Unit* target);
    void counterAttack(Unit* target);
    void turnVampire(Unit* target);
};

#endif // VAMPIRE_ATTACK_H