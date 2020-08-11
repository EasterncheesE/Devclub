#ifndef PRIEST_H
#define PRIEST_H

#include "Spellcaster.h"
#include "../State/PriestState.h"
#include "../Attack/PriestAttack.h"
#include "../Spell/Heal.h"
#include "../Spell/Fireball.h"

class Priest : public Spellcaster {
public:
    Priest(std::string title, int hp, int dmg, int mp);
    ~Priest();
    
    void attack(Unit* target);
    void regularAttack(Unit* target);
    void magicAttack(Unit* target);
    void counterAttack(Unit* target);
    void chooseAction(Unit* target);
};

#endif // PRIEST_H