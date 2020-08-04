#include "BerserkerAttack.h"

BerserkerAttack::BerserkerAttack(Unit* owner, int dmg) : DefaultAttack(owner, dmg) {}
BerserkerAttack::~BerserkerAttack() {}

void BerserkerAttack::attack(Unit* target) {
    std::cout << "BerserkerAttack::attack" << std::endl;
     if ( this->owner->checkIfDead() ) {
        std::cout << "BerserkerAttack::attack. " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "BerserkerAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "BerserkerAttack::attack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "BerserkerAttack::attack, target is alive." << std::endl;
    }

    target->takePhysDMG(this->dmg);
    target->takePhysDMG(this->dmg);
    target->counterAttack(this->owner);
}