#include "Soldier.h"

Soldier::Soldier(std::string title, int hp, int dmg) : Unit (title, hp, dmg) {
    this->_state = new SoldierPhysState(this, title, hp);
    this->_attack = new SoldierPhysAttack(this, dmg);
}
Soldier::~Soldier () {
    delete(this->_state);
    delete(this->_attack);
}

void Soldier::attack(Unit* target) {
    this->_attack->attack(target);
}

void Soldier::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}