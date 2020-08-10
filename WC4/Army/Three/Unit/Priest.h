#ifndef PRIEST_H
#define PRIEST_H

#include "Spellcaster.h"
#include "../State/HealerState.h"
#include "../Attack/HealerAttack.h"
#include "../Spell/Heal.h"
#include "../Spell/Fireball.h"

class Priest : public Spellcaster {
public:
    Priest(std::string title, int hp, int dmg, int mp);
    ~Priest();
};

#endif // PRIEST_H