#include "Spell.h"

Spell::Spell(Spellcaster* owner, std::string spellName, int manaCost, int spellValue) {
    this->owner = owner;
    this->manaCost = manaCost;
    this->spellValue = spellValue;
    this->spellName = spellName;
}
Spell::~Spell() {}

std::string Spell::getSpellName() {
    return this->spellName;
}

int Spell::getManaCost() {
    return this->manaCost;
}
int Spell::getSpellValue() {
    return this->spellValue;
}

void Spell::useSpell(Unit* target) {
    target->takeMagicDMG(this->spellValue);
}

std::ostream& operator<<(std::ostream& out, Spell* spell) {
    out << "Spell Name: " << spell->getSpellName() << std::endl;
    out << "Spell Cost: " << spell->getManaCost() << std::endl;
    out << "Spell Damage/Heal: " << spell->getSpellValue() << std::endl;
    return out;
}
