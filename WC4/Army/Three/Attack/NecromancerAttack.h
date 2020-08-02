#ifndef NECROMANCER_ATTACK_H
#define NECROMANCER_ATTACK_H

#include "DefaultMagicAttack.h"
#include "../Unit/Necromancer.h"

class Necromancer;

class NecromancerAttack : public DefaultMagicAttack {
    public:
        NecromancerAttack(Necromancer* owner, int dmg);
        ~NecromancerAttack();
};


#endif // NECROMANCER_ATTACK_H