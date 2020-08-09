#ifndef DEFAULT_ATTACK_H
#define DEFAULT_ATTACK_H

#include "../Unit/Unit.h"

class Unit;

class DefaultAttack {
protected:
        Unit* owner;
        int physDMG;
public:
        DefaultAttack(Unit* owner, int physDMG);
        virtual ~DefaultAttack();
        
        int getPhysDMG();
<<<<<<< HEAD
=======
        void setPhysDMG(int value);
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
        
        virtual void attack(Unit* target);
        virtual void counterAttack(Unit* target);
};


#endif // DEFAULT_ATTACK_H