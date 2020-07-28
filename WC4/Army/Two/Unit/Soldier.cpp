#include "Soldier.h"

Soldier::Soldier(std::string title, int hp, int dmg) : Unit (title, hp, dmg) {
    this->_attack = new SoldierAttack(this, dmg);
}
Soldier::~Soldier () {}


void Soldier::attack(Unit* target) {
    std::cout << "Soldier is attacking" << std::endl;
    this->_attack->attack(target);
}

void Soldier::counterAttack(Unit* target) {
    std::cout << "Soldier is counterattacking" << std::endl;
    this->_attack->counterAttack(target);
}