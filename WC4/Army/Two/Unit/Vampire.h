#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../Attacks/VampireAttack.h"

class Vampire : public Unit {
    public:
        Vampire(std::string title, int hp, int dmg);
        ~Vampire();
        
        void checkIfDead();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};


#endif // VAMPIRE_H