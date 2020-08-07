#ifndef DEFAULT_STATE_H
#define DEFAULT_STATE_H

#include <iostream>
#include "../Unit/Unit.h"

class Unit;

class DefaultState {
protected:
        Unit* owner;
        std::string title;
        int HP;
        int maxHP;
        bool isVampire;
        bool isWerewolf;
        bool isTurnImmune;
        bool isMagicImmune;
        
public:
        DefaultState(Unit* owner, std::string title, int hp);
        ~DefaultState();
        
        bool checkIfDead();
        
        Unit* getOwner();
        std::string getTitle();
        int getHP();
        int getMaxHP();
        bool getIsVampire();
        bool getIsWerewolf();
        bool getIsTurnImmune();
        bool getIsMagicImmune();

        void setTitle(std::string newTitle);
        virtual void addHP(int value);
        virtual void takePhysDMG(int value);
        virtual void takeMagicDMG(int value);
        virtual void setMaxHP(int value);
        void setIsVampire();
        void setIsWerewolf();
        void setIsTurnImmune();
        void setIsMagicImmune();
        
        
};

#endif // DEFAULT_STATE_H