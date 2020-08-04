#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include "Spell.h"
#include <vector>

class Spell;

class Spellbook {
protected:
    std::vector<Spell*>* spellBook;
public: 
    Spellbook(Spellcaster* owner);
    ~Spellbook();
    
    void getSpellList();
    void addSpell(Spell* spell);
    
    void castSpell(Spell* spell, int value);
};

#endif // SPELLBOOK_H