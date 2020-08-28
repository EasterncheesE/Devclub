#ifndef SOLDIER_STATE_H
#define SOLDIER_STATE_H

#include "DefaultPhysState.h"

class SoldierPhysState : public DefaultPhysState {
public:
        SoldierPhysState(Unit* owner, std::string title, int hp);
        ~SoldierPhysState();
};

#endif // SOLDIER_STATE_H