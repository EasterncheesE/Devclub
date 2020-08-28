#ifndef DEMON_STATE_H
#define DEMON_STATE_H

#include "SoldierPhysState.h"

class DemonPhysState : public SoldierPhysState {
public:
    DemonPhysState(Unit* owner, std::string title, int hp);
    ~DemonPhysState();
};

#endif // DEMON_STATE_H