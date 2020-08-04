#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "../Attack/SoldierAttack.h"
#include "../State/SoldierState.h"

class Soldier : public Unit {
public:
        Soldier(std::string title, int hp, int dmg);
        ~Soldier();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // SOLDIER_H