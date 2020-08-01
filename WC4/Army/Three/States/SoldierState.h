#ifndef SOLDIER_STATE_H
#define SOLDIER_STATE_H

#include "BaseState.h"

class SoldierState : public BaseState {
    public:
        SoldierState(std::string title, int hp);
        ~SoldierState();
};


#endif // SOLDIER_STATE_H