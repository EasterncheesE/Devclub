#ifndef FIREBALL_H
#define FIREBALL_H

#include "DefaultSpell.h"

class Fireball : public DefaultSpell {
public:
    Fireball(int manaCost = 100, int spellValue = 150);
    ~Fireball();
    
    void useSpell(Spellcaster* owner, Unit* target);
};

#endif // FIREBALL_H