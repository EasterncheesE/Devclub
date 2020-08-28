#ifndef DEFAULT_ATTACK_H
#define DEFAULT_ATTACK_H

#include "../../Unit/Unit.h"

class Unit;

class DefaultPhysAttack {
protected:
        Unit* owner;
        int physDMG;
public:
        DefaultPhysAttack(Unit* owner, int physDMG);
        virtual ~DefaultPhysAttack();
        
        virtual int getPhysDMG();
        virtual void setPhysDMG(int value);
        
        virtual void attack(Unit* target);
        virtual void counterAttack(Unit* target);
};


#endif // DEFAULT_ATTACK_H