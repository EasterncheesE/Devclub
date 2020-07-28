#include "Unit.h"

Unit::Unit(std::string title) {
    this->baseState = new BaseState(title);
    this->baseAttack = new BaseAttack(this);
};
Unit::Unit(std::string title, int HP, int physDMG) {
    this->baseState = new BaseState(title, HP);
    this->baseAttack = new BaseAttack(this, physDMG);
};
Unit::~Unit() {
    delete this->baseState;
    delete this->baseAttack;
}

bool Unit::checkIfDead() {
    if ( this->getHP() <= 0 ) {
        // this->notify();
        return 1;
    }
    return 0;
}

std::string Unit::getTitle() {
    return this->baseState->getTitle();
}
int Unit::getHP() {
    return this->baseState->getHP();
}
int Unit::getMaxHP() {
    return this->baseState->getMaxHP();
}
int Unit::getDMG() {
    return this->baseAttack->getPhysDMG();
}
    
    
void Unit::attack(Unit& target) {
    this->baseAttack->attack(target);
}
void Unit::counterAttack(Unit& target) {
    this->baseAttack->counterAttack(target);
}

void Unit::addHP(int hp) {
    this->baseState->addHP(hp);
}
void Unit::takeDMG(int dmg) {
    this->baseState->takeDMG(dmg);
}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << "Unit name: " << unit.getTitle() << std::endl;
    out << "Unit HP: " << unit.getHP() << "/" << unit.getMaxHP() << std::endl;
    out << "Unit DMG:" << unit.getDMG() << std::endl;
    return out;
}