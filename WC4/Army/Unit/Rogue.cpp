#include "Rogue.h"

Rogue::Rogue(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    this->_state = new RoguePhysState(this, title, hp);
    this->_attack = new RoguePhysAttack(this, dmg);
}
Rogue::~Rogue() {
    delete(this->_state);
    delete(this->_attack);
}

void Rogue::attack(Unit* target) {
    this->_attack->attack(target);
}
void Rogue::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}