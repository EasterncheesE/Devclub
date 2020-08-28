#include "BerserkerState.h"

BerserkerState::BerserkerState(Unit* owner, std::string title, int hp) : DefaultState(owner, title, hp) {
    this->isMagicImmune = true;
    this->isTurnImmune = true;
}
BerserkerState::~BerserkerState() {}