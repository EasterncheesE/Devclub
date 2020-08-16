#include "Unit.h"

Unit::Unit(std::string title, int hp, int dmg) {
    std::cout << "Unit constructor" << std::endl;
    this->_state = new DefaultPhysState(this, title, hp);
    this->_attack = new DefaultPhysAttack(this, dmg);
}
Unit::~Unit() {
    std::cout << "Unit destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
}

bool Unit::checkIfDead() {
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
int Unit::getPhysDMG() {
    return this->_attack->getPhysDMG();
}
bool Unit::getIsUndead() {
    return this->_state->getIsUndead();
}
PhysStateRole Unit::getPhysRole() {
    return this->_state->getPhysRole();
}

void Unit::setPhysDMG(int value) {
    this->_attack->setPhysDMG(value);
}

void Unit::setState(DefaultPhysState* _state) {
    this->_state = _state;
}
void Unit::setAttack(DefaultPhysAttack* _attack) {
    this->_attack = _attack;
}

void Unit::setTitle(std::string newTitle) {
    this->_state->setTitle(newTitle);
}
void Unit::addHP(int value) {
    this->_state->addHP(value);
}
void Unit::takePhysDMG(int value) {
    this->_state->takePhysDMG(value);
}
void Unit::takeMagicDMG(int value) {
    this->_state->takeMagicDMG(value);
}
void Unit::setMaxHP(int value) {
    this->_state->setMaxHP(value);
}
void Unit::setIsUndead() {
    this->_state->setIsUndead();
}

void Unit::setPhysRole(PhysStateRole role) {
    this->_state->setPhysRole(role);
}

void Unit::attack(Unit* target) {
    this->_attack->attack(target);
}
void Unit::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}

void Unit::shapeshift() {
    this->_state->shapeshift();
}

std::ostream& operator<<(std::ostream& out, Unit* unit) {
    out << "Unit name: " << unit->getTitle();
    out << ". Unit HP: " << unit->getHP() << "/" << unit->getMaxHP();
    out << ". Unit DMG:" << unit->getPhysDMG() << std::endl;
    out << "Role: " << unit->getPhysRole();
    out << ". Is undead: " << unit->getIsUndead();
    out << ". Is dead: " << unit->checkIfDead() << std::endl;

    return out;
}