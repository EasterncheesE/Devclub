#include "Heal.h"

Heal::Heal(int manaCost, int spellValue) : DefaultSpell("Heal", manaCost, spellValue) {}
Heal::~Heal() {}

void Heal::useSpell(Spellcaster* owner, Unit* target) {
    owner->reduceMP(this->manaCost);
    owner->addHP(this->spellValue);
}