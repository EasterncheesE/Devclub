#ifndef HEALER_H
#define HEALER_H

#include "Spellcaster.h"
#include "../State/HealerState.h"
#include "../Attack/HealerAttack.h"
#include "../Spell/Heal.h"
#include "../Spell/Fireball.h"

class Healer : public Spellcaster {
public:
    Healer(std::string title, int hp, int dmg, int mp);
    ~Healer();
};

#endif // HEALER_H

