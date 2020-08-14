#include "DemonPhysState.h"

DemonPhysState::DemonPhysState(Unit* owner, std::string title, int hp) : SoldierPhysState(owner, title, hp) {
    this->physRole = demon;
    this->isUndead = false;
}
DemonPhysState::~DemonPhysState() {}