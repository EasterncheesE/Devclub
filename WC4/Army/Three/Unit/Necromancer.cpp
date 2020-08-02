#include "Necromancer.h"


Necromancer::Necromancer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    std::cout << "Necromancer constructor" << std::endl;
    this->_magicState = new NecromancerState(this, mp);
    this->_magicAttack = new NecromancerAttack(this, dmg);
}
Necromancer::~Necromancer() {
    delete(this->_state);
    delete(this->_magicState);
    delete(this->_attack);
    delete(this->_magicAttack);
}

void Necromancer::attack(Unit* target) {
    if ( this->checkIfDead() ) {
        std::cout << "Necromancer::attack " << this->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "Necromancer::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "Necromancer::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "Necromancer::attack, target is alive." << std::endl;
    }
    this->addObservable(target);
    this->_magicAttack->attack(target);
}
void Necromancer::regularAttack(Unit* target) {
    this->_attack->attack(target);
}
void Necromancer::counterAttack(Unit* target) {
    this->addObservable(target);
    this->_attack->counterAttack(target);
}
void Necromancer::removeObservable(Observable* target) {
    std::cout << "AND THIS WORKS TOO" << std::endl;
    this->Observer::removeObservable(target);
    
    this->addHP(100);
}