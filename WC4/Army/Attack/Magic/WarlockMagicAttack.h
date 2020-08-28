#ifndef WARLOCK_MAGIC_ATTACK_H
#define WARLOCK_MAGIC_ATTACK_H

#include "DefaultMagicAttack.h"
#include "../../Unit/Warlock.h"

class WarlockMagicAttack : public DefaultMagicAttack {
public:
    WarlockMagicAttack(Spellcaster* owner, int dmg);
    ~WarlockMagicAttack();
};

#endif // WARLOCK_MAGIC_ATTACK_H