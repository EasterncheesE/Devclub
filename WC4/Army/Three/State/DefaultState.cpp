#include "DefaultState.h"

DefaultState::DefaultState(Unit* owner, std::string title, int hp) {
    std::cout << "DefaultState constructor" << std::endl;
    this->owner = owner;
    this->title = title;
    this->HP = hp;
    this->maxHP = hp;
    this->isVampire = false;
    this->isWerewolf = false;
    this->isTurnImmune = false;
    this->isShapeshifted = false;
    
}
DefaultState::~DefaultState() {}

bool DefaultState::checkIfDead() {
    if ( this->owner->getHP() <= 0 ) {
        return true;
    } 
    return false;
}

Unit* DefaultState::getOwner() {
    return this->owner;
}
std::string DefaultState::getTitle() {
    return this->title;
}
int DefaultState::getHP() {
    return this->HP;
}
int DefaultState::getMaxHP() {
    return this->maxHP;
}
bool DefaultState::getIsVampire() {
    return this->isVampire;
}
bool DefaultState::getIsWerewolf() {
    return this->isWerewolf;
}
bool DefaultState::getIsTurnImmune() {
    return this->isTurnImmune;
}
bool DefaultState::getIsMagicImmune() {
    return this->isMagicImmune;
}
bool DefaultState::getIsShapeshifted() {
    return this->isShapeshifted;
}
bool DefaultState::getIsUndead() {
    return this->isUndead;
}
void DefaultState::setTitle(std::string newTitle) {
    this->title = newTitle;
}
void DefaultState::addHP(int value) {
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
void DefaultState::takePhysDMG(int value) {
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
void DefaultState::takeMagicDMG(int value) {
    std::cout << "DefaultState::takeMagicDMG" << std::endl;
    if ( this->checkIfDead() ) {
        std::cout << "You cannot damage dead unit" << std::endl;
        return;
    } else {
        if ( this->isMagicImmune ) {
            std::cout << "Unit is immune to magic and cannot be damaged by it" << std::endl;
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
}
void DefaultState::setHP(int value) {
    this->HP = value;
}

void DefaultState::setMaxHP(int value) {
    this->maxHP = value;
}
void DefaultState::setIsVampire() {
    this->isVampire = true;
}
void DefaultState::setIsWerewolf() {
    this->isWerewolf = true;
}
void DefaultState::setIsTurnImmune() {
    this->isTurnImmune = true;
}
void DefaultState::setIsMagicImmune() {
    this->isMagicImmune = true;
}
void DefaultState::shapeshift() {
    if ( this->isShapeshifted ) {
        this->HP /= 1.5;
        this->maxHP /= 1.5;
        this->owner->setPhysDMG(this->owner->getPhysDMG() / 1.5);
    } else {
        this->HP *= 1.5;
        this->maxHP *= 1.5;
        this->owner->setPhysDMG(this->owner->getPhysDMG() * 1.5);
    }
    this->isShapeshifted = !(this->isShapeshifted);
}

void DefaultState::setIsUndead() {
    this->isUndead = true;
}