#ifndef ROGUEATTACK_H
#define ROGUEATTACK_H

#include "BaseAttack.h"

Class RogueAttack : public BaseAttack {
    public:
        RogueAttack();
        virtual ~RogueAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
}

#endif // ROGUEATTACH_H