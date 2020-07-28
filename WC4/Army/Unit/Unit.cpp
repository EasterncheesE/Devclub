#include "Unit.h"

Unit::Unit(std::string title) {
    this->_state = new BaseState(title);
    this->_attack = new BaseAttack(this);
};
Unit::Unit(std::string title, int HP, int physDMG) {
    this->_state = new BaseState(title, HP);
    this->_attack = new BaseAttack(this, physDMG);
};
Unit::~Unit() {
    delete this->_state;
    delete this->_attack;
}

bool Unit::checkIfDead() {
    if ( this->getHP() <= 0 ) {
        // this->notify();
        return 1;
    }
    return 0;
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
    return this->_attack->getPhysDMG();
}
    
    
void Unit::attack(Unit& target) {
    this->_attack->attack(target);
}
void Unit::counterAttack(Unit& target) {
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
    return out;
}