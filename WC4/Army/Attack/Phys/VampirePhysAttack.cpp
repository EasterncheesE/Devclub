#include "VampirePhysAttack.h"

VampirePhysAttack::VampirePhysAttack(Unit* owner, int dmg) : DefaultPhysAttack(owner, dmg) {}
VampirePhysAttack::~VampirePhysAttack() {}

void VampirePhysAttack::attack(Unit* target) {
    // CHECK IF BOTH TARGET AND ATTACKER ARE ALIVE
    if ( this->owner->checkIfDead() ) {
        std::cout << "VampirePhysAttack::attack " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "VampirePhysAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "VampirePhysAttack::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "VampirePhysAttack::attack, target is alive." << std::endl;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
   //VAMPIRE HEALING
    if ( target->getHP() <= this->physDMG ) {
        this->owner->addHP(target->getHP() / 4);
    } else {
        this->owner->addHP(physDMG/4);
    }
   
    //Vampire TURNING
    if ( target->getIsUndead() != true && target->getPhysRole() != werewolf && target->getPhysRole() != wolf ) {
        this->turnVampire(target);
    } else {
        std::cout << "Target is immune to turning" << std::endl;
    }
    
    // TARGET DAMAGE AND COUNTERATTACK
    target->takePhysDMG(this->physDMG);
    target->counterAttack(this->owner);
}

void VampirePhysAttack::counterAttack(Unit* target) {
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
    if ( target->getHP() <= this->physDMG ) {
        this->owner->addHP(target->getHP() / 8);
    } else {
        this->owner->addHP(this->physDMG/8);
    }
    
    //Vampire TURNING
    if ( target->getIsUndead() != true && target->getPhysRole() != werewolf && target->getPhysRole() != wolf ) {
        this->turnVampire(target);
    } else {
        std::cout << "Target is immune to turning" << std::endl;
    }
    
    //TARGET DAMAGE
    target->takePhysDMG(this->physDMG/2);
}

void VampirePhysAttack::turnVampire(Unit* target) {
    int roll = rand() % 100 + 1;
    
    std::cout << "Vampire roll = " << roll << std::endl;
    
    if ( roll <= 50 ) {
        std::cout << target->getTitle() << " was turned into vampire!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
        target->setState(new VampirePhysState(target, target->getTitle(), target->getHP(), target->getMaxHP()));
        target->setAttack(new VampirePhysAttack(target, target->getPhysDMG()));
    }
}