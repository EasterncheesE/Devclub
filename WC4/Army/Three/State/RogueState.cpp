#include "RogueState.h"

RogueState::RogueState(Unit* owner, std::string title, int hp) : DefaultState(owner, title, hp) {}
RogueState::~RogueState() {}