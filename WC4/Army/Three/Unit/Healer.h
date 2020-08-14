#ifndef HEALER_H
#define HEALER_H

#include "Spellcaster.h"
#include "../State/Magic/HealerMagicState.h"
#include "../Attack/Magic/HealerMagicAttack.h"
#include "../Spell/Heal.h"
#include "../Spell/Fireball.h"

class Healer : public Spellcaster {
public:
    Healer(std::string title, int hp, int dmg, int mp);
    ~Healer();
};

#endif // HEALER_H

