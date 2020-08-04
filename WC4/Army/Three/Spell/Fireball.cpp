#include "Fireball.h"

Fireball::Fireball(Spellcaster* owner, int manaCost, int spellValue) : Spell(owner, "Fireball", manaCost, spellValue) {}
Fireball::~Fireball() {}

void Fireball::useSpell(Unit* target) {
    this->owner->reduceMP(this->manaCost);
    target->takeMagicDMG(this->spellValue);
}