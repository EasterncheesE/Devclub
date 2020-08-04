#ifndef HEAL_H
#define HEAL_H

#include "Spell.h"

class Heal : public Spell {
public:
    Heal(Spellcaster* owner, int manaCost = 50, int spellValue = 100);
    ~Heal();
    
    void useSpell(Unit* target);
};
#endif // HEAL_H