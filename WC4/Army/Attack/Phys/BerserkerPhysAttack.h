#ifndef BERSERKER_ATTACK_H
#define BERSERKER_ATTACK_H

#include "DefaultPhysAttack.h"

class BerserkerPhysAttack : public DefaultPhysAttack {
public:
        BerserkerPhysAttack(Unit* owner, int dmg);
        ~BerserkerPhysAttack();
        
        void attack(Unit* target);
        
        
};


#endif // BERSERKER_ATTACK_H