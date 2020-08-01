#include "WerewolfState.h"


WerewolfState::WerewolfState(std::string title, int hp) : BaseState(title, hp) {
    this->isWerewolf = true;
    this->changeStateImmune = true;
}
WerewolfState::WerewolfState(std::string title, int hp, int maxHP) : BaseState(title, hp, maxHP) {
    this->isWerewolf = true;
    this->changeStateImmune = true;
}
WerewolfState::~WerewolfState() {}