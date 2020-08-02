#include "DefaultAttack.h"

DefaultAttack::DefaultAttack(Unit* owner, int dmg) {
    this->owner = owner;
    this->dmg = dmg;
}
DefaultAttack::~DefaultAttack() {}

int DefaultAttack::getDMG() {
    return this->dmg;
}

void DefaultAttack::attack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "DefaultAttack::attack. " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "DefaultAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "DefaultAttack::attack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "DefaultAttack::attack, target is alive." << std::endl;
    }

    target->reduceHP(this->dmg);
    target->counterAttack(this->owner);
}
void DefaultAttack::counterAttack(Unit* target) {
    std::cout << this->owner->getTitle() << " is attacking " << target->getTitle() << " with Unit::counterAttack." << std::endl;
    if ( this->owner->checkIfDead() ) {
        std::cout << this->owner->getTitle() << " is dead and cannot attack." << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    }
    
    target->reduceHP(this->dmg / 2);
}