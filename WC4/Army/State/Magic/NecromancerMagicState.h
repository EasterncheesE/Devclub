#ifndef NECROMANCER_STATE_H
#define NECROMANCER_STATE_H

#include "DefaultMagicState.h"

class NecromancerMagicState : public DefaultMagicState {
public:
    NecromancerMagicState(Spellcaster* owner, int mp);
    ~NecromancerMagicState();
};


#endif // NECROMANCER_STATE_H