#ifndef DEFAULTSPELL_H
#define DEFAULTSPELL_H

#include <iostream>
#include "../Unit/Spellcaster.h"

class DefaultSpell {
protected:
    std::string spellName;
    int manaCost;
    int spellValue;
public:
    DefaultSpell(std::string spellName, int manaCost, int spellValue);
    virtual ~DefaultSpell();
    
    std::string getSpellName();
    int getManaCost();
    int getSpellValue();
    
    virtual void useSpell(Spellcaster* owner, Unit* target);
};

std::ostream& operator<<(std::ostream& out, DefaultSpell* spell);

#endif // DEFAULTSPELL_H