#include "Unit.h"

Unit::Unit(std::string title, int hp) {
    std::cout << "Unit constructor 1" << std::endl;
    this->_state = new BaseState(title, hp);
    this->_attack = new BaseAttack(this, 0);
}
Unit::Unit(std::string title, int hp, int physDMG) {
    std::cout << "Unit constructor 2" << std::endl;
    this->_state = new BaseState(title, hp);
    this->_attack = new BaseAttack(this, physDMG);
};
Unit::~Unit() {
    std::cout << "Unit destructor" << std::endl;
    delete(this->_state);
    delete(this->_attack);
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

bool Unit::getIsVampire() {
    return this->_state->getIsVampire();
}
void Unit::setIsVampire() {
    this->_state->setIsVampire();
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
    return out;
}