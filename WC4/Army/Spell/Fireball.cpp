#include "Fireball.h"

Fireball::Fireball(int manaCost, int spellValue) : DefaultSpell("Fireball", manaCost, spellValue) {}
Fireball::~Fireball() {}

void Fireball::useSpell(Spellcaster* owner, Unit* target) {
    std::cout << "Fireball::useSpell" << std::endl;
    if ( owner->getMP() >= this->manaCost ) {
        if ( owner->getMagicRole() == priest && target->getIsUndead() ) {
            owner->reduceMP(this->manaCost);
            target->takeMagicDMG(this->spellValue*2);
        } else {
            owner->reduceMP(this->manaCost);
            target->takeMagicDMG(this->spellValue);
        }
    } else {
        std::cout << "Not enough mana to cast Fireball" << std::endl;
    }
}