#include "Rogue.h"

Rogue::Rogue(std::string title) {
    this->state = new RogueState(title);
}

Rogue::Rogue(std::string title, int hp, int dmg) {
    this->state = new RogueState(title, hp, dmg);
    
}
Rogue::~Rogue();

void Rogue::attack(Unit* target);
void Rogue::counterattack(Unit* target);