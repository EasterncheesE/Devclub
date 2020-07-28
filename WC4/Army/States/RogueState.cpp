#include "RogueState.h"


RogueState::RogueState(std::string title) {
    this->title = title;
    this->HP = 400;
    this->maxHP = 400;
}
RogueState::RogueState(std::string title, int hp, int dmg) {
    this->title = title;
    this->HP = hp;
    this->maxHP = 400;
}
RogueState::~RogueState();
