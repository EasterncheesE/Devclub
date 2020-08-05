#include "DefaultMagicAttack.h"


DefaultMagicAttack::DefaultMagicAttack(Spellcaster* owner, int dmg) {
    this->owner = owner;
    this->magicDMG = dmg;
}
DefaultMagicAttack::~DefaultMagicAttack() {}

int DefaultMagicAttack::getMagicDMG() {
    return this->magicDMG;
}
void DefaultMagicAttack::magicAttack(Unit* target) {
    if ( this->owner->checkIfDead() ) {
        std::cout << "DefaultMagicAttack::attack " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "DefaultMagicAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "DefaultMagicAttack::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "DefaultMagicAttack::attack, target is alive." << std::endl;
    }
    
    target->takeMagicDMG(this->magicDMG);
    this->owner->reduceMP(25);
}
