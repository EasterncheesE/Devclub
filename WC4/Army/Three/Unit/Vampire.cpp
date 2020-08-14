#include "Vampire.h"

Vampire::Vampire(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Vampire constructor" << std::endl;
    this->_state = new VampirePhysState(this, title, hp);
    this->_attack = new VampirePhysAttack(this, dmg);
}
Vampire::~Vampire() {
    std::cout << "Vampire destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
}

void Vampire::attack(Unit* target) {
    std::cout << "Vampire::attack" << std::endl;
    this->_attack->attack(target);
}
void Vampire::counterAttack(Unit* target) {
    std::cout << "Vampire::counterAttack" << std::endl;
    this->_attack->counterAttack(target);
}