#include "RogueAttack.h"

void RogueAttack::attack(Unit& target) {
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot attack." << std::endl;
        return;
    }
    if ( target.checkIfDead() ) {
        std::cout << target.getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    }

    std::cout << owner->getTitle() << " is attacking " << target.getTitle() << std::endl;
    target.takeDMG(this->physDMG);
}