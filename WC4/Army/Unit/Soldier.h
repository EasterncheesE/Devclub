#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "../Attack/Phys/SoldierPhysAttack.h"
#include "../State/Phys/SoldierPhysState.h"

class Soldier : public Unit {
public:
        Soldier(std::string title, int hp, int dmg);
        ~Soldier();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // SOLDIER_H