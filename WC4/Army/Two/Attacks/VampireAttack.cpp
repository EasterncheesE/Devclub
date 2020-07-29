#include "VampireAttack.h"

VampireAttack::VampireAttack(Unit* owner, int dmg) : BaseAttack(owner, dmg) {}
VampireAttack::~VampireAttack() {}

void VampireAttack::attack(Unit* target) {
    int randomN = rand() % 1 + 1;
    // CHECK IF BOTH TARGET AND ATTACKER ARE ALIVE
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot attack." << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
    //VAMPIRE HEALING
    if ( target->getHP() < this->dmg/4 ) {
        this->owner->addHP(target->getHP());
        std::cout << "Vampire healed for " << target->getHP() << " hitpoints." << std::endl;
    } else {
        std::cout << "Vampire healed for " << this->dmg*0.25 << " hitpoints." << std::endl;
        this->owner->addHP(this->dmg/4);
    
    //TURNING INTO VAMPIRE
    if ( randomN == 1 && target->getIsVampire() == false ) {
        std::string title = target->getTitle();
        delete(target);
        target = new Vampire(title, 750, 200);
        std::cout << "Unit " << target->getTitle() << " was turned into vampire." << std::endl;
        std::cout << *target << std::endl;
    }
    
    
    // TARGET DAMAGE AND COUNTERATTACK
    target->takeDMG(this->dmg);
    target->counterAttack(this->owner);
    }
}
void VampireAttack::counterAttack(Unit* target) {
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot counterattack." << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be counterattacked." << std::endl;
        return;
    }
    std::cout << owner->getTitle()  << " is counterattacking " << target->getTitle() << std::endl;
    if ( target->getHP() < this->dmg/8 ) {
        this->owner->addHP(target->getHP());
        std::cout << "Vampire healed for " << target->getHP() << " hitpoints." << std::endl;
    } else {
        std::cout << "Vampire healed for " << this->dmg*0.25 << " hitpoints." << std::endl;
        this->owner->addHP(this->dmg/8);
    }
    target->takeDMG(this->dmg/2);
}