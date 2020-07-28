#pragma once
#ifndef BASE_STATE_H
#define BASE_STATE_H

#include <iostream>

class BaseState {
    protected:
        std::string title;
        int HP;
        int maxHP;
    public:
        BaseState(std::string title);
        BaseState(std::string title, int HP);
        virtual ~BaseState();
        
        bool checkIfDead();
        std::string getTitle();
        int getHP();
        int getMaxHP();
        
        virtual void addHP(int hp);
        virtual void takeDMG(int dmg);
};

#endif // BASE_STATE_H

