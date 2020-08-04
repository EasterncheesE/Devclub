#ifndef NECROMANCER_ATTACK_H
#define NECROMANCER_ATTACK_H

#include "DefaultMagicAttack.h"

class Spellcaster;

class NecromancerAttack : public DefaultMagicAttack {
public:
        NecromancerAttack(Spellcaster* owner, int dmg);
        ~NecromancerAttack();
};


#endif // NECROMANCER_ATTACK_H