#ifndef MAGIC_ATTACK_H
#define MAGIC_ATTACK_H

#include "BaseAttack.h"
#include "../Unit/Unit.h"

class MagicAttack : public BaseAttack {
    public:
        MagicAttack(Unit* owner, dmg);
        ~MagicAttack();
        
        
        attack(Unit* target);
        castSpell(Unit* target);
        counterattack(Unit* target);
        
        
};

#endif // MAGIC_ATTACK_H