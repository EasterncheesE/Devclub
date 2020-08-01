#include "RogueAttack.h"

RogueAttack::RogueAttack(Unit* owner, int dmg) : BaseAttack(owner, dmg) {}
RogueAttack::~RogueAttack() {}

void RogueAttack::attack(Unit* target) {
    if ( this->owner->Unit::checkIfDead() == true ) {
        std::cout << this->owner->getTitle() << " is dead and cannot attack. Notifying observables." << std::endl;
        return;
    } else {
        std::cout << this->owner->getTitle() << " is alive." << std::endl;
    }
    if ( target->Unit::checkIfDead() == true ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked. Notifying observers." << std::endl;
        std::cout << "Target is dead and necromancer is healing" << std::endl;
        return;
    } else {
        std::cout << target->getTitle() << " is alive" << std::endl;
    }
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
    target->Unit::takeDMG(this->dmg);
}

void RogueAttack::counterAttack(Unit* target) {
    if ( owner->Unit::checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot counterattack->" << std::endl;
        return;
    }
    if ( target->Unit::checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be counterattacked->" << std::endl;
        return;
    }
    std::cout << owner->getTitle()  << " is counterattacking " << target->getTitle() << std::endl;
    target->Unit::takeDMG(this->dmg / 3);
}