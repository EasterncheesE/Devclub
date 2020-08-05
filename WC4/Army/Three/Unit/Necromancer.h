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

        void chooseAction(Unit* target);
        void castSpell(Unit* target);

        void attack(Unit* target);
        void regularAttack(Unit* target);
        void magicAttack(Unit* target);
        void counterAttack(Unit* target);
        
        void removeObservable(Observable* target);
};

#endif // NECROMANCER_H