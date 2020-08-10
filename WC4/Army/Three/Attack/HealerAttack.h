#ifndef HEALER_ATTACK_H
#define HEALER_ATTACK_H

#include "DefaultMagicAttack.h"

class HealerAttack : public DefaultMagicAttack {
public:
    HealerAttack(Spellcaster* owner, int dmg);
    ~HealerAttack();
};

#endif // HEALER_ATTACK_H