#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "DefaultPhysState.h"
#include "../../Unit/Werewolf.h"

class Werewolf;

class WerewolfPhysState : public DefaultPhysState {
public:
    WerewolfPhysState(Werewolf* owner, std::string title, int hp);
    WerewolfPhysState(Unit* owner, std::string title, int hp, int maxHP);
    ~WerewolfPhysState();
    
    void takeMagicDMG(int value);
};

#endif // WEREWOLF_STATE_H