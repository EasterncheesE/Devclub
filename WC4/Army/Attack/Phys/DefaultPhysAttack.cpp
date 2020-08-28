#include "DefaultPhysAttack.h"

DefaultPhysAttack::DefaultPhysAttack(Unit* owner, int physDMG) {
    this->owner = owner;
    this->physDMG = physDMG;
}
DefaultPhysAttack::~DefaultPhysAttack() {}

int DefaultPhysAttack::getPhysDMG() {
    return this->physDMG;
}

void DefaultPhysAttack::setPhysDMG(int value) {
    this->physDMG = value;
}

void DefaultPhysAttack::attack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "DefaultPhysAttack::attack. " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "DefaultPhysAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "DefaultPhysAttack::attack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "DefaultPhysAttack::attack, target is alive." << std::endl;
    }

    target->takePhysDMG(this->physDMG);
    target->counterAttack(this->owner);
}
void DefaultPhysAttack::counterAttack(Unit* target) {
    std::cout << this->owner->getTitle() << " is attacking " << target->getTitle() << " with Unit::counterAttack." << std::endl;
    if ( this->owner->checkIfDead() ) {
        std::cout << this->owner->getTitle() << " is dead and cannot attack." << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    }
    
    target->takePhysDMG(this->physDMG / 2);
}