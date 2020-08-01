#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../Attack/VampireAttack.h"

class Vampire : public Unit {
    public:
        Vampire(std::string title, int hp, int dmg);
        ~Vampire();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
        void removeObservable(Observable* target);
};



#endif // VAMPIRE_H