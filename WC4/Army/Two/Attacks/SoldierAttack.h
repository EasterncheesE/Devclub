#ifndef SOLDIER_ATTACK_H
#define SOLDIER_ATTACK_H

#include "../Unit/Unit.h"
#include "BaseAttack.h"

class Unit;
class Soldier;

class SoldierAttack : public BaseAttack {
    public:
        SoldierAttack(Unit* owner, int dmg);
        ~SoldierAttack();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};


#endif // SOLDIER_ATTACK_H