#pragma once
#ifndef BASE_STATE_H
#define BASE_STATE_H

#include <iostream>
#include "../Setup.h"

class BaseState {
    protected:
        std::string title;
        int HP;
        int maxHP;
        bool isVampire;
    public:
        BaseState(std::string title, int hp);
        BaseState(std::string title, int hp, int maxHP);
        virtual ~BaseState();
        
        bool checkIfDead();
        std::string getTitle();
        int getHP();
        int getMaxHP();
        
        bool getIsVampire();
        void setIsVampire();
        
        virtual void addHP(int hp);
        virtual void takeDMG(int dmg);
};

#endif // BASE_STATE_H

