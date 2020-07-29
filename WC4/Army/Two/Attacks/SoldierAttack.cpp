#include "SoldierAttack.h"

SoldierAttack::SoldierAttack(Unit* owner, int dmg) : BaseAttack(owner, dmg) {}
SoldierAttack::~SoldierAttack() {}

void SoldierAttack::attack(Unit* target) {
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
    std::cout << "Damage must be taken" << std::endl;
    target->counterAttack(this->owner);
}

void SoldierAttack::counterAttack(Unit* target) {
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot counterattack->" << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be counterattacked->" << std::endl;
        return;
    }
    std::cout << owner->getTitle()  << " is counterattacking " << target->getTitle() << std::endl;
    target->takeDMG(this->dmg / 2);
}