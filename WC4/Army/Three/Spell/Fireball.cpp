#include "Fireball.h"

Fireball::Fireball(int manaCost, int spellValue) : DefaultSpell("Fireball", manaCost, spellValue) {}
Fireball::~Fireball() {}

void Fireball::useSpell(Spellcaster* owner, Unit* target) {
    owner->reduceMP(this->manaCost);
    target->takeMagicDMG(this->spellValue);
}