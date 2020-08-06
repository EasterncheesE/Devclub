#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "DefaultState.h"

class WerewolfState : public DefaultState {
public:
    WerewolfState(Unit* owner, std::string title, int hp);
    WerewolfState(Unit* owner, std::string title, int hp, int maxHP);
    ~WerewolfState();
};

#endif // WEREWOLF_STATE_H