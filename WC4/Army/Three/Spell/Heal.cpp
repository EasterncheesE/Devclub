#include "Heal.h"

Heal::Heal(Spellcaster* owner, int manaCost, int spellValue) : Spell(owner, "Heal", manaCost, spellValue) {}
Heal::~Heal() {}

void Heal::useSpell(Unit* target) {
    this->owner->reduceMP(this->manaCost);
    this->owner->addHP(this->spellValue);
}