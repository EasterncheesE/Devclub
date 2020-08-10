#include "Healer.h"

Healer::Healer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    this->_magicState = new HealerState(this, mp);
    this->_magicAttack = new HealerAttack(this, dmg);
    this->addSpell(new Fireball(100, 75));
    this->addSpell(new Heal(50, 200));
}

Healer::~Healer() {
    delete (this->_state);
    delete (this->_attack);
    delete (this->_magicState);
    delete (this->_magicAttack);
}