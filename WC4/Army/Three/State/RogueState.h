#ifndef ROGUE_STATE_H
#define ROGUE_STATE_H

#include "../Unit/Unit.h"

class Unit;

class RogueState : public DefaultState {
    public:
        RogueState(Unit* owner, std::string title, int hp);
        ~RogueState();
};

#endif // ROGUE_STATE_H