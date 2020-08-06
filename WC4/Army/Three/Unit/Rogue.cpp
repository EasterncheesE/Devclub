#include "Rogue.h"

Rogue::Rogue(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Rogue constructor" << std::endl;
    this->_attack = new RogueAttack(this, dmg);
}
Rogue::~Rogue() {
    std::cout << "Rogue destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
}

void Rogue::attack(Unit* target) {
    std::cout << "Rogue is attacking. ";
    this->_attack->attack(target);
}
void Rogue::counterAttack(Unit* target) {
    std::cout << "Rogue is counterattacking. ";
    this->_attack->counterAttack(target);
}