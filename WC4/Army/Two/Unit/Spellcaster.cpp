#include "Spellcaster.h"


Spellcaster::Spellcaster(std::string title, int hp, int dmg, int mp) : Unit(title, hp, dmg) {
    this->_magicState = new MagicState(mp);
    this->_magicAttack = new MagicAttack(this, dmg);
    this->_state->setIsSpellcaster();
    this->_state->setStateChangeImmune();
}
Spellcaster::~Spellcaster() {}

int Spellcaster::getMP() {
    return this->_magicState->getMP();
}
int Spellcaster::getMaxMP() {
    return this->_magicState->getMaxMP();
}
int Spellcaster::getManaRegen() {
    return this->_magicState->getManaRegen();
}
void Spellcaster::addMP(int MP) {
    this->_magicState->addMP(MP);
}
void Spellcaster::spendMP(int MP) {
    this->_magicState->spendMP(MP);
}

void Spellcaster::attack(Unit* target) {
    this->_magicAttack->attack(target);
}
void Spellcaster::counterAttack(Unit* target) {
    this->_magicAttack->counterAttack(target);
}
void Spellcaster::castSpell(Unit* target) {
    this->_magicAttack->castSpell(target);
}
void Spellcaster::chooseAction(Unit* target) {
    this->_magicAttack->chooseAction(target);
}

std::ostream& operator<<(std::ostream& out, Spellcaster& spellcaster) {
    out << "Spellcaster name: " << spellcaster.getTitle() << std::endl;
    out << "Spellcaster HP: " << spellcaster.getHP() << "/" << spellcaster.getMaxHP() << std::endl;
    out << "Spellcaster MP " << spellcaster.getMP() << "/" << spellcaster.getMaxMP() << std::endl;
    out << "Spellcaster DMG:" << spellcaster.getDMG() << std::endl;
    out << "Is vampire: " << spellcaster.getIsVampire() << std::endl;
    out << "Is werewolf: " << spellcaster.getIsWerewolf() << std::endl;
    return out;
}