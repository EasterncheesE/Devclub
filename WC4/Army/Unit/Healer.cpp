#include "Healer.h"

Healer::Healer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    this->_magicState = new HealerMagicState(this, mp);
    this->_magicAttack = new HealerMagicAttack(this, dmg);
    this->addSpell(new Fireball(100, 75));
    this->addSpell(new Heal(50, 200));
}

Healer::~Healer() {
    delete (this->_state);
    delete (this->_attack);
    delete (this->_magicState);
    delete (this->_magicAttack);
}