#include "Werewolf.h"

Werewolf::Werewolf(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Werewolf constructor" << std::endl;
    this->_state = new WerewolfPhysState(this, title, hp);
    this->_attack = new WerewolfPhysAttack(this, dmg);
}
Werewolf::~Werewolf() {}

void Werewolf::attack(Unit* target) {
    this->_attack->attack(target);
}
void Werewolf::counterAttack(Unit* target) {
    std::cout << "Werewolf::counterAttack" << std::endl;
    this->_attack->counterAttack(target);
}

void Werewolf::takeMagicDMG(int value) {
    this->_state->takeMagicDMG(value);
}

PhysStateRole Werewolf::getPhysRole() {
    return this->Werewolf::_state->getPhysRole();
}