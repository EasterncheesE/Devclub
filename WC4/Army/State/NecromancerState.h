#ifndef NECROMANCER_STATE_H
#define NECROMANCER_STATE_H

#include "DefaultMagicState.h"

class NecromancerState : public DefaultMagicState {
public:
        NecromancerState(Spellcaster* owner, std::string title, int hp, int mp);
        ~NecromancerState();
};


#endif // NECROMANCER_STATE_H