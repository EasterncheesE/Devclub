#include "Unit.h"

Unit::Unit(BaseState* uState) {
    this->uState = uState;
}

bool Unit::isDead() {
    return this->uState->isDead();
}

BaseState& Unit::getUState() {
    return *(this->uState);
}

Unit::~Unit() {
    delete(this->uState);
}
void Unit::attack(Unit* enemy) {
    if ( this->isDead() ) {
        return;
    }
    enemy->takeDamage(this->uState->getDmg());
    enemy->counterAttack(this);
}

void Unit::counterAttack(Unit* enemy) {
    if ( this->isDead() ) {
        return;
    }
    
    enemy->takeDamage(this->uState->getDmg() / 2);
}

void Unit::takeDamage(int dmg) {
    this->uState->takeDamage(dmg);
}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << "Unit[" << unit.getUState() << "]";
    return out;
}