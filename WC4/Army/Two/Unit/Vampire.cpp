#include "Vampire.h"

Vampire::Vampire(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Vampire constructor" << std::endl;
    this->_attack = new VampireAttack(this, dmg);
    this->_state = new VampireState(title, hp);
}
Vampire::~Vampire() {
    std::cout << "Vampire destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
}
void Vampire::checkIfDead() {
    if ( this->getHP() <= 0 ) {
        this->Vampire::~Vampire();
    } 
}

void Vampire::attack(Unit* target) {
    this->_attack->attack(target);
}
void Vampire::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}