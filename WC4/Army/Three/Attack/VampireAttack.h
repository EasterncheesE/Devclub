#ifndef VAMPIRE_ATTACK_H
#define VAMPIRE_ATTACK_H

#include <ctime>
#include <cstdlib>
#include "../Unit/Vampire.h"
#include "DefaultAttack.h"

class VampireAttack : public DefaultAttack {
    public:
        VampireAttack(Unit* owner, int dmg);
        ~VampireAttack();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
        void turnVampire(Unit* target);
};

#endif // VAMPIRE_ATTACK_H