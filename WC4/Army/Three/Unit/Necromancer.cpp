#include "Necromancer.h"


Necromancer::Necromancer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    std::cout << "Necromancer constructor" << std::endl;
    this->_state = new NecromancerState(this, title, hp, mp);
    this->_attack = new NecromancerAttack(this, dmg);
    this->addSpell(new Fireball(100,150));
    this->addSpell(new Heal(50, 100));
}
Necromancer::~Necromancer() {
    delete(this->_state);
    delete(this->_state);
    delete(this->_attack);
    delete(this->_attack);
}

void Necromancer::attack(Unit* target) {
    this->chooseAction(target);
}
void Necromancer::regularAttack(Unit* target) {
    this->_attack->attack(target);
    this->addObservable(target);
    this->regenMP();
}
void Necromancer::magicAttack(Unit* target) {
    this->_attack->magicAttack(target);
}

void Necromancer::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
    this->addObservable(target);
    this->regenMP();
}

void Necromancer::chooseAction(Unit* target) {
std::cout << "Necromancer::chooseAction" << std::endl;
    int choice = 0;
    
    std::cout << "Choose 1 for regular attack, 2 for magic attack, 3 for cast spell" << std::endl;
    for ( ; !(std::cin >> choice) || choice < 1 || choice > 3; )  {
        std::cout << "please choose from 1 to 3." << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
        if ( choice == 1 ) {
            std::cout << "regular attack is chosen" << std::endl;
            this->regularAttack(target);
        } else if ( choice == 2) {
            std::cout << "magic attack is chosen" << std::endl;
            this->magicAttack(target);
        } else if ( choice == 3 ) {
                std::cout << "spell casting is chosen" << std::endl;
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