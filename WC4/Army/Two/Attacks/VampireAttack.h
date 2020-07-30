#ifndef VAMPIRE_ATTACK_H
#define VAMPIRE_ATTACK_H

#include <cstdlib>
#include "../Unit/Vampire.h"
#include "BaseAttack.h"

class VampireAttack : public BaseAttack {
    public:
        VampireAttack(Unit* owner, int dmg);
        ~VampireAttack();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // VAMPIRE_ATTACK_H