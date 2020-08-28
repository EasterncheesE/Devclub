#ifndef BERSERKER_STATE_H
#define BERSERKER_STATE_H

#include "DefaultState.h"

class BerserkerState : public DefaultState {
public:
        BerserkerState(Unit* owner, std::string title, int hp);
        ~BerserkerState();
};


#endif // BERSERKER_STATE_H