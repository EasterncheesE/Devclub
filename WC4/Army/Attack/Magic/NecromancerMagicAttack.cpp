#include "NecromancerMagicAttack.h"

NecromancerMagicAttack::NecromancerMagicAttack(Spellcaster* owner, int dmg) : DefaultMagicAttack(owner, dmg) {}
NecromancerMagicAttack::~NecromancerMagicAttack() {}

void NecromancerMagicAttack::magicAttack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "NecromancerMagicAttack::attack " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "NecromancerMagicAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "NecromancerMagicAttack::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "NecromancerMagicAttack::attack, target is alive." << std::endl;
    }
    
    if ( this->owner->getMP() > 25 ) {
        this->owner->addObservable(target);
        target->takeMagicDMG(this->magicDMG);
        this->owner->reduceMP(25);
    } else {
        this->owner->chooseAction(target);
    }

}