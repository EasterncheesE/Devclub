#ifndef BERSERKER_ATTACK_H
#define BERSERKER_ATTACK_H

#include "DefaultAttack.h"

class BerserkerAttack : public DefaultAttack {
public:
        BerserkerAttack(Unit* owner, int dmg);
        ~BerserkerAttack();
        
        void attack(Unit* target);
        
        
};


#endif // BERSERKER_ATTACK_H