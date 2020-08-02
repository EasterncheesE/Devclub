#include "Unit.h"

Unit::Unit(std::string title, int hp, int dmg) {
    std::cout << "Unit constructor" << std::endl;
    this->_state = new DefaultState(this, title, hp);
    this->_attack = new DefaultAttack(this, dmg);
}
Unit::~Unit() {
    std::cout << "Unit destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
}

bool Unit::checkIfDead() {
    if ( this->getHP() <= 0) {
        this->notifyObservers();
        this->notifyObservables();
    }
    return this->_state->checkIfDead();
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
bool Unit::getIsVampire() {
    return this->_state->getIsVampire();
}
bool Unit::getIsWerewolf() {
    return this->_state->getIsWerewolf();
}
bool Unit::getIsTurnImmune() {
    return this->_state->getIsTurnImmune();
}
bool Unit::getIsMagicImmune() {
    return this->_state->getIsMagicImmune();
}
int Unit::getDMG() {
    return this->_attack->getDMG();
}
void Unit::setTitle(std::string newTitle) {
    this->_state->setTitle(newTitle);
}
void Unit::addHP(int value) {
    this->_state->addHP(value);
}
void Unit::reduceHP(int value) {
    this->_state->reduceHP(value);
}
void Unit::setMaxHP(int value) {
    this->_state->setMaxHP(value);
}
void Unit::setIsVampire() {
    this->_state->setIsVampire();
}
void Unit::setIsWerewolf() {
    this->_state->setIsWerewolf();
}
void Unit::setIsTurnImmune() {
    this->_state->setIsTurnImmune();
}
void Unit::setIsMagicImmune() {
    this->_state->setIsMagicImmune();
}

void Unit::attack(Unit* target) {
    this->_attack->attack(target);
}
void Unit::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}

std::ostream& operator<<(std::ostream& out, Unit* unit) {
    out << "Unit name: " << unit->getTitle();
    out << ". Unit HP: " << unit->getHP() << "/" << unit->getMaxHP();
    out << ". Unit DMG:" << unit->getDMG() << std::endl;
    out << "Is vampire: " << unit->getIsVampire();
    out << ". Is werewolf: " << unit->getIsWerewolf();
    out << ". Is werewolf: " << unit->getIsWerewolf();
    out << ". Turn immune: " << unit->getIsWerewolf();
    out << ". Magic Immune: " << unit->getIsWerewolf();
    out << ". Is dead: " << unit->checkIfDead() << std::endl;
    return out;
}