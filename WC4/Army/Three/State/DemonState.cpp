#include "DemonState.h"

DemonState::DemonState(Unit* owner, std::string title, int hp) : SoldierState(owner, title, hp) {}
DemonState::~DemonState() {}