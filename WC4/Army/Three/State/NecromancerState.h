#ifndef NECROMANCER_STATE_H
#define NECROMANCER_STATE_H

#include "../Unit/Necromancer.h"
#include "DefaultMagicState.h"

class Necromancer;

class NecromancerState : public DefaultMagicState {
    public:
        NecromancerState(Necromancer* owner, int mp);
        ~NecromancerState();
};


#endif // NECROMANCER_STATE_H