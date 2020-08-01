#include "BaseState.h"

BaseState::BaseState(std::string title, int hp) {
    this->title = title;
    this->HP = hp;
    this->maxHP = hp;
    this->isVampire = false;
    this->isWerewolf = false;
    this->isSpellcaster = false;
}
BaseState::BaseState(std::string title, int hp, int maxHP) {
    this->title = title;
    this->HP = hp;
    this->maxHP = maxHP;
}
BaseState::~BaseState() {}

bool BaseState::checkIfDead() {
    if ( this->HP <= 0 ) {
        return 1;
    }
    return 0;
}

std::string BaseState::getTitle() {
    return this->title;
}
int BaseState::getHP() {
    return this->HP;
}
int BaseState::getMaxHP() {
    return this->maxHP;
}

bool BaseState::getStateChangeImmune() {
    return this->changeStateImmune;
}
void BaseState::setStateChangeImmune() {
    this->changeStateImmune = true;
}

bool BaseState::getMagicImmunity() {
    return this->isMagicImmune;
}
void BaseState::setMagicImmunity() {
    this->isMagicImmune = true;
}

bool BaseState::getIsVampire() {
    return this->isVampire;
}
void BaseState::setIsVampire() {
    this->isVampire = true;
    this->changeStateImmune = true;
}
bool BaseState::getIsWerewolf() {
    return this->isWerewolf;
}
void BaseState::setIsWerewolf() {
    this->isWerewolf = true;
    this->changeStateImmune = true;
}
bool BaseState::getIsSpellcaster() {
    return this->isSpellcaster;
}
void BaseState::setIsSpellcaster() {
    this->isSpellcaster = true;
    this->changeStateImmune = true;
}



void BaseState::addHP(int hp) {
    if ( this->checkIfDead()) {
        std::cout << "Cannot heal killed unit.";
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
