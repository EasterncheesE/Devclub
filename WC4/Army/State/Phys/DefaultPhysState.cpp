#include "DefaultPhysState.h"

DefaultPhysState::DefaultPhysState(Unit* owner, std::string title, int hp) {
    std::cout << "DefaultPhysState constructor" << std::endl;
    this->owner = owner;
    this->title = title;
    this->HP = hp;
    this->maxHP = hp;
    this->physRole = unit;
    this->isUndead = false;
    
}
DefaultPhysState::~DefaultPhysState() {}

bool DefaultPhysState::checkIfDead() {
    if ( this->owner->getHP() <= 0 ) {
        return true;
    } 
    return false;
}

Unit* DefaultPhysState::getOwner() {
    return this->owner;
}
std::string DefaultPhysState::getTitle() {
    return this->title;
}
int DefaultPhysState::getHP() {
    return this->HP;
}
int DefaultPhysState::getMaxHP() {
    return this->maxHP;
}

bool DefaultPhysState::getIsUndead() {
    return this->isUndead;
}
PhysStateRole DefaultPhysState::getPhysRole() {
    return this->physRole;
}

void DefaultPhysState::setTitle(std::string newTitle) {
    this->title = newTitle;
}
void DefaultPhysState::addHP(int value) {
    if ( this->checkIfDead() ) {
        std::cout << "You cannot heal dead unit" << std::endl;
        return;
    } else {
        if ( this->HP + value >= this->maxHP ) {
            std::cout << "Unit " << this->title << " was healed for " << this->maxHP - this->HP << " HP." << std::endl;
            this->HP = this->maxHP;
        } else {
            std::cout << "Unit " << this->title << " was healed for " << value << " HP." << std::endl;
            this->HP += value;
        }
    }
}
void DefaultPhysState::takePhysDMG(int value) {
    if ( this->checkIfDead() ) {
        std::cout << "You cannot damage dead unit" << std::endl;
        return;
    } else {
        if ( this->HP <= value ) {
            std::cout << "Unit " << this->title << " was damaged for " << this->HP << " HP. He is dead now, notifying." << std::endl;
            this->HP = 0;
            this->owner->notifyObservables();
            this->owner->notifyObservers();
        } else {
            this->HP -= value;
            std::cout << "Unit " << this->title << " was damaged for " << value << " HP. HP left: " << this->HP << "/" << this->maxHP << std::endl;
        }
    }
}
void DefaultPhysState::takeMagicDMG(int value) {
    std::cout << "DefaultPhysState::takeMagicDMG" << std::endl;
    if ( this->checkIfDead() ) {
        std::cout << "You cannot damage dead unit" << std::endl;
        return;
    }
    if ( this->HP <= value ) {
        std::cout << "Unit " << this->title << " was damaged for " << this->HP << " HP. He is dead now, notifying." << std::endl;
        this->HP = 0;
        this->owner->notifyObservables();
        this->owner->notifyObservers();
    } else {
        this->HP -= value;
        std::cout << "Unit " << this->title << " was damaged for " << value << " HP. HP left: " << this->HP << "/" << this->maxHP << std::endl;
    }
}

void DefaultPhysState::setHP(int value) {
    this->HP = value;
}

void DefaultPhysState::setMaxHP(int value) {
    this->maxHP = value;
}
void DefaultPhysState::setIsUndead() {
    this->isUndead = true;
}
void DefaultPhysState::setPhysRole(PhysStateRole physRole) {
    this->physRole = physRole;
}

void DefaultPhysState::shapeshift() {}
