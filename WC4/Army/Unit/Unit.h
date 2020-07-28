#pragma once
#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../Interface/Observer.h"
#include "../Interface/Observable.h"
#include "../States/BaseState.h"
#include "../Attacks/BaseAttack.h"

class BaseState;
class BaseAttack;

class Unit {
    protected:
        BaseState* _state;
        BaseAttack* _attack;
    public:
        Unit(std::string title);
        Unit(std::string title, int HP, int physDMG);
        virtual ~Unit();
        
        std::string getTitle();
        int getHP();
        int getMaxHP();
        int getDMG();
        
        bool checkIfDead();
        
        virtual void attack(Unit& target);
        virtual void counterAttack(Unit& target);
        virtual void addHP(int hp);
        virtual void takeDMG(int dmg);
};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif // UNIT_H