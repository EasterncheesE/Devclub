#include "DefaultMagicAttack.h"


DefaultMagicAttack::DefaultMagicAttack(Spellcaster* owner, int dmg) {
    this->owner = owner;
    this->magicDMG = dmg * 2;
}
DefaultMagicAttack::~DefaultMagicAttack() {}

int DefaultMagicAttack::getMagicDMG() {
    return this->magicDMG;
}
void DefaultMagicAttack::regularAttack(Unit* target) {
    this->owner->attack(target);
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
    
    if ( this->owner->getMP() > 25 ) {
        target->takeMagicDMG(this->magicDMG);
        this->owner->reduceMP(25);
    } else {
        std::cout << "Not enough mana for magic attack" << std::endl;
        this->owner->chooseAction(target);
    }

}
