#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "DefaultState.h"
#include "../Unit/Werewolf.h"

class Werewolf;

class WerewolfState : public DefaultState {
protected:
    bool isShapeshifted;
public:
    WerewolfState(Werewolf* owner, std::string title, int hp);
    WerewolfState(Unit* owner, std::string title, int hp, int maxHP);
    ~WerewolfState();
};

#endif // WEREWOLF_STATE_H