#include "RoguePhysAttack.h"

RoguePhysAttack::RoguePhysAttack(Unit* owner, int dmg) : DefaultPhysAttack(owner, dmg) {}
RoguePhysAttack::~RoguePhysAttack() {}

int RoguePhysAttack::getPhysDMG() {
    return this->physDMG;
}

void RoguePhysAttack::attack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "RoguePhysAttack::attack. " << this->owner->getTitle() << " is dead and cannot attack." ;
        return;
    } else {
        std::cout << "RoguePhysAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "RoguePhysAttack::attack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "RoguePhysAttack::attack, target is alive." << std::endl;
    }
    target->takePhysDMG(this->physDMG);
}
    
void RoguePhysAttack::counterAttack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "RoguePhysAttack::counterAttack. " << this->owner->getTitle() << " is dead and cannot attack." ;
        return;
    } else {
        std::cout << "RoguePhysAttack::counterAttack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "RoguePhysAttack::counterAttack. " <<target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "RoguePhysAttack::counterAttack, target is alive." << std::endl;
    }
    
    target->takePhysDMG(this->physDMG / 2);
    
    
    
}