#include "VampireAttack.h"

VampireAttack::VampireAttack(Unit* owner, int dmg) : DefaultAttack(owner, dmg) {}
VampireAttack::~VampireAttack() {}

void VampireAttack::attack(Unit* target) {
    // CHECK IF BOTH TARGET AND ATTACKER ARE ALIVE
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot attack." << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
   
    // TARGET DAMAGE AND COUNTERATTACK
    target->reduceHP(this->dmg);
    target->counterAttack(this->owner);
}

void VampireAttack::counterAttack(Unit* target) {
    // CHECKING IF BOTH ATTACKER AND TARGET ARE ALIVE
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot counterattack." << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be counterattacked." << std::endl;
        return;
    }
    std::cout << owner->getTitle()  << " is counterattacking " << target->getTitle() << std::endl;

    target->reduceHP(this->dmg/2);
}