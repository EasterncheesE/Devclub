#include "Spellbook.h"


Spellbook::Spellbook(Spellcaster* owner) {
    this->spellBook = new std::vector<Spell*>;
}
Spellbook::~Spellbook() {}

void Spellbook::getSpellList() {
    std::vector<Spell*>::iterator it = this->spellBook->begin();;
    
    for ( int i = 1; it != this->spellBook->end(); i++, it++ ) {
        Spell* spell = *it;
        std::cout << "Number: " << i << std::endl;
        std::cout << spell << std::endl;
    }
}

void Spellbook::addSpell(Spell* spell) {
    this->spellBook->push_back(spell);
}

void Spellbook::castSpell(Spell* spell, int value) {}