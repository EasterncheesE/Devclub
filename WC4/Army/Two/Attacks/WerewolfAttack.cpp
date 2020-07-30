#include "WerewolfAttack.h"

WerewolfAttack::WerewolfAttack(Unit* owner, int dmg) : BaseAttack(owner, dmg) {}
WerewolfAttack::~WerewolfAttack() {}

void WerewolfAttack::attack(Unit* target) {
    int randomN = rand() % 20 + 1;
    std::cout << "Werewolf roll = " << randomN << std::endl;
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
    //WEREWOLF HEALING
    this->owner->addHP(50);
    std::cout << "Werewolf " << this->owner->getTitle() << " regenerated 50 hitpoints." << std::endl;
    
    //TURNING INTO WEREWOLF
    if ( randomN == 20 && target->getStateChangeImmune() == false ) {
        target->setState(new WerewolfState(target->getTitle(), target->getHP(), target->getMaxHP()));
        target->setAttack(new WerewolfAttack(target, target->getDMG()));
        target->setIsWerewolf();
        std::cout << "Unit " << target->getTitle() << " was turned into WEREWOLF!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!." << std::endl;
        std::cout << *target << std::endl;
    }
    
    // TARGET DAMAGE AND COUNTERATTACK
    target->takeDMG(this->dmg);
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
    //WEREWOLF HEALING
    this->owner->addHP(25);
    std::cout << "Werewolf " << this->owner->getTitle() << " regenerated 25 hitpoints." << std::endl;

    target->takeDMG(this->dmg/2);
}