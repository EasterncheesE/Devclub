#ifndef PRIEST_H
#define PRIEST_H

#include "Spellcaster.h"
#include "../State/Magic/PriestMagicState.h"
#include "../Attack/Magic/PriestMagicAttack.h"
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