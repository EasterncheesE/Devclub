#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../State/Phys/VampirePhysState.h"
#include "../Attack/Phys/VampirePhysAttack.h"

class VampirePhysState;
class VampirePhysAttack;


class Vampire : public Unit {
public:
        Vampire(std::string title, int hp, int dmg);
        ~Vampire();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};



#endif // VAMPIRE_H