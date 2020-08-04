#ifndef FIREBALL_H
#define FIREBALL_H

#include "Spell.h"

class Fireball : public Spell {
public:
    Fireball(Spellcaster* owner, int manaCost = 100, int spellValue = 150);
    ~Fireball();
    
    void useSpell(Unit* target);
};

#endif // FIREBALL_H