#ifndef ROGUE_ATTACK_H
#define ROGUE_ATTACK_H

#include "DefaultAttack.h"
#include "../Unit/Unit.h"

class Unit;

class RogueAttack : public DefaultAttack {
    public:
        RogueAttack(Unit* owner, int dmg);
        ~RogueAttack();
        
        int getDMG();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // ROGUE_ATTACK_H