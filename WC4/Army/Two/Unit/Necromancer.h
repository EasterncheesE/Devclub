#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Spellcaster.h"
#include "../States/MagicState.h"
#include "../Attacks/MagicAttack.h"

class Necromancer : public Spellcaster {
    Necromancer(std::string title, int hp, int dmg, int mp);
    ~Necromancer();
    
    void attack(Unit* target);
    void regularAttack(Unit* target);
    void counterAttack(Unit* target);
    void castSpell(Unit* target);
    void chooseAction(Unit* target);
};

#endif // NECROMANCER_H