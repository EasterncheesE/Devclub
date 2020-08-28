#include "Werewolf.h"

Werewolf::Werewolf(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Werewolf constructor" << std::endl;
    this->_state = new WerewolfState(this, title, hp);
    this->_attack = new WerewolfAttack(this, dmg);
    this->isShapeshifted = false;
}
Werewolf::~Werewolf() {}

bool Werewolf::getIsShapeshifted() {
    return this->isShapeshifted;
}

void Werewolf::attack(Unit* target) {
    std::cout << this << std::endl;
    if ( this->checkIfDead() ) {
        std::cout << "WerewolfAttack::attack " << this->getTitle() << " is dead and cannot attack. " ;
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
    std::cout << "Werewolf::attack" << std::endl;
    this->chooseAction(target);
}
void Werewolf::counterAttack(Unit* target) {
    std::cout << "Werewolf::counterAttack" << std::endl;
    this->_attack->counterAttack(target);
}

void Werewolf::chooseAction(Unit* target) {
    std::cout << "Werewolf::chooseAction" << std::endl;
    int choice = 0;
    
    std::cout << "Choose 1 for regular attack, 2 shapeshift, 3 do nothing" << std::endl;
    for ( std::cin >> choice; choice < 1 && choice > 3; )   {
        if ( choice < 1 || choice > 3 ) {
            std::cout << "You must choose 1-3" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cin >> choice;
        }
    }
    if ( choice == 1 ) {
        std::cout << "regular attack is chosen" << std::endl;
        this->_attack->attack(target);
    } else if ( choice == 2) {
        std::cout << "shapeshifting is chosen" << std::endl;
        this->shapeshift();
    } else {
        return;
    }
}

void Werewolf::shapeshift() {
    std::cout << "HP was " << this->getHP() << "/" << this->getMaxHP() << ". PhysDMG was " << this->getPhysDMG() << std::endl;
    if ( this->isShapeshifted ) {
        this->_state->setMaxHP(this->_state->getMaxHP() / 2);
        this->_state->setHP(this->_state->getHP() / 2);
        this->_attack->setPhysDMG(this->_attack->getPhysDMG() / 2);
    } else {
        this->_state->setMaxHP(this->_state->getMaxHP() * 2);
        this->_state->setHP(this->_state->getHP() * 2);
        this->_attack->setPhysDMG(this->_attack->getPhysDMG() * 2);
    }
    std::cout << "HP now " << this->getHP() << "/" << this->getMaxHP() << ". PhysDMG now " << this->getPhysDMG() << std::endl;
    this->isShapeshifted = !(this->isShapeshifted);
}

void Werewolf::takeMagicDMG(int value) {
    if (this->isShapeshifted) {
        this->_state->takeMagicDMG(value*2);
    } else {
        this->_state->takeMagicDMG(value);
    }

}