#ifndef HEAL_H
#define HEAL_H

#include "DefaultSpell.h"

class Heal : public DefaultSpell{
public:
    Heal(int manaCost = 50, int spellValue = 100);
    ~Heal();
    
    void useSpell(Spellcaster* owner, Unit* target);
};
#endif // HEAL_H