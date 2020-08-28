#include "SoldierPhysState.h"

SoldierPhysState::SoldierPhysState(Unit* owner, std::string title, int hp) : DefaultPhysState(owner, title, hp) {
    this->physRole = soldier;
    this->isUndead = false;
}
SoldierPhysState::~SoldierPhysState() {}