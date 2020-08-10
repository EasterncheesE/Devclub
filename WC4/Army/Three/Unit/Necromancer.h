#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Spellcaster.h"
#include "../State/NecromancerState.h"
#include "../Attack/NecromancerAttack.h"
#include "../Spell/Fireball.h"
#include "../Spell/Heal.h"



class NecromancerState;
class NecromancerAttack;

class Necromancer : public Spellcaster {
public:
    Necromancer(std::string title, int hp, int dmg, int mp);
    ~Necromancer();

    void removeObservable(Observable* target);
};

#endif // NECROMANCER_H