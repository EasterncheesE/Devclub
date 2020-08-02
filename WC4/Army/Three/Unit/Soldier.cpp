#include "Soldier.h"

Soldier::Soldier(std::string title, int hp, int dmg) : Unit (title, hp, dmg) {
    this->_state = new SoldierState(this, title, hp);
    this->_attack = new SoldierAttack(this, dmg);
}
Soldier::~Soldier () {
    delete(this->_state);
    delete(this->_attack);
}

void Soldier::attack(Unit* target) {
    std::cout << "Soldier::attack" << std::endl;
    this->_attack->attack(target);
}

void Soldier::counterAttack(Unit* target) {
    std::cout << "Soldier::counterAttack" << std::endl;
    this->_attack->counterAttack(target);
}