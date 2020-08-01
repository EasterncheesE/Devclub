#include "BaseAttack.h"

class Unit;

BaseAttack::BaseAttack(Unit* owner, int dmg) {
    this->owner = owner;
    this->dmg = dmg;
}
BaseAttack::~BaseAttack() {}

int BaseAttack::getPhysDMG() {
    return this->dmg;
    } 
    
void BaseAttack::attack(Unit* target) {
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot attack->" << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked->" << std::endl;
        return;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
    target->takeDMG(this->dmg);
    target->counterAttack(this->owner);
}
void BaseAttack::counterAttack(Unit* target) {
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot counterattack->" << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be counterattacked->" << std::endl;
        return;
    }
    std::cout << owner->getTitle()  << " is counterattacking " << target->getTitle() << std::endl;
    target->takeDMG(this->dmg/2);
}
