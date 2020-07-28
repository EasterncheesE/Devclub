#include "BaseState.h"


BaseState::BaseState(int health, int damage, const std::string& name) {
    this->hp = health;
    this->maxHp = health;
    this->dmg = damage;
    this->name = new std::string(name);
}
BaseState::~BaseState() {
    delete(this->name);
}

bool BaseState::isDead() {
    if ( this->hp <= 0 ) {
        return true;
    }
    return false;
}

void BaseState::checkMinMax() {
    if ( this->hp > this->maxHp) {
        this->hp = this->maxHp;
    }
    if ( this-> hp < 0 ) {
        this->hp = 0;
    }
}

int BaseState::getHp() const {
    return this->hp;
}
int BaseState::getMaxHp() const {
    return this->maxHp;
}
int BaseState::getDmg() const {
    return this->dmg;
}
const std::string& BaseState::getName() const {
    return *(this->name);
} //Возврат ссылки, а ссылка всегда константная.

void BaseState::takeDamage(int dmg) {
    if (this->isDead()) {
        return;
    }
    
    // Втулить проверку на жизнь
    this->hp -= dmg;
    this->checkMinMax();
}

std::ostream& operator<<(std::ostream& out, BaseState& state) {
    out << "name:" << state.getName() << std::endl << "HP: " << state.getHp() << "/" << state.getMaxHp() << std::endl << "dmg: " << state.getDmg();
    return out;
};