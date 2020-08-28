#include "VampirePhysState.h"

VampirePhysState::VampirePhysState(Unit* owner, std::string title, int hp) : DefaultPhysState(owner, title, hp) {
    this->physRole = vampire;
    this->isUndead = true;
}
VampirePhysState::VampirePhysState(Unit* owner, std::string title, int hp, int maxHP) : DefaultPhysState(owner, title, hp) {
    this->maxHP = maxHP;
    this->physRole = vampire;
    this->isUndead = true;
}
VampirePhysState::~VampirePhysState() {}