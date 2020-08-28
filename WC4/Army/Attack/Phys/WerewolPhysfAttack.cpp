#include "WerewolfPhysAttack.h"

WerewolfPhysAttack::WerewolfPhysAttack(Unit* owner, int dmg) : DefaultPhysAttack(owner, dmg){}
WerewolfPhysAttack::~WerewolfPhysAttack() {}


void WerewolfPhysAttack::attack(Unit* target) {
    this->chooseAction(target);
}

void WerewolfPhysAttack::chooseAction(Unit* target) {
    std::cout << "Unit " << this->owner->getTitle() << " WerewolfPhysAttack::chooseAction" << std::endl;
    int choice = 0;
    
    std::cout << "Choose 1 for regular attack, 2 for shapeshift, 3 for  nothing, 4 for stats" << std::endl;
    for ( std::cin >> choice; choice < 1 || choice > 4; ) {
        if ( choice < 1 || choice > 4 ) {
            std::cout << "You must choose 1-4" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cin >> choice;
        }
    }
    if ( choice == 1 ) {
        std::cout << "regular attack is chosen" << std::endl;
        this->regularAttack(target);
    } else if ( choice == 2 ) {
        std::cout << "shapeshifting is chosen" << std::endl;
        this->shapeshift();
    } else  if ( choice == 3 ) {
        std::cout << "Skipping turn" << std::endl;
        return;
    } else if ( choice == 4 ) {
        std::cout << owner << std::endl;
        this->chooseAction(target);
    } 
}

void WerewolfPhysAttack::regularAttack(Unit* target) {
    // CHECK IF BOTH TARGET AND ATTACKER ARE ALIVE
    if ( this->owner->checkIfDead() ) {
        std::cout << "WerewolfPhysAttack::attack " << this->owner->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "WerewolfPhysAttack::attack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "WerewolfPhysAttack::attack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "WerewolfPhysAttack::attack, target is alive." << std::endl;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
   //Werewolf HEALING
    this->owner->addHP(50);
   
    //Werewolf TURNING
    if ( target->getIsUndead() != true && target->getPhysRole() != werewolf && target->getPhysRole() != wolf ) {
        this->turnWerewolf(target);
    } else {
        std::cout << "Target is immune to turning" << std::endl;
    }
    
    // TARGET DAMAGE AND COUNTERATTACK
    target->takePhysDMG(this->physDMG);
    target->counterAttack(this->owner);
}

void WerewolfPhysAttack::counterAttack(Unit* target) {
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
    if ( target->getIsUndead() != true && target->getPhysRole() != werewolf && target->getPhysRole() != wolf ) {
        this->turnWerewolf(target);
    } else {
        std::cout << "Target is immune to turning" << std::endl;
    }
    
    //TARGET DAMAGE
    target->takePhysDMG(this->physDMG/2);
}

void WerewolfPhysAttack::turnWerewolf(Unit* target) {
    int roll = rand() % 100 + 1;
    
    std::cout << "Werewolf roll = " << roll << std::endl;
    
    if ( roll <= 50 ) {
        std::cout << target->getTitle() << " was turned into werewolf!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
        target->setState(new WerewolfPhysState(target, target->getTitle(), target->getHP(), target->getMaxHP()));
        target->setAttack(new WerewolfPhysAttack(target, target->getPhysDMG()));
    }
}

void WerewolfPhysAttack::shapeshift() {
    if ( this->owner->getPhysRole() == werewolf ) {
    std::cout << "HP was: " << this->owner->getHP() << "/" << this->owner->getMaxHP() << std::endl;
    this->owner->setHP(this->owner->getHP() * 1.5);
    this->owner->setMaxHP(this->owner->getMaxHP() * 1.5);
    this->physDMG *= 1.5;
    this->owner->setPhysRole(wolf);
    std::cout << "HP now: " << this->owner->getHP() << "/" << this->owner->getMaxHP() << std::endl;
} else if ( this->owner->getPhysRole() == wolf ) {
    this->owner->setHP(this->owner->getHP() / 1.5);
    this->owner->setMaxHP(this->owner->getMaxHP() / 1.5);
    this->physDMG /= 1.5;
    this->owner->setPhysRole(werewolf);
}
std::cout << this->owner << std::endl;
}
