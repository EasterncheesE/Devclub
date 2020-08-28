#ifndef NECROMANCER_ATTACK_H
#define NECROMANCER_ATTACK_H

#include "DefaultMagicAttack.h"

class Spellcaster;

class NecromancerMagicAttack : public DefaultMagicAttack {
public:
        NecromancerMagicAttack(Spellcaster* owner, int dmg);
        ~NecromancerMagicAttack();
        
        void magicAttack(Unit* target);
};


#endif // NECROMANCER_ATTACK_H