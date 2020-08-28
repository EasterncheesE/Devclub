#include "Priest.h"


Priest::Priest(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
this->_magicState = new PriestMagicState(this, mp);
this->_magicAttack = new PriestMagicAttack(this, dmg);
this->addSpell(new Fireball(100,150));
this->addSpell(new Heal(50,100));
}

Priest::~Priest() {
delete (this->_state);
delete (this->_attack);
delete (this->_magicState);
delete (this->_magicAttack);
}

void Priest::attack(Unit* target) {
    if ( this->checkIfDead() ) {
        std::cout << "Priest::attack. " << this->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "Priest::attack, attacker is alive. ";
    }
        if ( target->checkIfDead() ) {
        std::cout << "Priest::attack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } 
    
    this->chooseAction(target);
}
void Priest::regularAttack(Unit* target) {
    if ( this->checkIfDead() ) {
        std::cout << "Priest::regularAttack. " << this->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "Priest::regularAttack, attacker is alive. ";
    }
        if ( target->checkIfDead() ) {
        std::cout << "Priest::regularAttack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "Priest::regularAttack, target is alive." << std::endl;
    }
    if ( target->getIsUndead() ) {
        target->takePhysDMG(this->getPhysDMG()*2);
        target->counterAttack(this);
    } else {
        target->takePhysDMG(this->getPhysDMG());
        target->counterAttack(this);
    }
}
void Priest::magicAttack(Unit* target) {
    if ( this->checkIfDead() ) {
        std::cout << "Priest::magicAttack " << this->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "Priest::magicAttack, attacker is alive. ";
    }
    if ( target->checkIfDead() ) {
        std::cout << "Priest::magicAttack " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "Priest::magicAttack, target is alive." << std::endl;
    }
    
    if ( this->getMP() > 25 ) {
        if ( target->getIsUndead() ) {
            target->takeMagicDMG(this->getMagicDMG() * 2);
            this->reduceMP(25);
        } else {
            target->takeMagicDMG(this->getMagicDMG());
            this->reduceMP(25);
        }
    } else {
        std::cout << "Not enough mana for magic attack" << std::endl;
        this->chooseAction(target);
    }
}
void Priest::counterAttack(Unit* target) {
    if ( this->checkIfDead() ) {
        std::cout << "Priest::counterAttack. " << this->getTitle() << " is dead and cannot attack. " ;
        return;
    } else {
        std::cout << "Priest::counterAttack, attacker is alive. ";
    }
        if ( target->checkIfDead() ) {
        std::cout << "Priest::counterAttack. " << target->getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    } else {
        std::cout << "Priest::counterAttack, target is alive." << std::endl;
    }
    if ( target->getIsUndead() ) {
        target->takePhysDMG(this->getPhysDMG());
    } else {
        target->takePhysDMG(this->getPhysDMG() / 2);
    }
}
void Priest::chooseAction(Unit* target) {
    std::cout << "Priest::chooseAction" << std::endl;
    int choice = 0;
    
    std::cout << "Choose 1 for regular attack, 2 for magic attack, 3 for cast spell" << std::endl;
    for ( std::cin >> choice; choice < 1 || choice > 3; )   {
        if ( choice < 1 || choice > 3 ) {
            std::cout << "You must choose 1-3" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cin >> choice;
        }
    }
    
    if ( choice == 1 ) {
        std::cout << "regular attack is chosen" << std::endl;
        this->regularAttack(target);
    } else if ( choice == 2) {
        std::cout << "magic attack is chosen" << std::endl;
        this->magicAttack(target);
    } else if ( choice == 3 ) {
        std::cout << "spell casting is chosen" << std::endl;
        this->castSpell(target);
    }
}
