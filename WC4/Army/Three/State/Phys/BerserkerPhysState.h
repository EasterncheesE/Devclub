#ifndef BERSERKER_STATE_H
#define BERSERKER_STATE_H

#include "DefaultPhysState.h"

class BerserkerPhysState : public DefaultPhysState {
public:
        BerserkerPhysState(Unit* owner, std::string title, int hp);
        ~BerserkerPhysState();
};


#endif // BERSERKER_STATE_H