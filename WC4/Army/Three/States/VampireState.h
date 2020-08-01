#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "BaseState.h"

class VampireState : public BaseState {
    public:
        VampireState(std::string title, int hp);
        VampireState(std::string title, int hp, int maxHP);
        ~VampireState();
};

#endif // VAMPIRE_STATE_H