#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "DefaultState.h"

class VampireState : public DefaultState {
public:
    VampireState(Unit* owner, std::string title, int hp);
    VampireState(Unit* owner, std::string title, int hp, int maxHP);
    ~VampireState();
};


#endif // VAMPIRE_STATE_H