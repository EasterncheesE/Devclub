#ifndef DEMON_STATE_H
#define DEMON_STATE_H

#include "SoldierState.h"

class DemonState : public SoldierState {
public:
    DemonState(Unit* owner, std::string title, int hp);
    ~DemonState();
};

#endif // DEMON_STATE_H