#include "Werewolf.h"

Werewolf::Werewolf(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    std::cout << "Werewolf constructor" << std::endl;
    this->_state = new WerewolfState(this, title, hp);
    this->_attack = new WerewolfAttack(this, dmg);
}
Werewolf::~Werewolf() {}

<<<<<<< HEAD
void Werewolf::attack(Unit* target) {
    std::cout << "Werewolf::attack" << std::endl;
    this->_attack->attack(target);
=======
bool Werewolf::getIsShapeshifted() {
    return this->_state->getIsShapeshifted();
}

void Werewolf::attack(Unit* target) {
    std::cout << "Werewolf HP = " << this->getHP() << std::endl;
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
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
}
void Werewolf::counterAttack(Unit* target) {
    std::cout << "Werewolf::counterAttack" << std::endl;
    this->_attack->counterAttack(target);
<<<<<<< HEAD
=======
}

void Werewolf::chooseAction(Unit* target) {
    std::cout << "Werewolf::chooseAction" << std::endl;
    int choice = 0;
    
    std::cout << "Choose 1 for regular attack, 2 shapeshift" << std::endl;
    for ( std::cin >> choice; choice < 1 && choice > 2; )   {
        if ( choice < 1 || choice > 3 ) {
            std::cout << "You must choose 1-2" << std::endl;
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
    }
}

void Werewolf::shapeshift() {
    this->_state->shapeshift();
    }
    
void Werewolf::takeMagicDMG(int value) {
    this->_state->takeMagicDMG(value);
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
}