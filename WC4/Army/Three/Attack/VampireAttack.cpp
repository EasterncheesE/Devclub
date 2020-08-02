#include "VampireAttack.h"

VampireAttack::VampireAttack(Unit* owner, int dmg) : DefaultAttack(owner, dmg) {}
VampireAttack::~VampireAttack() {}

void VampireAttack::attack(Unit* target) {
    // CHECK IF BOTH TARGET AND ATTACKER ARE ALIVE
    if ( this->owner->checkIfDead() ) {
        std::cout << "VampireAttack::attack " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "VampireAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "VampireAttack::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "VampireAttack::attack, target is alive." << std::endl;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
   //VAMPIRE HEALING
    if ( target->getHP() <= this->dmg ) {
        this->owner->addHP(target->getHP() / 4);
    } else {
        this->owner->addHP(dmg/4);
    }
   
    //Vampire TURNING
    if ( target->getIsTurnImmune() != true ) {
        this->turnVampire(target);
    }
    
    // TARGET DAMAGE AND COUNTERATTACK
    target->reduceHP(this->dmg);
    target->counterAttack(this->owner);
}

void VampireAttack::counterAttack(Unit* target) {
    // CHECKING IF BOTH ATTACKER AND TARGET ARE ALIVE
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot counterattack." << std::endl;
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be counterattacked." << std::endl;
        return;
    }
    std::cout << owner->getTitle()  << " is counterattacking " << target->getTitle() << std::endl;
    
    //VAMPIRE HEALING
    if ( target->getHP() <= this->dmg ) {
        this->owner->addHP(target->getHP() / 8);
    } else {
        this->owner->addHP(dmg/8);
    }
    
    //Vampire TURNING
    if ( target->getIsTurnImmune() != true ) {
        this->turnVampire(target);
    }
    
    //TARGET DAMAGE
    target->reduceHP(this->dmg/2);
}

void VampireAttack::turnVampire(Unit* target) {
    int roll = rand() % 100 + 1;
    
    std::cout << "Vampire roll = " << roll << std::endl;
    
    if ( roll <= 5 ) {
        std::cout << target->getTitle() << " was turned into vampire!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
        target->setState(new VampireState(target, target->getTitle(), target->getHP(), target->getMaxHP()));
        target->setAttack(new VampireAttack(target, target->getDMG()));
    }
}