#include "BerserkerPhysState.h"

BerserkerPhysState::BerserkerPhysState(Unit* owner, std::string title, int hp) : DefaultPhysState(owner, title, hp) {
    this->physRole = berserker;
    this->isUndead = false;
}
BerserkerPhysState::~BerserkerPhysState() {}