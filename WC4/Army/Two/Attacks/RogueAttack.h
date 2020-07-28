#ifndef ROGUE_ATTACK_H
#define ROGUE_ATTACK_H

#include "../Unit/Unit.h"
#include "BaseAttack.h"

class RogueAttack : public BaseAttack {
    public:
        RogueAttack(Unit* owner, int dmg);
        ~RogueAttack();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // ROGUE_ATTACK_H