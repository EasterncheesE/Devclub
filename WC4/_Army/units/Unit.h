#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../states/BaseState.h"

class BaseAttack;

class Unit {
    BaseState* uState;
    bool isDead();
    
    public:
        Unit(BaseState* state);
        virtual ~Unit();
        
        BaseState& getUState();
        
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
        
        void takeDamage(int dmg);
};
std::ostream& operator<<(std::ostream& out, Unit& unit);
    
#endif // UNIT_H