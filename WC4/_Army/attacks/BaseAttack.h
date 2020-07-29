#ifndef BASEATTACK_H
#define BASEATTACK_H

#include "../units/Unit.h"

class Unit;

class BaseAttack() {
    
    public:
        BaseAttack(int dmg);
        ~BaseAttack();
        
        virtual void attack(Unit& attacker, Unit& enemy);
        virtual void counterAttack(Unit& attacker, Unit& enemy);
        
        
};

#endif // BASEATTACK_H