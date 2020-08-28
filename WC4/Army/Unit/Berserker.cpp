#include "Berserker.h"

Berserker::Berserker(std::string title, int hp, int dmg) : Unit(title, hp, dmg) {
    this->_state = new BerserkerPhysState(this, title, hp);
    this->_attack = new BerserkerPhysAttack(this, dmg);
}
Berserker::~Berserker() {
    delete (this->_state);
    delete (this->_attack);
}