#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "BaseState.h"

class WerewolfState : public BaseState {
    public:
        WerewolfState(std::string title, int hp);
        WerewolfState(std::string title, int hp, int maxHP);
        ~WerewolfState();
};

#endif // WEREWOLF_STATE_H