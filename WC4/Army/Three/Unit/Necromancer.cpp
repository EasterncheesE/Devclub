#include "Necromancer.h"


Necromancer::Necromancer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    std::cout << "Necromancer constructor" << std::endl;
    this->_magicState = new NecromancerState(this, mp);
    this->_magicAttack = new NecromancerAttack(this, dmg*2);
    this->addSpell(new Fireball(100,150));
    this->addSpell(new Heal(50, 100));
}
Necromancer::~Necromancer() {
    delete(this->_state);
    delete(this->_magicState);
    delete(this->_attack);
    delete(this->_magicAttack);
}

void Necromancer::attack(Unit* target) {
    this->chooseAction(target);
}
void Necromancer::regularAttack(Unit* target) {
    this->addObservable(target);
    this->_attack->attack(target);
}
void Necromancer::magicAttack(Unit* target) {
    this->addObservable(target);
    this->_magicAttack->magicAttack(target);
}

void Necromancer::counterAttack(Unit* target) {
    this->addObservable(target);
    this->_attack->counterAttack(target);
}
void Necromancer::chooseAction(Unit* target) {
    int choice = 0;
       
    std::cout << "1 for regular attack, 2 for magic attack, 3 for cast spell" << std::endl;
    for ( std::cin >> choice; choice < 1 && choice > 3; std::cin >> choice) {
        std::cout << "You must choose 1-3" << std::endl;
    }
    
    if ( choice == 1 ) {
        this->regularAttack(target);
    } else if ( choice == 2) {
        this->magicAttack(target);
    } else {
        this->_spellBook->chooseSpell(target);
    }
}

void Necromancer::castSpell(Unit* target) {
    this->_spellBook->chooseSpell(target);
    
}
void Necromancer::removeObservable(Observable* target) {
    std::cout << "AND THIS WORKS TOO" << std::endl;
    this->Observer::removeObservable(target);
    
    this->addHP(100);
}