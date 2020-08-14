#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "DefaultPhysState.h"
#include "../../Unit/Vampire.h"

class VampirePhysState : public DefaultPhysState {
public:
    bool tester;
    VampirePhysState(Unit* owner, std::string title, int hp);
    VampirePhysState(Unit* owner, std::string title, int hp, int maxHP);
    ~VampirePhysState();
};


#endif // VAMPIRE_STATE_H