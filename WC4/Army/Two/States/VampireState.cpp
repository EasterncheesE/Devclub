#include "VampireState.h"

VampireState::VampireState(std::string title, int hp) : BaseState(title, hp) {
    this->isVampire = 1;
}
VampireState::VampireState(std::string title, int hp, int maxHP) : BaseState(title, hp, maxHP) {
    this->isVampire = 1;
}
VampireState::~VampireState() {}