#include "Spellcaster.h"


Spellcaster::Spellcaster(std::string title, int hp, int dmg, int mp) : Unit(title, hp, dmg) {
    this->_state = new MagicState(title, hp, mp);
    this->_attack = new MagicAttack(this, dmg);
    this->_state->setIsSpellcaster();
    this->_state->setStateChangeImmune();
}
Spellcaster::~Spellcaster();

int Spellcaster::getMP();
int Spellcaster::getManaRegen();
void Spellcaster::addMP(int MP);
void Spellcaster::spendMP(int MP);

void Spellcaster::attack(Unit* target);
void Spellcaster::counterattack(Unit* target);
void Spellcaster::castSpell(Unit* target);
void Spellcaster::chooseAction(Unit* target);