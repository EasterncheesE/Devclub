#include "DemonPhysState.h"

DemonPhysState::DemonPhysState(Unit* owner, std::string title, int hp) : SoldierPhysState(owner, title, hp) {
    std::cout << "Demon constructor" << std::endl;
    this->physRole = demon;
    this->isUndead = false;
}
DemonPhysState::~DemonPhysState() {}