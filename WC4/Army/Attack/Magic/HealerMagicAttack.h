#ifndef HEALER_ATTACK_H
#define HEALER_ATTACK_H

#include "DefaultMagicAttack.h"

class HealerMagicAttack : public DefaultMagicAttack {
public:
    HealerMagicAttack(Spellcaster* owner, int dmg);
    ~HealerMagicAttack();
};

#endif // HEALER_ATTACK_H