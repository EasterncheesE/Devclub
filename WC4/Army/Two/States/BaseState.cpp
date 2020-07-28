#include "BaseState.h"

BaseState::BaseState(std::string title, int hp) {
    this->title = title;
    this->HP = hp;
    this->maxHP = hp;
}
BaseState::~BaseState() {}

std::string BaseState::getTitle() {
    return this->title;
}
int BaseState::getHP() {
    return this->HP;
}
int BaseState::getMaxHP() {
    return this->maxHP;
}
bool BaseState::checkIfDead() {
    if ( this->HP <= 0 ) {
        return 1;
    }
    return 0;
}

void BaseState::addHP(int hp) {
    if ( this->checkIfDead()) {
        std::cout << "Cannot heal non-undead killed unit.";
        return;
    }
    if ( this->HP + hp > this->maxHP ) {
        this->HP = this->maxHP;
    } else {
        this->HP += hp;
    }
    
}

void BaseState::takeDMG(int dmg) {
    if ( this->checkIfDead() ) {
        std::cout << this->title << " is dead, cannot be attacked" << std::endl;
    }
    
    if ( dmg >= this->HP ) {
         std::cout << this->title << " took " << this->HP << " points of damage. He is dead now" << std::endl;
        this->HP = 0;
    } else {
        this->HP -= dmg;
        std::cout << this->title << " took " << dmg << " points of damage. HP left: " << this->HP << "/" << this->maxHP << "." << std::endl;
    }
    
}
