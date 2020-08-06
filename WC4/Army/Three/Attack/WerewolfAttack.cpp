#include "WerewolfAttack.h"

WerewolfAttack::WerewolfAttack(Unit* owner, int dmg) : DefaultAttack(owner, dmg) {}
WerewolfAttack::~WerewolfAttack() {}

void WerewolfAttack::attack(Unit* target) {
    // CHECK IF BOTH TARGET AND ATTACKER ARE ALIVE
    if ( this->owner->checkIfDead() ) {
        std::cout << "WerewolfAttack::attack " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "WerewolfAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "WerewolfAttack::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "WerewolfAttack::attack, target is alive." << std::endl;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
   //Werewolf HEALING
    this->owner->addHP(50);
   
    //Werewolf TURNING
    if ( target->getIsTurnImmune() != true ) {
        this->turnWerewolf(target);
    } else {
        std::cout << "Target is immune to turning" << std::endl;
    }
    
    // TARGET DAMAGE AND COUNTERATTACK
    target->takePhysDMG(this->physDMG);
    target->counterAttack(this->owner);
}

void WerewolfAttack::counterAttack(Unit* target) {
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
    
    //Werewolf HEALING
    this->owner->addHP(25);
    
    //Werewolf TURNING
    if ( target->getIsTurnImmune() != true ) {
        this->turnWerewolf(target);
    } else {
        std::cout << "Target is immune to turning" << std::endl;
    }
    
    //TARGET DAMAGE
    target->takePhysDMG(this->physDMG/2);
}

void WerewolfAttack::turnWerewolf(Unit* target) {
    int roll = rand() % 100 + 1;
    
    std::cout << "Werewolf roll = " << roll << std::endl;
    
    if ( roll <= 5 ) {
        std::cout << target->getTitle() << " was turned into werewolf!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
        target->setState(new WerewolfState(target, target->getTitle(), target->getHP(), target->getMaxHP()));
        target->setAttack(new WerewolfAttack(target, target->getPhysDMG()));
    }
}