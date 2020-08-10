#ifndef PRIEST_ATTACK_H
#define PRIEST_ATTACK_H

#include "DefaultMagicAttack.h"

class PriestAttack : public DefaultMagicAttack {
public:
    PriestAttack(Spellcaster* owner, int dmg);
    ~PriestAttack();
    
};

#endif // PRIEST_ATTACK_H