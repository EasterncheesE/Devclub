#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <vector>
#include "../Unit/Spellcaster.h"
#include "DefaultSpell.h"
// #include "Fireball.h" 
// #include "Heal.h"


class DefaultSpell;
class Spellcaster;

class Spellbook {
protected:
    Spellcaster* owner;
    std::vector<DefaultSpell*>* _spellBook;
public: 
    Spellbook(Spellcaster* owner);
    ~Spellbook();
    
    void getSpellList();
    void addSpell(DefaultSpell* spell);
    
    void chooseSpell(Unit* target);
};

#endif // SPELLBOOK_H