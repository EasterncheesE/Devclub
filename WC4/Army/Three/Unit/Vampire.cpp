#include "Vampire.h"

Vampire::Vampire(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Vampire constructor" << std::endl;
    this->_attack = new VampireAttack(this, dmg);
}
Vampire::~Vampire() {
    std::cout << "Vampire destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
}

void Vampire::attack(Unit* target) {
    std::cout << "Vampire::attack" << std::endl;
    this->addObservable(target);
    this->_attack->attack(target);
}
void Vampire::counterAttack(Unit* target) {
    std::cout << "Vampire::counterAttack" << std::endl;
    this->_attack->counterAttack(target);
}

void Vampire::removeObservable(Observable* target) {
    std::cout << "IT WORKS TOO" << std::endl;
    this->Observer::removeObservable(target);
    
    this->addHP(100);
}