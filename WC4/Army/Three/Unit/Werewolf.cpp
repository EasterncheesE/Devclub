#include "Werewolf.h"

Werewolf::Werewolf(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Werewolf constructor" << std::endl;
    this->_state = new WerewolfState(this, title, hp);
    this->_attack = new WerewolfAttack(this, dmg);
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
    if (this->getIsShapeshifted()) {
        this->_state->takeMagicDMG(value*2);
    } else {
        this->_state->takeMagicDMG(value);
    }

}