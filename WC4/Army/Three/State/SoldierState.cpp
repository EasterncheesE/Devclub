#include "SoldierState.h"

SoldierState::SoldierState(Unit* owner, std::string title, int hp) : DefaultState(owner, title, hp) {}
SoldierState::~SoldierState() {}