#ifndef SPELL_H
#define SPELL_H

#include <iostream>
#include "../Unit/Spellcaster.h"

class Spellcaster;

class Spell {
protected:
    Spellcaster* owner;
    std::string spellName;
    int manaCost;
    int spellValue;
public:
    Spell(Spellcaster* owner, std::string spellName, int manaCost, int spellValue);
    ~Spell();
    
    std::string getSpellName();
    int getManaCost();
    int getSpellValue();
    
    virtual void useSpell(Unit* target);
};

std::ostream& operator<<(std::ostream& out, Spell* spell);

#endif // SPELL_H