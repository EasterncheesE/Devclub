#ifndef PRIEST_ATTACK_H
#define PRIEST_ATTACK_H

#include "DefaultMagicAttack.h"

class PriestMagicAttack : public DefaultMagicAttack {
public:
    PriestMagicAttack(Spellcaster* owner, int dmg);
    ~PriestMagicAttack();
    
};

#endif // PRIEST_ATTACK_H