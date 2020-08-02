#include "DefaultMagicAttack.h"


DefaultMagicAttack::DefaultMagicAttack(Spellcaster* owner, int dmg) {
    this->owner = owner;
    this->magicDMG = dmg;
}
DefaultMagicAttack::~DefaultMagicAttack() {}

int DefaultMagicAttack::getMagicDMG() {
    return this->magicDMG;
}
void DefaultMagicAttack::attack(Unit* target) {
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
    
    this->chooseAction(target);
}
void DefaultMagicAttack::regularAttack(Unit* target) {
    this->owner->regularAttack(target);
}
void DefaultMagicAttack::castSpell(Unit* target) {
    int choice = 0;
    
    std::cout << "Please choose 1 for fireball or 2 for self heal" << std::endl;
    for ( std::cin >> choice; choice != 1 && choice != 2; std::cin >> choice) {
        std::cout << "Please choose 1 or 2" << std::endl;
    }
    
    if ( choice == 1 ) {
        std::cout << "Fireball chosen" << std::endl;
        this->owner->reduceMP(100);
        target->reduceHP(100);
    } else {
        std::cout << "Healing spell chosen" << std::endl;
        this->owner->reduceMP(50);
        this->owner->addHP(100);
    }
    

}
void DefaultMagicAttack::counterAttack(Unit* target) {
    this->owner->counterAttack(target);
}
void DefaultMagicAttack::chooseAction(Unit* target) {
    int choice = 0;
       
    std::cout << "Choose 1 for regular attack, choose 2 for cast spell." << std::endl;
    for ( std::cin >> choice; choice != 1 && choice != 2; std::cin >> choice) {
        std::cout << "You must choose 1 or 2" << std::endl;
    }
    
    if ( choice == 1 ) {
        this->owner->regularAttack(target);
    } else {
        this->castSpell(target);
    }
}