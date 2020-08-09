#include "WerewolfState.h"

WerewolfState::WerewolfState(Werewolf* owner, std::string title, int hp) : DefaultState(owner, title, hp) {
    this->isWerewolf = true;
    this->isTurnImmune = true;
}
WerewolfState::WerewolfState(Unit* owner, std::string title, int hp, int maxHP) : DefaultState(owner, title, hp) {
    this->maxHP = maxHP;
    this->isWerewolf = true;
    this->isTurnImmune = true;
}
WerewolfState::~WerewolfState() {}
