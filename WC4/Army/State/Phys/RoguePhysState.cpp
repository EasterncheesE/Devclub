#include "RoguePhysState.h"

RoguePhysState::RoguePhysState(Unit* owner, std::string title, int hp) : DefaultPhysState(owner, title, hp) {
    this->physRole = rogue;
    this->isUndead = false;
}
RoguePhysState::~RoguePhysState() {}