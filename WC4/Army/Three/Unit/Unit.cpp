#include "Unit.h"

Unit::Unit(std::string title, int hp, int dmg) {
    std::cout << "Unit constructor 2" << std::endl;
    this->_state = new BaseState(title, hp, this);
    this->_attack = new BaseAttack(this, dmg);
};
Unit::~Unit() {
    std::cout << "Unit destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
}

bool Unit::checkIfDead() {
    if ( this->getHP() <= 0 ) {
        std::cout << "Unit is dead, notifying observers" << std::endl;
        this->notifyObservers();
        this->notifyObservables();
        return true;
    }
    return false;
}

std::string Unit::getTitle() {
    return this->_state->getTitle();
}
int Unit::getHP() {
    return this->_state->getHP();
}
int Unit::getMaxHP() {
    return this->_state->getMaxHP();
}
int Unit::getDMG() {
    return this->_attack->getDMG();
}

BaseState* Unit::getState() {
    return this->_state;
}

BaseAttack* Unit::getAttack() {
    return this->_attack;
}
void Unit::setState(BaseState* newState) {
    this->_state = newState;
}

void Unit::setAttack(BaseAttack* newAttack) {
    this->_attack = newAttack;
}

bool Unit::getStateChangeImmune() {
    return this->_state->getStateChangeImmune();
}
void Unit::setStateChangeImmune() {
    this->_state->setStateChangeImmune();
}


bool Unit::getIsVampire() {
    return this->_state->getIsVampire();
}
void Unit::setIsVampire() {
    this->_state->setIsVampire();
}

bool Unit::getIsWerewolf() {
    return this->_state->getIsWerewolf();
}
void Unit::setIsWerewolf() {
    this->_state->setIsWerewolf();
}

void Unit::attack(Unit* target) {
    this->_attack->attack(target);
}
void Unit::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}

void Unit::addHP(int hp) {
    this->_state->addHP(hp);
}
void Unit::takeDMG(int dmg) {
    this->_state->takeDMG(dmg);
}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << "Unit name: " << unit.getTitle() << std::endl;
    out << "Unit HP: " << unit.getHP() << "/" << unit.getMaxHP() << std::endl;
    out << "Unit DMG:" << unit.getDMG() << std::endl;
    out << "Is vampire: " << unit.getIsVampire() << std::endl;
    out << "Is werewolf: " << unit.getIsWerewolf() << std::endl;
    return out;
}