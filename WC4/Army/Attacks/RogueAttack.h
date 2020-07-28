#ifndef ROGUE_ATTACK_H
#define ROGUE_ATTACK_H

#include "BaseAttack.h"
#include "../Unit/Unit.h"

class RogueAttack : public BaseAttack {
    protected:
        Unit* owner;
    public:
        virtual void attack(Unit& target);
};



#endif // ROGUE_ATTACK_H