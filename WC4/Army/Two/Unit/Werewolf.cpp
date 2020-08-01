#include "Werewolf.h"

    Werewolf::Werewolf(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
        std::cout << "Werewolf constructor" << std::endl;
        this->_state = new WerewolfState(title, hp);
        this->_attack = new WerewolfAttack(this, dmg);
        this->_state->setIsWerewolf();
        this->_state->setStateChangeImmune();
    }
    Werewolf::~Werewolf() {
        std::cout << "Werewolf destructor" << std::endl;
        delete(this->_state);
        delete(this->_attack);
    }

void Werewolf::attack(Unit* target) {
    this->_attack->attack(target);
}

void Werewolf::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}