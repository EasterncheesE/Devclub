#include "VampireState.h"

VampireState::VampireState(Vampire* owner, std::string title, int hp) : DefaultState(owner, title, hp) {
    this->isVampire = true;
    this->isTurnImmune = true;
}
VampireState::VampireState(Unit* owner, std::string title, int hp, int maxHP) : DefaultState(owner, title, hp) {
    this->maxHP = maxHP;
    this->isVampire = true;
    this->isTurnImmune = true;
}
VampireState::~VampireState() {}