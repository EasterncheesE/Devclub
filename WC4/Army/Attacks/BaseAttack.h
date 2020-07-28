#pragma once
#ifndef BASE_ATTACK_H
#define BASE_ATTACK_H

#include "../Unit/Unit.h"

class Unit;

class BaseAttack {
    protected:
        int physDMG;
        Unit* owner;
    public:
        BaseAttack(Unit* owner);
        BaseAttack(Unit* owner, int physDMG);
        ~BaseAttack();
        
        int getPhysDMG();
        virtual void attack(Unit& target);
        virtual void counterAttack(Unit& target);
};


#endif // BASE_ATTACK_H