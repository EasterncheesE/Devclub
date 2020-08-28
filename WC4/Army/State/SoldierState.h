#ifndef SOLDIER_STATE_H
#define SOLDIER_STATE_H

#include "DefaultState.h"

class SoldierState : public DefaultState {
public:
        SoldierState(Unit* owner, std::string title, int hp);
        ~SoldierState();
};

#endif // SOLDIER_STATE_H