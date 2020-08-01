#include "MagicAttack.h"

MagicAttack::MagicAttack(Spellcaster* owner, int dmg) {
    this->owner = owner;
    this->dmg = dmg;
}
MagicAttack::~MagicAttack() {}


void MagicAttack::attack(Unit* target) {
    std::cout << "Magic attack" << std::endl;
    this->chooseAction(target);
}

void MagicAttack::regularAttack(Unit* target) {
    if ( owner->checkIfDead() ) {
            std::cout << owner->getTitle() << " is dead and cannot attack->" << std::endl;
            return;
        }
        if ( target->checkIfDead() ) {
            std::cout << target->getTitle() << " is dead and cannot be attacked->" << std::endl;
            return;
        }
        
        std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
        target->takeDMG(this->dmg);
        target->counterAttack(this->owner);
}

void MagicAttack::counterAttack(Unit* target) {
    std::cout << "Magician counterattack" << std::endl;
}

void MagicAttack::castSpell(Unit* target) {
    std::cout << "Casting fireball" << ". MP = " << this->owner->getMP() << std::endl;
    if ( this->owner->getMP() < 100 ) {
        std::cout << "Not enough mana" << std::endl;
        this->chooseAction(target);
        return;
    }
    this->owner->spendMP(100);
    target->takeDMG(150);
}

void MagicAttack::chooseAction(Unit* target) {
    int choice = 0;
    
    std::cout << "Type 1 for regular attack, type 2 to cast spell." << std::endl;
    for ( ; ; ) {
        std::cin >> choice;
        if ( choice != 1 && choice != 2 ) {
            std::cout << "You must choose 1 or 2" << std::endl;
        } else {
            break;
        }
    }
    if ( choice == 1 ) {
        std::cout << "Regular attack chosen." << std::endl;
        this->regularAttack(target);
        this->owner->addMP(50);
    } else {
        std::cout << "cast spell chosen." << std::endl; 
        this->castSpell(target);
        this->owner->addMP(50);
    }
}