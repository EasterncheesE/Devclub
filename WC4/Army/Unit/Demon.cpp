#include "Demon.h"

Demon::Demon(std::string title, int hp, int dmg) : Soldier(title, hp, dmg) {
    this->_state = new DemonPhysState(this, title, hp);
    this->_attack = new DemonPhysAttack(this, dmg);
}
Demon::~Demon() {
    delete (this->_state);
    delete (this->_attack);
}