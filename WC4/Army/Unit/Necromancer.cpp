#include "Necromancer.h"


Necromancer::Necromancer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    std::cout << "Necromancer constructor" << std::endl;
    this->_magicState = new NecromancerMagicState(this, mp);
    this->_magicAttack = new NecromancerMagicAttack(this, dmg);
    this->setIsUndead();
    this->addSpell(new Fireball(100,150));
    this->addSpell(new Heal(50, 100));
}
Necromancer::~Necromancer() {
    delete(this->_state);
    delete(this->_magicState);
    delete(this->_attack);
    delete(this->_magicAttack);
}

void Necromancer::removeObservable(Observable* target) {
    std::cout << "AND THIS WORKS TOO" << std::endl;
    this->Observer::removeObservable(target);
    
    this->addHP(100);
}