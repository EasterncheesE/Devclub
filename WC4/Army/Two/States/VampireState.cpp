#include "VampireState.h"

VampireState::VampireState(std::string title, int hp) : BaseState(title, hp) {
    this->isVampire = true;
    this->changeStateImmune = true;
}
VampireState::VampireState(std::string title, int hp, int maxHP) : BaseState(title, hp, maxHP) {
    this->isVampire = true;
    this->changeStateImmune = true;
}
VampireState::~VampireState() {}