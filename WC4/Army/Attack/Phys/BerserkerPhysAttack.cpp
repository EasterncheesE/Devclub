#include "BerserkerPhysAttack.h"

BerserkerPhysAttack::BerserkerPhysAttack(Unit* owner, int dmg) : DefaultPhysAttack(owner, dmg) {}
BerserkerPhysAttack::~BerserkerPhysAttack() {}

void BerserkerPhysAttack::attack(Unit* target) {
    std::cout << "BerserkerPhysAttack::attack" << std::endl;
     if ( this->owner->checkIfDead() ) {
        std::cout << "BerserkerPhysAttack::attack. " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "BerserkerPhysAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "BerserkerPhysAttack::attack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "BerserkerPhysAttack::attack, target is alive." << std::endl;
    }

    target->takePhysDMG(this->physDMG);
    target->takePhysDMG(this->physDMG);
    target->counterAttack(this->owner);
}