#include "SoldierState.h"

SoldierState::SoldierState(std::string title, int hp, Unit* owner) : BaseState(title, hp, owner) {
}

SoldierState::~SoldierState() {}