#ifndef ROGUE_STATE_H
#define ROGUE_STATE_H

#include "DefaultPhysState.h"

class RoguePhysState : public DefaultPhysState {
public:
        RoguePhysState(Unit* owner, std::string title, int hp);
        ~RoguePhysState();
};

#endif // ROGUE_STATE_H