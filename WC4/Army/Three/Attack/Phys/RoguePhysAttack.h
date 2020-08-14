#ifndef ROGUE_ATTACK_H
#define ROGUE_ATTACK_H

#include "DefaultPhysAttack.h"

class RoguePhysAttack : public DefaultPhysAttack {
public:
        RoguePhysAttack(Unit* owner, int dmg);
        ~RoguePhysAttack();
        
        int getPhysDMG();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // ROGUE_ATTACK_H