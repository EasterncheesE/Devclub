#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Spellcaster.h"
#include "../States/MagicState.h"
#include "../Attacks/MagicAttack.h"
#include "../Interface/Observer.h"
#include "../Interface/Observable.h"

class Necromancer : public Spellcaster {
    public:
        Necromancer(std::string title, int hp, int dmg, int mp);
        ~Necromancer();
        
        void attack(Unit* target);
        void regularAttack(Unit* target);
        void counterAttack(Unit* target);
        void castSpell(Unit* target);
        void chooseAction(Unit* target);
        
        void removeObserver(Observable* target);


};

#endif // NECROMANCER_H