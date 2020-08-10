#include "Priest.h"


Priest::Priest(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {}
Priest::~Priest() {
    delete (this->_state);
    delete (this->_attack);
    delete (this->_magicState);
    delete (this->_magicAttack);
}