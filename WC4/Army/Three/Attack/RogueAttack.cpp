#include "RogueAttack.h"

RogueAttack::RogueAttack(Unit* owner, int dmg) : DefaultAttack(owner, dmg) {}
RogueAttack::~RogueAttack() {}

int RogueAttack::getDMG() {
    return this->dmg;
}

void RogueAttack::attack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "RogueAttack::attack. " << this->owner->getTitle() << " is dead and cannot attack." ;
        return;
    } else {
        std::cout << "RogueAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "RogueAttack::attack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "RogueAttack::attack, target is alive." << std::endl;
    }
    target->takePhysDMG(this->dmg);
}
    
void RogueAttack::counterAttack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "RogueAttack::counterAttack. " << this->owner->getTitle() << " is dead and cannot attack." ;
        return;
    } else {
        std::cout << "RogueAttack::counterAttack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "RogueAttack::counterAttack. " <<target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "RogueAttack::counterAttack, target is alive." << std::endl;
    }
    
    target->takePhysDMG(this->dmg / 2);
    
    
    
}