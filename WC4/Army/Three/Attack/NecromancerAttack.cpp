#include "NecromancerAttack.h"

NecromancerAttack::NecromancerAttack(Spellcaster* owner, int dmg) : DefaultMagicAttack(owner, dmg) {}
NecromancerAttack::~NecromancerAttack() {}

void NecromancerAttack::magicAttack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "NecromancerAttack::attack " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "NecromancerAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "NecromancerAttack::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "NecromancerAttack::attack, target is alive." << std::endl;
    }
    
    if ( this->owner->getMP() > 25 ) {
        this->owner->addObservable(target);
        target->takeMagicDMG(this->magicDMG);
        this->owner->reduceMP(25);
    } else {
        this->owner->chooseAction(target);
    }

}