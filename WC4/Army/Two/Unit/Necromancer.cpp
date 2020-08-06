#include "Necromancer.h"


Necromancer::Necromancer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {}
Necromancer::~Necromancer() {
    delete(this->_state);
    delete(this->_attack);
    delete(this->_magicState);
    delete(this->_magicAttack);
}

void Necromancer::attack(Unit* target) {
    this->chooseAction(target);

}
void Necromancer::regularAttack(Unit* target) {

    if ( this->Unit::checkIfDead() == true ) {
        std::cout << this->getTitle() << " is dead and cannot attack. Notifying observables." << std::endl;
        return;
    } else {
        std::cout << this->getTitle() << " is alive." << std::endl;
    }
    if ( target->Unit::checkIfDead() == true ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked. Notifying observers." << std::endl;
        std::cout << "Target is dead and necromancer is healing" << std::endl;
        return;
    } else {
        std::cout << target->getTitle() << " is alive" << std::endl;
    }
    std::cout << "Regular Attack" << std::endl;
    std::cout << this->getTitle() << " is attacking " << target->getTitle() << ". Adding observable and observer" << std::endl;
    this->addObservable(target);
    std::cout << "Necr dmg = " << this->getDMG()<< std::endl;
    target->Unit::takeDMG(this->getDMG());
    target->Unit::counterAttack(this);
}
void Necromancer::counterAttack(Unit* target) {
    std::cout << "Magician counterattack" << std::endl;
}
void Necromancer::castSpell(Unit* target) {
    this->_magicAttack->castSpell(target);
}
void Necromancer::chooseAction(Unit* target) {
    int choice = 0;
    
    std::cout << "Type 1 for regular attack, type 2 to cast spell." << std::endl;
    for ( ; ; ) {
        std::cin >> choice;
        if ( choice != 1 && choice != 2 ) {
            std::cout << "You must choose 1 or 2" << std::endl;
        } else {
            break;
        }
    }
    if ( choice == 1 ) {
        std::cout << "Regular attack chosen." << std::endl;
        this->Necromancer::regularAttack(target);
        this->addMP(50);
    } else {
        std::cout << "cast spell chosen." << std::endl; 
        this->castSpell(target);
        this->addMP(50);
    }
}

void Necromancer::removeObserver(Observable* target) {
    Observer::removeObservable(target);
    
    this->addHP(this->getHP()/10);
}