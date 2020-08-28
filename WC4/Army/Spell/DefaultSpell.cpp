#include "DefaultSpell.h"

DefaultSpell::DefaultSpell(std::string spellName, int manaCost, int spellValue) {
    this->manaCost = manaCost;
    this->spellValue = spellValue;
    this->spellName = spellName;
}
DefaultSpell::~DefaultSpell() {}

std::string DefaultSpell::getSpellName() {
    return this->spellName;
}

int DefaultSpell::getManaCost() {
    return this->manaCost;
}
int DefaultSpell::getSpellValue() {
    return this->spellValue;
}

void DefaultSpell::useSpell(Spellcaster* owner, Unit* target) {
    target->takeMagicDMG(this->spellValue);
}

std::ostream& operator<<(std::ostream& out, DefaultSpell* spell) {
    out << "SpellName: " << spell->getSpellName();
    out << ". Mana Cost: " << spell->getManaCost();
    out << ". Spell value effect: " << spell->getSpellValue() << std::endl;
    return out;
}
