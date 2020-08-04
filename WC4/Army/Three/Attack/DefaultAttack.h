#ifndef DEFAULT_ATTACK_H
#define DEFAULT_ATTACK_H

#include "../Unit/Unit.h"

class Unit;

class DefaultAttack {
protected:
        Unit* owner;
        int dmg;
public:
        DefaultAttack(Unit* owner, int dmg);
        virtual ~DefaultAttack();
        
        int getDMG();
        
        virtual void attack(Unit* target);
        virtual void counterAttack(Unit* target);
};


#endif // DEFAULT_ATTACK_H