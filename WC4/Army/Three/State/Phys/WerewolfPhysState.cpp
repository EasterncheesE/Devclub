#include "WerewolfPhysState.h"

WerewolfPhysState::WerewolfPhysState(Werewolf* owner, std::string title, int hp) : DefaultPhysState(owner, title, hp) {
    this->physRole = werewolf;
    this->isUndead = true;
}
WerewolfPhysState::WerewolfPhysState(Unit* owner, std::string title, int hp, int maxHP) : DefaultPhysState(owner, title, hp) {
    this->maxHP = maxHP;
    this->physRole = werewolf;
    this->isUndead = true;
}
WerewolfPhysState::~WerewolfPhysState() {}
